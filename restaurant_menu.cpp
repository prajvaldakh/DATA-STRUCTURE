#include<iostream>
using namespace std;

void menu()
{

        int choice;

        cout<<"===== RESTAURANT MENU ====="<<endl;
        cout<<"1.Pizza"<<endl;
        cout<<"2.Burger"<<endl;
        cout<<"3.Pasta"<<endl;
        cout<<"4.Exit"<<endl;

        cout<<"Enter your choice: "<<endl;
        cin>>choice;

if (choice == 1)
 {
        cout<<"You selected Pizza.";
        menu();
 }
else if (choice == 2)
 {
        cout<<"You Selected Burger.";
        menu();
 }
else if (choice == 3)
 {
        cout<<"You Selected Pasta.";
        menu();
 }
else if (choice == 4)
 {
       cout<<"Exit.";
        menu();
 }
else if  (choice == 5)
 {
        cout<<"THANK YOU.";
        menu();
 }
else if(choice == 6)
 {
        cout<<"Invalid Choice.";
        menu();
 }
};

int main()
{
menu();

return 0;
}
