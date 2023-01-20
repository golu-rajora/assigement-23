//10. Write a C++ program to add all the numbers of an array of size 10
#include<iostream>
using namespace std;
int main()
{
    int a[10],s=0;
    cout<<"a C++ program to add all the numbers of an array of size 10:-"<<endl;
    cout<<"Enter the 10 number:-";
    for(int i=0;i<=9;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    cout<<"sum of 10 number is ="<< s;
    return 0;


}
