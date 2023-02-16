// error handling 

#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter the value of x = ";
    cin>>x;
    cout<<"Enter the value of y = ";
    cin>>y;
    try
    {
        if(y==0)
        {
            throw y;
        }
        else
        {
            cout<<"result = "<<x/y;
        }
    }
    catch(int a)
    {
        cout<<"your number is "<<a;
    }
    cout<<"\nhello";
}


// try 
// throw
// catch