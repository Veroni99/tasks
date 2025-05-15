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
void take_left(tree_node* start){ 
	tree_node* current = start;
	while (current != 0) {
		std::cout << current->value << std::endl;
		current = current->left;
	}
}
void take_right(tree_node* push){
	tree_node* now = push;
	while (now != 0) {
		std::cout << now->value << std::endl;
		now = now->right;
	}
}
void dfs(tree_node* start){
	tree_node* current = start;
	if(current == 0){
		return ;
	}
	std::cout << current->value << std::endl;
	dfs(current->left);
	dfs(current->right);	
 
}	
int main() {
	tree_node root;
	tree_node l11, l12, l21, l22, l23, l24, l31, l32, l41;
	root.value = 50;
	root.left = &l11;
	root.right = &l12;
	l11.left = &l21;
	l11.right = &l22;
	l12.left = &l23;
	l12.right = &l24;
	l21.left = l21.right = 0;
        l22.left = &l31;
	l22.right = &l32;
	l23.left = l23.right = 0;
	l24.left = l24.right = 0;
        l31.left = l31.right = 0;
	l32.left = &l41;
	l32.right = 0;
	l41.left = l41.right = 0;

	l11.value = 25;
	l12.value = 71;
	l21.value = 13;
	l22.value = 26;
	l23.value = 81;
	l24.value = 33;
	l31.value = 43;
	l32.value = 15;
	l41.value = 7;
/*	tree_node l1;
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
*/  
       	std::cout << " ************************************************************************* " << std::endl;
        take_left(&root);	
        std::cout << " ************************************************************************* " << std::endl;
        take_right(&l11);	
        std::cout << " ************************************************************************* " << std::endl;
	dfs(&root);
       	return 0;
}
