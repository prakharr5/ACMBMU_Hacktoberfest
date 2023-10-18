#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void Enqueue() {
   int value;
   if (rear == n - 1)
   cout<<"Queue is Full"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>value;
      rear++;
      queue[rear] = value;
   }
}
void Dequeue() {
   if (front == - 1 || front > rear) {
      cout<<"Queue is Empty ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}

int main() {
   int option;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Exit"<<endl;
   while(option!= 3) {
      cout<<"Enter your choice : "<<endl;
      cin>>option;
      switch (option) {
         case 1: Enqueue();
         break;
         case 2: Dequeue();
         break;
         case 3: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   }
   return 0;
}
