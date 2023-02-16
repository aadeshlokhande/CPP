// pointer - & , *
// int a;
// int *ptr;
// ptr = &a;

#include<iostream>
using namespace std ;
int main()
{
    int a = 10;
    int *ptr;
    ptr = &a;
    cout<<"value of a = "<<a<<endl;
    cout<<"Adderess of a = "<<&a<<endl;
    cout<<"value of ptr = "<<ptr<<endl;
    cout<<"Adderess of ptr = "<<&ptr<<endl;
    cout<<"value of *ptr = "<<*ptr<<endl;

    int **ptr2;
    ptr2 = &ptr;
    cout<<"value of ptr2 = "<<ptr2<<endl;
    cout<<"address of ptr2 = "<<&ptr2<<endl;
    cout<<"value of *ptr2 = "<<*ptr2<<endl;
    cout<<"value of **ptr2 = "<<**ptr2<<endl;
}