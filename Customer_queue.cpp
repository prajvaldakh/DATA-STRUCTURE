#include<iostream>
using namespace std;

int main()
{
int queue[5];
int front = 0;
int rear = 0;

cout<<"Enter the 5 customer id : "<<endl;
for (int i = 0; i <5; i++)
{
cin>>queue[i];
}
cout<<"Enter customer order id: "<<endl;

for(int i = 0; i < 5; i++)
{
        cin>>queue[rear];
        rear++;


while (front < rear)
{
        cout<<"PROCESSING ORDER : "<<queue[front]<<endl;
        front++;
}
}
return 0;
}
