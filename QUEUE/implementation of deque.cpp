#include <bits/stdc++.h>

using  namespace std;
#define N 5
int a[N];
int front=-1,rear=-1;

void insertfront(int x){
     if(front==-1&&rear==-1){
        front=0;
        rear=0;
        a[rear]=x;
     }else if((rear+1)%N==front)
            cout << "Queue is full";
            else {
                if(front==0)
                    front=N-1;
                else front--;
                a[front]=x;
            }

     }



void insertrear(int x){
      if(front==-1&&rear==-1){
        front=0;
        rear=0;
        a[rear]=x;
        }else if((rear+1)%N==front)
            cout << "Queue is full";
        else {
            if(rear==N-1)
                rear=0;
            else rear++;
            a[rear]=x;
        }


}

void delfront(){
    if(front==-1&&rear==-1)
        cout << "Queue is Empty";
        else if(front==rear)
            front=rear=-1;
        else {
        if(front==N-1)
            front=0;
        else front++;
            }

}

void delrear(){
    if(front==-1&&rear==-1)
        cout << "Queue is Empty";
        else if(front==rear)
            front=rear=-1;
    else {
        if(rear==0)
            rear=N-1;
        else rear--;
    }

}

void getfront(){
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
       insertfront(2);
       insertfront(4);
       delfront();
       insertrear(1);
       insertrear(6);
       insertrear(7);
       delrear();
       getfront();
       display();




}
