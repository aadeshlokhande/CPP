// hybrid inheritance

// #include<iostream>
// using namespace std;

// class A
// {
//     public:
//         void a()
//         {
//             cout<<"A class\n";
//         }
// };

// class B : public A
// {
//     public:
//         void b()
//         {
//             cout<<"B class\n";
//         }
// };

// class C 
// {
//     public:
//         void c()
//         {
//             cout<<"C class\n";
//         }
// };

// class D  : public B ,  public C
// {
//     public:
//         void d()
//         {
//             cout<<"D class\n";
//         }
// };

// int main()
// {
//     A obj_A;
//     // obj_A.a();
    
//     B obj_B;
//     // obj_B.a();
//     // obj_B.b();

//     C obj_C;
//     // obj_C.c();

//     D obj_D;
//     obj_D.b();
//     obj_D.c();
//     obj_D.d();
//     obj_D.a();
    
// }



// ----------------------------------


#include<iostream>
using namespace std;

class A
{
    public:
        A()
        {
            cout<<"a class\n";
        }
};

class B : public A
{
    public:
        B()
        {
            cout<<"b class\n";
        }
};

class C : public A
{
    public:
        C()
        {
            cout<<"c class\n";
        }
};

class D : public A
{
    public:
        D()
        {
            cout<<"d class\n";
        }
};

class E : public B
{
    public:
        E()
        {
            cout<<"e class\n";
        }
};

class F: public D, public E
{
    public:
        F()
        {
            cout<<"f class\n";
        }
};

class G: public F
{
    public:
        G()
        {
            cout<<"g class\n";
        }
};

class H : public F
{
    public:
        H()
        {
            cout<<"h class\n";
        }
};

int main()
{
    cout<<"************** A Object **********\n";
    A oA;
    cout<<"************** B Object **********\n";
    B oB;
    cout<<"************** C Object **********\n";
    C oC;
    cout<<"************** D Object **********\n";
    D oD;
    cout<<"************** E Object **********\n";
    E oE;
    cout<<"************** F Object **********\n";
    F oF;
    cout<<"************** G Object **********\n";
    G oG;
    cout<<"************** H Object **********\n";
    H oH;

}


