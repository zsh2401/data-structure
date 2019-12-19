#include "seqlist.h"
int main(void)
{
    auto sl = seqlist::createFrom(6, 1, 2, 3, 4, 5, 6);
    int buffer;
    for (int i = 0; i < sl->length; i++)
    {
        seqlist::get(sl, i, buffer);
        std::cout << buffer << std::endl;
    }
    return 0;
}