//6. Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    cout<<" a C++ program to calculate an average of 3 numbers:-"<<endl;
    cout<<"Enter the 3 number:-";
    int x,y,z;
    cin>>x>>y>>z;
    int sum=x+y+z;
    cout<<"average of 3 number is="<<sum/3.0;
    return 0;

}
