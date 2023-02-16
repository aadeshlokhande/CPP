// Multiple Inheritance
// A,B->C 

#include<iostream>
using namespace std;
class Mom
{
    public:
        void momQuality()
        {
            cout<<"Cooking\n";
        }
};

class Dad
{
    public:
        void DadQuality()
        {
            cout<<"Bhandan\n";
        }
};

class Child : public Dad, public Mom
{
    public:
        void childQuality()
        {
            cout<<"Singing\n";
        }
};

int main()
{
    cout<<"Dad\n";
    Dad Govinda;
    Govinda.DadQuality();
    cout<<"Mom\n";
    Mom Jyoti;
    Jyoti.momQuality();
    cout<<"Child\n";
    Child Pragati;
    Pragati.childQuality();
    Pragati.DadQuality();
    Pragati.momQuality();
}


// casing 
// camelCase
// PascalCase
// snake_case
// kebab-case