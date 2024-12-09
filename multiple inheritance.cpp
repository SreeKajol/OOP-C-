 #include<bits/stdc++.h>
using namespace std;
class father{
int age;char name[400];
public:
    father(){
    cout<<"base father"<<endl;
    }
    void getf();
    void showf();

};
void father::getf(){
    cout<<"father get "<<endl;
cin>>age>>name;

}
void father::showf(){
cout<<"father show"<<endl;
cout<<"age ="<<age<<endl;
cout<<"name ="<<name<<endl;

}

class mother{
int age;char name[400];
public:
    void get();
    void show();
    mother(){
    cout<<"base mother"<<endl;}

};
void mother::get(){
    cout<<"motherm get "<<endl;
cin>>age>>name;
}
void mother::show(){
cout<<"mother show"<<endl;
cout<<"age= "<<age<<endl;
cout<<"name= "<<name<<endl;

}

class daughter:public mother,public father{
int age;char name[400];
public:
    void get();
    void show();
    daughter(){
    cout<<"i am in derived"<<endl;
    }

};
void daughter ::get(){
cout<<"daughter get"<<endl;
cin>>age>>name;
 getf();
mother::get();

}
void daughter::show(){
cout<<"daughter show"<<endl;
cout<<"age = "<<age<<endl;
cout<<"name = "<<name<<endl;
 showf();
mother::show();

}
int main(){
daughter mo;
//mo.get();
//mo.show();





return 0;
}

