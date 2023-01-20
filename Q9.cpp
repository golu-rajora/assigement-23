//9. Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    cout<<" a C++ program to find the maximum of two numbers:-"<<endl;
    cout<<"Enter the 2 number:-";
    int x,y;
    cin>>x>>y;
    if(x>y)
        cout<<"maximum number is="<< x;
    else
        cout<<"maximum number is="<< y;
    return 0;
}
