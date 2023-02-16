// Call by Value & Call by Referance 

// #include<iostream>
// using namespace std;
// void abc(int *a)
// {
//     cout<<"Enter a number = ";
//     cin>>*a;
// }

// int main()
// {
//     int a;
//     abc(&a);
//     cout<<"your number = "<<a<<endl;
// }




// swapping 2 number 
// #include<iostream>
// using namespace std;
// void swap(int a, int b)
// {
//     int c;
//     c = a;
//     a = b;
//     b = c;
// }


// int main()
// {
//     int a = 10, b = 20;
//     cout<<"a = "<<a<<" and b = "<<b<<endl;
//     swap(a,b);
//     cout<<"a = "<<a<<" and b = "<<b<<endl;
// }




#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}


int main()
{
    int a = 10, b = 20;
    cout<<"a = "<<a<<" and b = "<<b<<endl;
    swap(&a,&b);
    cout<<"a = "<<a<<" and b = "<<b<<endl;
}