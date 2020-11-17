#include<bits/stdc++.h>
using namespace std;
/*
BST-
*The left subtree of a node contains only nodes with keys lesser than the node’s key.
*The right subtree of a node contains only nodes with keys greater than the node’s key.
*The left and right subtree each must also be a binary search tree. 
*There must be no duplicate nodes.

*/
typedef struct node{
		int key;
		struct  node * left;
		struct node * right;
	} Node;
Node*  new_node(int data){
	Node* temp=(Node*)malloc(sizeof(struct node));
	temp->key=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
void inorder(Node* root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->key<<"  ";
		inorder(root->right);
	}
}
void preorder(node* root){
	if(root!=NULL){
		cout<<root->key<<"  ";
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(node* root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		cout<<root->key<<"  ";
	}
}
Node* insert(Node* node,int key){
	if(node==NULL){
		return new_node(key);
	}
	if(key<node->key){
		node->left=insert(node->left,key);
	}
	else if(key>node->key){
		node->right=insert(node->right,key);
	}
	return node;
}
Node* search(Node* root,int key){
	if(root==NULL || root->key==key){
		return root;
	}
	if(root->key < key){
		return search(root->right,key);
	}
	return search(root->left,key);
}
int main(){
	Node* root=NULL;
	int num;
	vector<int> v;
	cout<<"entre the root node data:"<<endl;
	cin>>num;
	root = insert(root, num);
	cout<<"enter your data:"<<endl;
	int i=0;
	while(cin>>num){
		v.push_back(num);
		insert(root,v[i]);
		i++;
	}
/*    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 10); 
    insert(root, 60); 
    insert(root, 5);
*/
    cout<<"\ninorder  ";
    inorder(root);
    cout<<"\npostorder  ";
    postorder(root);
    cout<<"\npreorder  ";
    preorder(root);
    return 0;
}