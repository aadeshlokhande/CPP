// templates 

// int a;
// float b;

// #include<iostream>
// using namespace std;

// void swap(int a,int b)
// {
//     int c;
//     cout<<"Before swap"<<" a="<<a<<" b = "<<b<<endl;
//     c = a ;
//     a = b ;
//     b = c ;
//     cout<<"After swap"<<" a="<<a<<" b = "<<b<<endl;
// }

// void swap(double a,double b)
// {
//     double c;
//     cout<<"Before swap"<<" a="<<a<<" b = "<<b<<endl;
//     c = a ;
//     a = b ;
//     b = c ;
//     cout<<"After swap"<<" a="<<a<<" b = "<<b<<endl;
// }


// void swap(string a,string b)
// {
//     string c;
//     cout<<"Before swap"<<" a="<<a<<" b = "<<b<<endl;
//     c = a ;
//     a = b ;
//     b = c ;
//     cout<<"After swap"<<" a="<<a<<" b = "<<b<<endl;
// }

// int main()
// {
//     swap("a","b");
// }


// -------------------------------------------
#include<iostream>
using namespace std;

template <class T>
void swap(T a,T b)
{
    X c;
    cout<<"Before swap"<<" a="<<a<<" b = "<<b<<endl;
    c = a ;
    a = b ;
    b = c ;
    cout<<"After swap"<<" a="<<a<<" b = "<<b<<endl;
}


int main()
{
    // swap("a","b");
    // swap(11,12);
    // swap(12.12,11.11);
    swap(12.9, 98.9);
}