
#include <bits/stdc++.h>

using  namespace std;
#define N 5
int a[N];
int front=-1,rear=-1;

// insert a element in the queue
void enqueue(int x){
      if(front ==-1&&rear==-1){
          front=0;
          rear=0;
          a[rear]=x;
      }else if((rear+1)%N==front)
      cout << "Queue is full";
        else{
          rear=(rear+1)%N;
          a[rear]=x;
            }

}
// delete the element in a queue
void dequeue(){
    if(front==-1&&rear==-1)
          cout << "Queue is empty ."<< endl;
          else if (front==0&&rear==0)
             front=rear=-1;
             else
               front=(front+1)%N;
}

// print the first element
void peek(){
       if(front==-1&&rear==-1)
       cout << "Queue is empty!" << endl;
    else cout << a[front] << endl;
}

void display(){
    int i=front;
             if(front==-1&&rear==-1)
       cout << "Queue is empty!" << endl;
       else{
             while(i!=rear){
                cout << a[i] << " ";
                i=(i+1)%N;
             }

       cout << a[rear] << endl;
       }

}



int main(){
         enqueue(2);
         enqueue(4);
         enqueue(6);
         enqueue(8);
         enqueue(-1);
         display();
         dequeue();
         enqueue(11);
         dequeue();
         peek();
         display();



}
