#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* next;

};

node*front=0;
node*rear=0;

void enqueue(int x){
     if(front==0&&rear==0){
        node*newnode= new node;
        newnode->data=x;
     front=newnode;
     rear=newnode;
     newnode->next=front;
     }else{
         node*newnode= new node();
         rear->next=newnode;
         newnode->data=x;
         newnode->next=front;
         rear=newnode;

     }

}

void dequeue(){
  node*temp=front;
  if(front==0&&rear==0)
    cout << "Queue is empty";
  else if(front==rear){
    front=rear=0;
    free(temp);
  }else{
  front=front->next;
  rear->next=front;
  free(temp);
  }

}
void peek(){
     if(front==0&&rear==0)
    cout << "Queue is empty";
    else
   cout << front-> data << endl;
}

void display(){
     node*temp=front;
      if(front==0&&rear==0)
    cout << "Queue is empty";
     else{
     while(temp!=rear){
        cout << temp->data << " ";
        temp=temp->next;
     }
cout << rear-> data << " ";
     }
}

int main(){
     enqueue(4);
     enqueue(6);
     enqueue(8);
     enqueue(-1);
     dequeue();
     peek();
     display ();


}
