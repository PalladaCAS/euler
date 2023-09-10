#ifndef __EULER_TREE_LIBRARY_H_INCLUDED__
#define __EULER_TREE_LIBRARY_H_INCLUDED__

typedef struct {
    int n;
    void *nodes;
} euler_tree;

void euler_tree_init();
void euler_tree_delete();
