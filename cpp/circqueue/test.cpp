#include "../fx.h"
#include "circqueue.h"
int main(int argc, char **argv)
{

    void *buffer;
    cqueue::CQueue q;
    cqueue::CQueue_init(q);
    cqueue::CQueue_en(q, (void *)"aabbcc");
    cqueue::CQueue_en(q, (void *)"aabbcc");
    cqueue::CQueue_en(q, (void *)"aabbcc");
    cqueue::CQueue_en(q, (void *)"aabbcc");
    cqueue::CQueue_en(q, (void *)"aabbcc");
    cqueue::CQueue_en(q, (void *)"aabbcc");
    cqueue::CQueue_de(q, buffer);
    std::cout << cqueue::CQueue_sizeof(q) << std::endl; //should be 5
    std::cout << cqueue::CQueue_full(q) << std::endl;   //should be 0
}