// Polymorphism

// compile time
// function overloading

// #include<iostream>
// using namespace std;

// void greet()
// {
//     cout << "Hello Dear"<<endl;
// }

// void greet(int a)
// {
//     cout << "Hello Dear, its "<<a<<" AM"<<endl;
// }

// int main()
// {
//     greet();
//     return 0;
// }


// ============================================
// #include<iostream>
// using namespace std;

// void calc(int a)
// {
//     cout<< a*a<<endl;
// }

// void calc(int a,int b)
// {
//     cout<< a+b <<endl;
// }
// void calc(double a,int b)
// {
//     cout<< a-b <<endl;
// }

// void calc(int a,double b)
// {
//     cout<< a*b <<endl;
// }

// void calc(double a,double b)
// {
//     cout<< a/b <<endl;
// }

// int main()
// {
//     calc(5.0,9);
//     return 0;
// }

// =============================================================
// run time 
// function overiding

// #include<iostream>
// using namespace std;

// class Dad
// {
//     public:
//         void info()
//         {
//             cout<< "I am a Dad class\n";
//         }
// };

// class Child : public Dad
// {
//     public:
//         void infoo()
//         {
//             cout<< "I am a Child class\n";
//         }
// };

// int main()
// {
//     Child Chin2;
//     Chin2.info();
//     return 0;
// }

