// goto statement - jump statements

// labal 
// goto statement


// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"Hello, ";
//     goto abc;
//     cout<<"good evening, ";
//     abc:
//     cout<<"Aadesh lokhande ";

// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"Hello, ";
//     abc:
//     cout<<"good evening, ";
//     goto abc;
//     cout<<"Aadesh lokhande ";
// }





#include<iostream>
using namespace std;
int main()
{
    int a = 3;
    cout<<"Hello, ";
    abc:
    cout<<"good evening, ";
    if(a>1)
    {
        --a;
        goto abc;
    }
    cout<<"Aadesh lokhande ";
}