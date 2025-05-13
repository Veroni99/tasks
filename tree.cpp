/*   
 *
 *                              50
 *                             /  \
 *                        25         71
 *                       /  \       /  \
 *                    13     26   81     33
 *                         /    \
 *                       43      15
 *                             /    
 *                            7
 * */
#include<iostream>
struct tree_node {
    int value;
    tree_node* left;
    tree_node* right;
};
int main() {
	tree_node root;
	root.value = 50;
	tree_node l1;
	root.left = &l1;
	l1.value = 25;
	tree_node l2;
	root.right = &l2;
	l2.value = 71;
	tree_node l3;
	l3.value = 13;
	l1.left = &l3;
        std::cout << (*root.left).value << std::endl;
	std::cout << root.left->value << std::endl;
	std::cout << root.right->value << std::endl;
	std::cout << root.left->left->value << std::endl;
        return 0;
}
