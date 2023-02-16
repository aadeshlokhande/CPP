// recursion
// #include<iostream>
// using namespace std;
// void abc()
// {
//     cout<<"Hello ";
//     abc();
// }

// int main()
// {
//     abc();
// }




// #include<iostream>
// using namespace std;
// void abc(int a)
// {
//     if(a>=1)
//     {
//         cout<<"Hello ";
//         abc(a-1);
//     }
// }

// int main()
// {
//     abc(5);
// }


// ==========================
// 5! = 5x4x3x2x1 
// 4! = 4x3x2x1

// 5! = 5x4!
// n! = n x (n-1)!
// 1! = 1 
// 0! = 1 

#include<iostream>
using namespace std;
int factorial(int a)
{
    if(a==1 || a==0)
    {
        return 1;
    }
    else 
    {
        return a * factorial(a-1);
    }
}

int main()
{
    int num = 4;
    cout<<factorial(num)<<endl;
}






