#include <bits/stdc++.h>

using  namespace std;
#define N 5
int a[N];
int front=-1,rear=-1;

// insert a element in the queue
void enqueue(int x){
      if(rear==N-1)
      cout << "Queue is full";
      else if(front ==-1&&rear==-1){
          front=0;
          rear=front;
          a[rear]=x;
      }else{
          rear++;
          a[rear]=x;
          }

}
// delete the element in a queue
void dequeue(){
    if(front==-1&&rear==-1)
          cout << "Queue is empty ."<< endl;
          else if (front==rear)
             front=rear=-1;
             else
    front++;
}

// print the first element
void peek(){
       if(front==-1&&rear==-1)
       cout << "Queue is empty!" << endl;
    else cout << a[front] << endl;
}

void display(){
             if(front==-1&&rear==-1)
       cout << "Queue is empty!" << endl;
       else{
       for(int i=front;i<=rear;i++)
       {
           cout << a[i] << " ";
       }
       }

}



int main(){
         enqueue(2);
         enqueue(4);
         enqueue(6);
         enqueue(8);
         enqueue(-1);
         dequeue();
         peek();
         display();



}
