#ifndef __EULER_TREE_LIBRARY_H_INCLUDED__
#define __EULER_TREE_LIBRARY_H_INCLUDED__

typedef struct {
    unsigned int density;
    void **krone;
} euler_tree;

euler_tree *euler_plant_tree(euler_tree *);
void euler_fell_tree(euler_tree *);

#endif
