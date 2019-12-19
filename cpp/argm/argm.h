#ifndef __SORT_SEARCH_H
#define __SORT_SEARCH_H
#include "../fx.h"
#include "../seqlist/seqlist.h"
namespace argm
{
void bubbleSort(seqlist::SeqList seq);
void quickSort(seqlist::SeqList seq);
void heapSort(seqlist::SeqList seq);
} // namespace argm
#endif