#include "../argm.h"
namespace argm
{
void bubbleSort(seqlist::SeqList seq)
{
    bool hasChanged = true;
    int left, right;
    for (int i = 0; i < seq->length && hasChanged; i++)
    {
        hasChanged = false;
        for (int j = 0; j < seq->length - 1; j++)
        {
            seqlist::get(seq, j, left);
            seqlist::get(seq, j + 1, right);
            if (left > right)
            {
                hasChanged = true;
                seqlist::set(seq, j, right);
                seqlist::set(seq, j + 1, left);
            }
        }
    }
}
} // namespace argm