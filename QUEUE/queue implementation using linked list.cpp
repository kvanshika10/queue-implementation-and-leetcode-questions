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
        newnode->next=0;
     front=newnode;
     rear=newnode;
     }else{
         node*newnode= new node();
         rear->next=newnode;
         newnode->data=x;
         newnode->next=0;
         rear=newnode;

     }

}

void dequeue(){
     if(front==0&&rear==0)
    cout << "Queue is empty";
  else {
  node*temp=front;
  front=front->next;
  free(temp);
  }
}
void peek(){
     if(front==0&&rear==0)
    cout << "Queue is empty";
     else  cout << front-> data << endl;
       }

void display(){
     if(front==0&&rear==0)
    cout << "Queue is empty";
    else{
     node*temp=front;
     while(temp!=0){
        cout << temp->data << " ";
        temp=temp->next;
     }
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
