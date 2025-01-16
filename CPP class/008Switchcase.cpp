// switch case 
// switch(value)
// {
//     case value1: 
//         statements
//     case value2:
//         statements
//     case value3:
//         statements
//     case value4:
//         statements
//     case value5:
//         statements
//         .
//         .
//         .
//     default:
//         statements;
// }



#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number = ";
    cin>>a;

    switch(a)
    {
        case 1:
            cout<<"ONE\n";
            break;

        case 2:
            cout<<"TWO\n";
            break; 

        case 3:
            cout<<"Three\n";
            break;

        case 4:
            cout<<"four\n";
            break;

        case 5:
            cout<<"five\n";
            break;

        default:
            cout<<"Invalid number\n";
            break;
    }
}

// homework
// get a number and print month name 
// get a number and print weekday