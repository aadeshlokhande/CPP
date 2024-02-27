// // public, private and protected

#include<iostream>
using namespace std;

class Abc
{
    private:
        void a()
        {
            cout<<"A class";
        }

    public:
        void b()
        {
            cout<<"B class";
        }

    protected:
        void c()
        {
            cout<<"C class";
        }
};

class Xyz : public Abc
{
    public:
        void runFunction()
        {
            c();
        }
};


int main()
{
    Xyz obj;
    obj.runFunction();
}




// #include <iostream>
// using namespace std;
// class Parent 
// {
// protected:
// 	int id_protected;
// };

// class Child : public Parent 
// {
// public:
// 	void setId(int id)
// 	{
// 		id_protected = id;
// 	}

// 	void displayId()
// 	{
// 		cout << "id_protected is: " << id_protected << endl;
// 	}
// };

// int main()
// {
// 	Child obj1;
// 	obj1.setId(81);
// 	obj1.displayId();
// 	return 0;
// }
