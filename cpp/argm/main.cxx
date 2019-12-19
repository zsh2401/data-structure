#include "argm.h"
void printEachOf(seqlist::SeqList seqList);
seqlist::SeqList createNew();
int main(int argc, char **argv)
{
    auto list = createNew();
    printEachOf(list);

    //冒泡排序
    argm::bubbleSort(list);
    printEachOf(list);

    //快排
    argm::quickSort(list);
    printEachOf(list);

    //快排
    argm::insertSort(list);
    printEachOf(list);
    return 0;
}

void printEachOf(seqlist::SeqList seqList)
{
    int buffer;
    std::cout << "[";
    for (int i = 0; i < seqList->length; i++)
    {
        seqlist::get(seqList, i, buffer);
        std::cout << buffer;
        if (i < seqList->length - 1)
        {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}
seqlist::SeqList createNew()
{
    return seqlist::createFrom(10, 113, 1232, 23, 455, 51, 36, 27, 98, 19, 10);
}