#include "../fx.h"
#include <stdarg.h>
namespace seqlist
{
typedef struct __seqlist
{
    int *dataArray;
    size_t length;
} * SeqList;
SeqList createFrom(size_t argc, int firstNum, ...)
{
    SeqList seq;
    create(seq, argc, firstNum);
    return seq;
}
fx::ExecStatus create(SeqList &seqList, size_t length, int firstNum, ...)
{
    int count;
    int *array = (int *)malloc(sizeof(int) * length);
    array[0] = firstNum;
    va_list ap;
    va_start(ap, firstNum);
    for (int i = 1; i < length; i++)
    {
        array[i] = va_arg(ap, int);
    }

    seqList = (SeqList)malloc(sizeof(__seqlist));
    seqList->length = length;
    seqList->dataArray = array;

    va_end(ap);
    return fx::RETCODE_SUCCESS;
}
fx::ExecStatus set(SeqList list, size_t index, int data)
{
    if (index >= list->length)
    {
        return fx::RETCODE_OVERFLOW;
    }
    list->dataArray[index] = data;
    return fx::RETCODE_SUCCESS;
}
fx::ExecStatus get(SeqList list, size_t index, int &result)
{
    if (index >= list->length)
    {
        return fx::RETCODE_OVERFLOW;
    }
    result = list->dataArray[index];
    return fx::RETCODE_SUCCESS;
}
} // namespace seqlist