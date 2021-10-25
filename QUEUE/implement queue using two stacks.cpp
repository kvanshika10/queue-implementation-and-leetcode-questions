#include <bits/stdc++.h>

using namespace std;
stack <int> a;
stack <int> b;

void enqueue(int x){
   a.push(x);
}

void dequeue(){
    if(a.empty())
        cout << "Queue is empty!";
    else{
  while(!a.empty()){
    b.push(a.top());
    a.pop();
  }
  b.pop();
  while(!b.empty()){
    a.push(b.top());
    b.pop();
  }

     }

}

void peek()
{
        if(a.empty())
        cout << "Queue is empty!";
         else{
                while(!a.empty()){
              b.push(a.top());
                 a.pop();
                                }
            cout << b.top()<< endl;

            while(!b.empty()){
            a.push(b.top());
              b.pop();
                    }



            }
}

void display()
{
           if(a.empty())
        cout << "Queue is empty!";
         else{
                while(!a.empty()){
              b.push(a.top());
                 a.pop();
                                }
        while(!b.empty()){
            cout << b.top() << " ";
            b.pop();

                        }


         }
}

int main()
{

     enqueue(5);
     enqueue(2);
     enqueue(-1);
      dequeue();
     enqueue(7);
     peek();
     display();

}
