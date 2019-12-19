#include <iostream>
#include "binarytree.h"
#define TOCHARP (char *)
using namespace btree;
int main(void)
{
    /*
         a
       /  \
      b    c
     / \  / \
    ^  d ^   e
    */
   
    const char *f = "\
         a \n\
       /  \\     \n\
      b    c     \n\
     / \\  / \\   \n\
    ^  d ^   e";

    std::cout << f << std::endl;

    BinaryTreeNode *root = createNode(TOCHARP "a");
    std::cout << "root has been created" << std::endl;

    createRChildOf(createLChildOf(root, TOCHARP "b"), TOCHARP "d");
    createRChildOf(createRChildOf(root, TOCHARP "c"), TOCHARP "e");

    std::cout << "tree has been created" << std::endl;

    std::cout << "dlr:";
    dlr(root, [](fx::data_t data) -> void {
        std::cout << data;
    });
    std::cout << std::endl;

    std::cout << "ldr:";
    ldr(root, [](fx::data_t data) -> void {
        std::cout << data;
    });
    std::cout << std::endl;

    std::cout << "lrd:";
    lrd(root, [](fx::data_t data) -> void {
        std::cout << data;
    });
    std::cout << std::endl;

    std::cout << "depth:" << depthOf(root) << std::endl;
    std::cout << "leafs:" << leafsOf(root) << std::endl;

    return 0;
}