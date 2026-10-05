#include <iostream>
using namespace std;

void token()\
{
    cout << "\n-------------------State Bank Of India-----------------";
    cout << "\n1. Deposit Money";
    cout << "\n2. Check Balance";
    cout << "\n3. Withdraw Money";
    cout << "\n4. Exit";
    cout << "\nENTER YOUR CHOICE:- ";
}

int main()
{
    int choice;

    do
    {
        token();
        cin>>choice;

        if(choice==1)
        {
            cout<<"Money Is Deposited!!!"<<endl<<endl;
        }

        else if(choice==2)
        {
            cout<<"Balance is:- "<<endl<<endl;
        }

        else if(choice==3)
        {
            cout<<"Money is Withdrawed!!!"<<endl<<endl;
        }


        else if(choice==4)
        {
            cout<<"THnak you:)"<<endl<<endl;
        }

        else
        {
            cout<<"invalid token, try again"<<endl<<endl;
        }

    } 
    while (choice!= 4);

    return 0;
    
}
