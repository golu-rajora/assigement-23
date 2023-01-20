//8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    cout<<"a C++ program to swap values of two int variables without using third variable:-"<<endl;
    cout<<"enter a two number:-";
    int x,y;
    cin>>x>>y;
    cout<<"before swaping value is"<<endl<<"x="<<x<<endl<<"y= "<<y<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
   cout<<"after swaping value is"<<endl<<"x="<<x<<endl<<"y= "<<y;
   return 0;

}
