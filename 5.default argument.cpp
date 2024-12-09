#include<bits/stdc++.h>
using namespace std;
int sum(int x,int y){
return x+y;
}
int sum1(int x,int y=30){
return x+y;
}
int main(){
int x,y;
cin>>x>>y;
cout<<sum(x,y)<<endl;
cout<<sum1(x)<<endl;

return 0;
}
