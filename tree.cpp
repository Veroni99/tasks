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
	tree_node l4;
        l4.value = 26;
        l2.right = &l4;
	tree_node l5;
	l5.value = 81;
	l2.left = &l5;
	tree_node l6;
	l6.value = 33;
	l3.right = &l6;
	tree_node l7;
	l7.value = 43;
        l3.left = &l7;
	tree_node l8;
	l8.value = 15;
	l4.left = &l8;
	tree_node l9;
	l9.value = 7;
	l4.right = &l9;
 //       std::cout << (*root.left).value << std::endl;
        std::cout << "            " << root.value << std::endl;
	std::cout << "       /" << "\ " << std::endl;
	std::cout << "    " << root.left->value << "             " << root.right->value << std::endl;
  //	std::cout << root.right->value << std::endl;
	std::cout << root.left->left->value << "      " << root.right->right->value << "     " << (*l2.left).value << "      " << (*l3.right).value << std::endl;
	std::cout << "    " << (*l3.left).value << "     " << (*l4.left).value << std::endl;
	std::cout << "        " << (*l4.right).value << std::endl;
        return 0;
}
