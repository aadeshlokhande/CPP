// class 
// object

#include<iostream>
using namespace std;

class Abc
{
    public:
        int a;
        int b;
};

int main()
{
    Abc obj;
    obj.a = 10;
    Abc obj1;
    obj1.a = 20;

    cout<< obj1.a;
    return 0;
}