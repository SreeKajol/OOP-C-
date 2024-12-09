#include <iostream>
using namespace std;

class animal
{
    int a, b;

public:
    animal(){
        a=0;
        b=0;
    }
    void setValue(int a, int b){
        this->a= a;
        this->b= b;
    }
    void display(){
        cout<<"a = "<<a<<"\n";
        cout<<"b = "<<b<<"\n";
    }
    //this is parameter wise copy constractor 
    // animal (const animal &obj){ 
    //     this->a= obj.a;
    //     this->b= obj.b;
    // }
};

int main()
{
    animal dog, cat, hen;
    dog.setValue(10,20);
    dog.display();

    cat.setValue(50,60);
    cat.display();

    hen= dog;
    hen.display();
}