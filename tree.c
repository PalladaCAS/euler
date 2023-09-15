#include <stdio.h>

#include "tree.h"

euler_tree *euler_plant_tree(euler_tree *target) {
    target->density = 0;
    target->krone = NULL;
}

void target euler_fell_tree(euler_tree *target) {
    target->density = 0;
    free(target->krone);
}
