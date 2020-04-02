#include "../fx.h"
namespace ds
{
template <class TK, class TV>
class HashMapEntry
{
private:
    TK *_key;
    TV *_value;
public:
    TK *getKey()
    {
        return _key;
    }
    TV *getValue()
    {
        return _value;
    }
    HashMapEntry(TK *key, TV *value)
    {
        _key = key;
        _value = value;
    }
};
template <class TK, class TV>
class HashMap
{
private:
    HashMapEntry<TK, TV> *entries;
    size_t _size;
    size_t _capcity;

public:
    HashMap(size_t capcity = 2 ^ 4)
    {
        _capcity = capcity;
        elements = calloc(capcity, sizeof(HashMapEntry<TK, TV>));
    }

    void put(TK key, TV value)
    {
        const size_t originAddress = getAddress(key);
        size_t time = 1;
        while (!isUsable(address) && time < _capcity)
        {
            size_t address = getNext(originAddress, time);
            time++;
        }
        if (time == _capcity)
        {
            appendCapcity();
            put(key, value)
        }
        else
        {
            entries[address] = new HashMapEntry(key, value);
            _size++;
        }
    }

    TV get(TK key)
    {
        const size_t originAddress = getAddress(key);
        size_t address = originAddress;
        size_t time = 1;
        while (entries[address].getKey() != key && time < _capcity)
        {
            address = getNext(originAddress, time);
            time++;
        }
        if (time == _capcity)
        {
            return NULL;
        }
        else
        {
            return entries[address];
        }
    }

    size_t getCapcity()
    {
        return _capcity;
    }

    size_t getSize()
    {
        return _size;
    }

private:
    void appendCapcity()
    {
    }
    bool isUsable(size_t address)
    {
        return entries[address] == NULL;
    }
    size_t getNext(int origin, size_t times)
    {
        return (origin + times) % _capcity;
    }
    size_t getHashCode(TK key)
    {
        return (size_t)key;
    }
    size_t getAddress(TK key)
    {
        return getHashCode(key) % capcity();
    }
};
} // namespace ds