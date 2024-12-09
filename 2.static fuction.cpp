#include<bits/stdc++.h>
using namespace std;

class student
{
public:
    int x;
    static int age;
    static void get()
    {      // use only static variable
             //cin>>x; get error
        printf("enter your age");
        cin>>age;
    }
    void display()
    {
        cout<<"your age is :"<<age<<endl;
    }
};
int student:: age=0;
int main()
{
    student asik,atik;
    asik.get();
    atik.get();
    student::get();
    asik.display();




    return 0;
}

