// Multilevel Inheritance

#include<iostream>
using namespace std;

class GrandParent
{
    public:
        void grandParent()
        {
            cout<<"Story teller\n";
        }
};

class Parent : public GrandParent
{
    public:
        void parent()
        {
            cout<<"caring\n";
        }
};

class Child : public Parent
{
    public:
        void child()
        {
            cout<<"chutiya\n";
        }
};

int main()
{
    // GrandParent champaklal;
    // champaklal.grandParent();

    // Parent jethalal;
    // jethalal.parent();
    // jethalal.grandParent();

    Child tipendra;
    tipendra.child();
    tipendra.parent();
    tipendra.grandParent();
}
