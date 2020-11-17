#include<bits/stdc++.h>
using namespace std;
/*
	 The functions supported by queue are : 

empty() – Returns whether the queue is empty.
size() – Returns the size of the queue.
queue::swap() in C++ STL: Exchange the contents of two queues but the queues must be of same type, although sizes may differ.
queue::emplace() in C++ STL: Insert a new element into the queue container, the new element is added to the end of the queue.
queue::front() and queue::back() in C++ STL– front() function returns a reference to the first element of the queue. back() function returns a reference to the last element of the queue.
push(g) and pop() – push() function adds the element ‘g’ at the end of the queue. pop() function deletes the first element of the queue.
*/

/*

// CPP code to illustrate 
// Queue in Standard Template Library (STL)
#include <iostream>
#include <queue>

using namespace std;

// Print the queue
void showq(queue <int> gq)
{
	queue <int> g = gq;
	while (!g.empty())
	{
		cout << '\t' << g.front();
		g.pop();
	}
	cout << '\n';
}

// Driver Code
int main()
{
	queue <int> gquiz;
	gquiz.push(10);
	gquiz.push(20);
	gquiz.push(30);

	cout << "The queue gquiz is : ";
	showq(gquiz);

	cout << "\ngquiz.size() : " << gquiz.size();
	cout << "\ngquiz.front() : " << gquiz.front();
	cout << "\ngquiz.back() : " << gquiz.back();

	cout << "\ngquiz.pop() : ";
	gquiz.pop();
	showq(gquiz);

	// We can also use front and back as 
	// iterators to traverse through the queue
	count<<"Using iterators : ";
	for(auto i = gquiz.front(); i != gquiz.back(); i++)
	{
	count<< i <<" ";
	}
	return 0;
}


*/
int q[100], n = 100, front = - 1, rear = - 1;
void Insert() {
   int val;
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      q[rear] = val;
   }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< q[front] <<endl;
      front++;;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<q[i]<<" ";
         cout<<endl;
   }
}
int main() {
   int ch;
   do {
   	  cout<<"1) Insert element to queue"<<endl;
  	  cout<<"2) Delete element from queue"<<endl;
   	  cout<<"3) Display all the elements of queue"<<endl;
   	  cout<<"4) Exit"<<endl;
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}