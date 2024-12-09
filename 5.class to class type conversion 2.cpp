#include<bits/stdc++.h>
using namespace std;

class stock2
{  public:
    int code;
    float val;
public:
    stock2()
    {
        code=0;
        val=0;
    }
    stock2(int x, float y)
    {
        code=x;
        val=y;
    }
    void disp()
    {
        cout<<"code"<<code<<endl;
        cout<<"total value BDT"<<val<<endl;
    }

//    stock2 (stock1 p)
//    {
//        code=p.getcode ();
//        val=p.getitem() * p.getprice ();
//    }
};


class stock1
{
    int code, item;
    float price;
public:
    stock1(int a, int b,float c)
    {
        code=a;
        item=b;
        price=c;
    }
    void disp()
    {
        cout<<"code"<<code<<endl;
        cout<<"item"<<item<<endl;
        cout<<"price per item BDT"<<price<<endl;
    }
    int getcode()
    {
        return code;
    }
    int getitem()
    {
        return item;
    }
    int getprice()
    {
        return price;
    }
    operator float()
    {
        return ( item*price );
    }
operator stock2(){
stock2 i2;
i2.code=code;
i2.val=getprice()*getitem();
return i2;
}
};






int main()
{
    stock1 i1(10,10,12.5);
    stock2 i2; //i2.disp();
    float tot_val;
    tot_val=i1;
    i2=i1;
    cout<<"stock details-stock1-type"<<endl;
    i1.disp() ;
    cout<<"stock value"<<endl;
    cout<< tot_val<<endl;
    cout<<"stock details-stock2-type"<<endl;
    i2.disp() ;
    return 0;
}

