//5. Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    int l,w,h;
    cout<<"a C++ program to calculate the volume of a cuboid:-"<<endl;
    cout<<"enter a length width and height of the cuboid:-"<<endl;
    cin>>l>>w>>h;
    int v=l*w*h;
    cout<<"volume of a cuboid is="<<v;
    return 0;
}
