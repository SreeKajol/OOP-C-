#include<bits/stdc++.h>
using namespace std;
class worker // Base class declaration
{
int age;
char name [20] ;
public:
 void get();
 void show();
 worker(){
 cout<<"inside from worker"<<endl;
 }
};
void worker::get ( )
{cout<<"enter your name";
 cin >> name;
 cout<<"enter your age";
 cin>>age;
}
void worker::show(){

cout<<"your name is"<<name<<endl;
cout<<"your age is "<<age<<endl;
}

 class manager : public worker //Intermediate base class derived
{ //publicly from the base class
int now;
public:
void get ( ) ;
void show( ) ;
manager(){
cout<<"inside from manager"<<endl;
}
};
void manager :: get ( )
{
worker ::get () ; //calling get ( ) fn. of base class
 cout<<"no of workers under you:";
cin >> now;
}
void manager :: show ( )
{
worker :: show ( ) ; //calling show ( ) fn. of base class
cout <<"number of worker under me"<< now<<endl;
}
class eco:public manager{
int nom; //intermediate base class
public:
void get ( ) ;
void show ( ) ;
eco(){
cout<<"inside eco"<<endl;
}
};
void eco::get(){

manager::get();
cout<<"number of manager under your are";
cin>>nom;

}
void eco::show(){
manager::show();
cout<<"number of manager under me";
cout<<nom<<endl;

}

int main(){

eco asik;
asik.get();
asik.show();






return 0;
}

