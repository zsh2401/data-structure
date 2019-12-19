#include <iostream>
// #include "lib/linkedlist.hpp"
// #include "lib/stack.hpp"
// #include "lib/linkedstack.hpp"
// #include "lib/linkedqueue.h"
#include "lib/circqueue.hpp"
void CQueue_test()
{
    CQueue q;
    CQueue_init(q);
    CQueue_en(q, (char *)"a");
    CQueue_en(q, (char *)"b");
    CQueue_en(q, (char *)"c");
    CQueue_en(q, (char *)"d");
    CQueue_en(q, (char *)"e");
    CQueue_en(q, (char *)"f");
    CQueue_en(q, (char *)"g");

    data_t buffer;

    CQueue_de(q, buffer);
    std::cout << buffer << endl;
    CQueue_de(q, buffer);
    std::cout << buffer << endl;
    CQueue_de(q, buffer);
    std::cout << buffer << endl;
    CQueue_de(q, buffer);
    std::cout << buffer << endl;
    CQueue_de(q, buffer);
    std::cout << buffer << endl;
    CQueue_de(q, buffer);
    std::cout << buffer << endl;

    CQueue_en(q, (char *)"g");
    CQueue_de(q, buffer);
    
    std::cout << buffer << endl;
}
void LQueue_test()
{
    // LinkedQueue q;
    // LQueue_init(q);
    // LQueue_en(q, (char *)"a");
    // LQueue_en(q, (char *)"b");

    // data_t buffer;

    // LQueue_de(q, buffer);
    // std::cout << buffer << endl;

    // LQueue_de(q, buffer);
    // std::cout << buffer << endl;
}
void stack_test()
{
    // Stack stack;
    // Stack_init(stack);
    // Stack_push(stack, (char*)"a");
    // Stack_push(stack, (char*)"c");
    // Stack_push(stack, (char*)"g");
    // Stack_push(stack, (char*)"k");

    // data_t poped;
    // Stack_pop(stack, poped);
    // std::cout << poped << endl;

    // Stack_pop(stack, poped);
    // std::cout << poped << endl;
}
void LStack_test()
{
    // LinkedStack stack;
    // LStack_init(stack);

    // LStack_push(stack, (char *)"a");
    // LStack_push(stack, (char *)"b");
    // LStack_push(stack, (char *)"c");

    // data_t buffer;

    // LStack_getTop(stack, buffer);
    // std::cout << buffer << endl;

    // LStack_pop(stack, buffer);
    // std::cout << buffer << endl;

    // LStack_pop(stack, buffer);
    // std::cout << buffer << endl;

    // LStack_pop(stack, buffer);
    // std::cout << buffer << endl;
}
void list_test()
{
    // LinkedList list;
    // LL_init(list);
    // LL_append(list, 7);
    // LL_append(list, 8);

    // LL_printInfo(list);
}

int main(int argc, char **argv)
{
    CQueue_test();
    return 0;
}