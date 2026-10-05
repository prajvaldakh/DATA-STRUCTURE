#include <iostream>
using namespace std;

int main()
{
        int queue[4];
        int rear = 0;
        int front = 0;

        cout<<"Enter Token ID: "<<endl;

        for(int i = 0; i<4; i++)
{
        cin>>queue[rear++];
}

while (front<rear)
{
        cout<<"Token Number: "<<queue[front++]<<endl;
}
return 0;
}
