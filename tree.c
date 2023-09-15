#include <stdio.h>

#include "tree.h"

euler_tree *euler_plant_tree(euler_tree *target) {
    target->density = 0;
    target->krone = NULL;
}

void euler_fell_tree(euler_tree *target) {
    target->density = 0;
    free(target->krone);
    /* error free need treat */
}

void euler_add_node_tree(euler_tree *target, void *content, unsigned int size) {
    if (!target->density) {
        target->krone = malloc(size);
        /* error malloc need treat */
    } else {
        target->krone = realloc(target->density * size + size);
        /* error realloc need treat */
    }
    target->krone[target->density] = content;
    target->density += 1;
} 
