// inheritance 

// single 

// parent class - base class 
// child class - derive class

// #include<iostream>
// using namespace std;

// class Parent
// {
//     public:
//         void ParentQuality()
//         {
//             cout<<"good in maths\n";
//         }
// };

// class Child : public Parent
// {
//     public:
//         void ChildQuality()
//         {
//             cout<<"handsome\n";
//         }
// };

// int main()
// {
    // Parent nobita;
    // nobita.ParentQuality();
    
    // Child doraemon;
    // doraemon.ChildQuality();
    // doraemon.ParentQuality();
// }





// multiple
#include<iostream>
using namespace std;
class Dad
{
    public:
        void dadQuality()
        {
            cout<<"good in cricket\n";
        }
};

class Mom
{
    public:
        void momQuality()
        {
            cout<<"Good in kitchen\n";
        }
};


class Child : public Dad, public Mom
{
    public:
        void ChildQuality()
        {
            cout<<"chutiya\n";
        }
};



int main()
{
    Child montu;
    montu.ChildQuality();
    montu.dadQuality();
    montu.momQuality();
}






// multilevel
// heirarchical
// hybrid 