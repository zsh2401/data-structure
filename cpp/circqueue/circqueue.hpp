#include "../fx.h"
using namespace fx;
#define __CQUEUE_ELE_CAPCITY 6
#define MOD %
#define __CQUEUE_ARR_SIZE (__CQUEUE_ELE_CAPCITY + 1)
typedef struct queue
{
    size_t front;
    size_t rear;
    data_t *array;
} * CQueue;

ExecStatus CQueue_init(CQueue &q)
{
    q = (CQueue)malloc(sizeof(CQueue));
    q->array = (data_t *)malloc(sizeof(data_t) * __CQUEUE_ARR_SIZE);
    q->front = 0;
    q->rear = 0;
    return RETCODE_SUCCESS;
}
ExecStatus CQueue_full(CQueue q)
{
    return (q->rear + 1) % __CQUEUE_ARR_SIZE == q->front;
}
bool CQueue_empty(CQueue q)
{
    return q->front == q->rear;
}
ExecStatus CQueue_en(CQueue q, data_t data)
{
    if (CQueue_full(q))
    {
        return RETCODE_OVERFLOW;
    }
    size_t index = (q->rear % __CQUEUE_ARR_SIZE);
    q->array[index] = data;
    q->rear = (q->rear + 1) % __CQUEUE_ARR_SIZE;
    return RETCODE_SUCCESS;
}

ExecStatus CQueue_de(CQueue q, data_t &data)
{
    data = q->array[q->front];
    q->front = (q->front + 1 % __CQUEUE_ARR_SIZE);
    return RETCODE_SUCCESS;
}
ExecStatus CQueue_clear(CQueue q)
{
    data_t buffer;
    while (!CQueue_empty(q))
    {
        CQueue_de(q, buffer);
    }
    return RETCODE_SUCCESS;
}

ExecStatus CQueue_destory(CQueue &q)
{
    CQueue_clear(q);
    free(q);
    q = NULL;
    return RETCODE_SUCCESS;
}