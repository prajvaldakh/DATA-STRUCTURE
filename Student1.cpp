#include<iostream>
using namespace std;
class student
{
public:

int rollno;

void input()
{
cout<<"Roll no of student: "<<endl;
  cin>>rollno;

}
void display()
    {
        cout<<"Roll no of student:"<<rollno<<endl;
    }
};
int main()
{
student s1,s2,s3,s4;

s1.input();
s1.display();

s2.input();
s2.display();

s3.input();
s3.display();

s4.input();
s4.display();
return 0;
}
