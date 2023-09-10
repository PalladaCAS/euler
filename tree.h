#ifndef __EULER_TREE_LIBRARY_H_INCLUDED__
#define __EULER_TREE_LIBRARY_H_INCLUDED__

typedef struct {
    unsigned int n;
    void **nodes;
} euler_tree;

void euler_tree_init();
void euler_tree_deinit();

#endif
