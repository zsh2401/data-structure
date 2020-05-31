#include "../headers/argm.h"
seqlist::SeqList createNew();
int main(int argc, char **argv)
{
    auto fList = seqlist::createFrom(7, 38, 65, 97, 76, 13, 27, 10);
    argm::selectSort(fList);
    argm::printEachOf(fList);
    // argm::bubbleSortSingle(fList);
    // argm::printEachOf(fList);
    // argm::bubbleSortSingle(fList);
    // argm::printEachOf(fList);
    // argm::bubbleSortSingle(fList);
    // argm::printEachOf(fList);

    auto list = createNew();
    argm::printEachOf(list);

    //冒泡排序
    argm::bubbleSort(list);
    argm::printEachOf(list);

    //快排
    argm::quickSort(list);
    argm::printEachOf(list);

    //快排
    argm::insertSort(list);
    argm::printEachOf(list);
    return 0;
}


seqlist::SeqList createNew()
{
    return seqlist::createFrom(10, 113, 1232, 23, 455, 51, 36, 27, 98, 19, 10);
}