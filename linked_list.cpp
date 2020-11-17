#include<bits/stdc++.h>
using namespace std;
/*
linked list operation-
1-insertion
2-deletion
3-traversal
*/

/*
linked lists using STL-

#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std; 

//function for printing the elements in a list 
void showlist(list <int> g) 
{ 
	list <int> :: iterator it; 
	for(it = g.begin(); it != g.end(); ++it) 
		cout << '\t' << *it; 
	cout << '\n'; 
} 

int main() 
{ 

	list <int> gqlist1, gqlist2; 


	for (int i = 0; i < 10; ++i) 
	{ 
		gqlist1.push_back(i * 2); 
		gqlist2.push_front(i * 3); 
	} 
	cout << "\nList 1 (gqlist1) is : "; 
	showlist(gqlist1); 

	cout << "\nList 2 (gqlist2) is : "; 
	showlist(gqlist2); 

	cout << "\ngqlist1.front() : " << gqlist1.front(); 
	cout << "\ngqlist1.back() : " << gqlist1.back(); 

	cout << "\ngqlist1.pop_front() : "; 
	gqlist1.pop_front(); 
	showlist(gqlist1); 

	cout << "\ngqlist2.pop_back() : "; 
	gqlist2.pop_back(); 
	showlist(gqlist2); 

	cout << "\ngqlist1.reverse() : "; 
	gqlist1.reverse(); 
	showlist(gqlist1); 

	cout << "\ngqlist2.sort(): "; 
	gqlist2.sort(); 
	showlist(gqlist2); 

	return 0; 

} 


*/
typedef struct node{
	int data;
	struct node *next;
}node;
node *head=NULL;
void insert_at_begining(node **ref,int data){
	node * new_node=(node *)malloc(sizeof(node));
	new_node->data=data;
	new_node->next=(*ref);
	(*ref)=new_node;
}
void insert_at_end(node **ref,int data){
	node * new_node=(node *)malloc(sizeof(node));
	node *last=*ref;
	new_node->data=data;
	new_node->next=NULL;
	if(*ref==NULL){
		*ref=new_node;
		return;
	}
	while(last->next!=NULL){
		last=last->next;
	}
	last->next=new_node;
	return;
}
void insert_after(node *prev_node,int data){
	if(prev_node==NULL){
		cout << "the given previous node cannot be NULL";
    	return;
	}
	node * new_node=(node *)malloc(sizeof(node));
	new_node->data=data;
	new_node->next=prev_node->next;
	prev_node->next=new_node;
}
void delete_node(node **ref,int key){
	node *temp=*ref,*prev;
	if(temp!=NULL && temp->data==key){
		*ref=temp->next;
		free(temp);
		return;
	}
	while(temp!=NULL && temp->data!=key){
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL){
		return;
	}
	prev->next=temp->next;
	free(temp);
}
void printList(node *node){
	while(node!=NULL){
		cout<<node->data<<"  ";
		node=node->next;
	}
}
int main(){
	insert_at_end(&head,1);
	insert_at_begining(&head,2);
	insert_at_begining(&head,3);
	insert_at_end(&head,4);
	insert_after(head->next,5);
	cout<<"LINKED LIT IS:";
	printList(head);
	cout << "\nAfter deleting an element: ";
	delete_node(&head,3);
	printList(head);
	return 0;
}