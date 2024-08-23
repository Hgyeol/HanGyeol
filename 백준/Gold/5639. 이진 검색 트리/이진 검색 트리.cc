// Online C++ compiler to run C++ program online
#include <iostream>
#include <malloc.h>
using namespace std;
struct tree {
    int data;
    struct tree * left;
    struct tree * right;
};
typedef struct tree Tree;
Tree* getNode(void) {
	Tree* newNode = (Tree*)malloc(sizeof(Tree));
	if(newNode != NULL) {
		newNode->data = 0;
		newNode->left = 0;
		newNode->right = 0;
	}
	return newNode;
}

void insert(Tree** root, int data) {
	if (*root == NULL) {
		*root = getNode();
		if (*root != NULL) (*root)->data = data;
	}
	else if (data < (*root)->data) insert(&(*root)->left, data);
	else if (data > (*root)->data) insert(&(*root)->right, data);
	else return;
}

void showPost(Tree* root) {
	if(root == NULL) return;
	else {
		showPost(root->left);
		showPost(root->right);
		printf("%d ", root->data);
	}
}
int main() {
    int num; 
    Tree* root = NULL;
    // for(int i = 0; i < n; i++) {
    //     cin >> num;
    //     insert(&root, num);
    // }
    while(cin >> num) {
        insert(&root, num);
    }
    showPost(root);
    return 0;
}