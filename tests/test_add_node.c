#include <stdio.h>

#include "../tree.h"

int main() {
    euler_tree *some_tree = NULL;
    euler_plant_tree(some_tree);
    printf("----Create_tree----\n");
    printf("--%d density--\n", some_tree->density);
    euler_fell_tree(some_tree);
}
