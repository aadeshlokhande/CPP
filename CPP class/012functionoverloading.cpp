// function Overloading 

#include<iostream>
using namespace std;

void calc(int a)
{
    cout<<a*a<<endl;
}

void calc(int a,int b)
{
    cout<<a+b<<endl;
}

void calc(int a,int b,int c)
{
    cout<<a*b*c<<endl;
}

void calc(double a)
{
    cout<<"this is double value"<<endl;
}

void calc(char a)
{
    cout<<"this is char value"<<endl;
}

int main()
{
    calc(6);
    calc(6,3);
    calc(6,34,5);
    calc('3');
    calc(3.4);
}