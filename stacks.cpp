#include<bits/stdc++.h>
using namespace std;
/*
The functions associated with stack are:
empty() – Returns whether the stack is empty – Time Complexity : O(1)
size() – Returns the size of the stack – Time Complexity : O(1)
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
pop() – Deletes the top most element of the stack – Time Complexity : O(1)

*/

/*
// CPP program to demonstrate working of STL stack 
#include <bits/stdc++.h> 
using namespace std; 

void showstack(stack <int> s) 
{ 
	while (!s.empty()) 
	{ 
		cout << '\t' << s.top(); 
		s.pop(); 
	} 
	cout << '\n'; 
} 

int main () 
{ 
	stack <int> s; 
	s.push(10); 
	s.push(30); 
	s.push(20); 
	s.push(5); 
	s.push(1); 

	cout << "The stack is : "; 
	showstack(s); 

	cout << "\ns.size() : " << s.size(); 
	cout << "\ns.top() : " << s.top(); 


	cout << "\ns.pop() : "; 
	s.pop(); 
	showstack(s); 

	return 0; 
} 

*/
int st[100],n=100,top=-1;
void push(int val){
	if(top>=n-1){
		cout<<"stackoveflow"<<endl;
	}
	else{
		top++;
		st[top]=val;
	}
}
void pop(){
	if(top<0){
		cout<<"stunderflow"<<endl;
	}
	else{
		cout<<"the element poped is:"<<st[top]<<endl;
		top--;
	}
}
void display(){
	if(top<0){
		cout<<"st is empty"<<endl;
	}
	else{
		for(int i=top;i>=0;i--){
			cout<<st[i]<<"  ";
		}
		cout<<endl;
	}
}

int main(){
	int val,ch;
    do {
      cout<<"Enter choice: "<<endl;
      cout<<"Enter choice: "<<endl;
   	  cout<<"1) Push in st"<<endl;
     cout<<"2) Pop from st"<<endl;
     cout<<"3) Display st"<<endl;
     cout<<"4) Exit"<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
	return 0;
}