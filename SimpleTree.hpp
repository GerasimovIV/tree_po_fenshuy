#ifndef SimpleTree_H
#define SimpleTree_H

#include "Container.hpp"
typedef struct tree {
    int value;
    int hight;
    struct tree* left;
    struct tree* right;
} tree;
class SimpleTree: public Container
{
public:
    SimpleTree();
    ~SimpleTree();
    void insert(int value);
    bool exists(int value);
    void remove(int value);
    void print();

protected:
    tree* create(int i);
    tree* find(int i);
    tree* root;
    void insert_into_tree(tree* Head, tree* element);
    tree* search_by_value(tree* Head, int val);
    void delete_element_tree(tree** Head, tree* el_del);
    void delete_struckt(tree* Head);
    tree* search_head_for_delete(tree* Head, tree* el_del);
    void print_tree(tree* Head);
	tree* balance_tree(tree* node);
	void balance(tree* node, tree** Head);
	void small_left_rotation(tree* node_a);
	void big_left_rotation(tree* node_a);
	void big_right_rotation(tree* node_a);
	void small_right_rotation(tree* node_a);
	int get_hight_for_me(tree* node);
	int get_hight(tree* node);
	void change_hight(tree* Position);
	void print_tree_with_hight (tree* Position);
	void Balance_tree_polzovatel();
};


#endif
