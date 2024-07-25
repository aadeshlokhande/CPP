// Constructor

// #include<iostream>
// using namespace std;

// class Student
// {
//     private:
//         int marks;
//     public:
//         int age;

//         Student()
//         {
//             cout<< "welcome \n";
//         }

//         // Student(int a, int b)
//         // {
//         //     marks = a;
//         //     age = b;
//         // }
//         void getData(int a)
//         {
//             marks = a;
//         }

//         void printdata()
//         {
//             cout<< age << endl;
//             cout<< marks << endl;
//         }

// };


// int main()
// {
    // Student rohit;
    // rohit.age = 10;
    // cout << rohit.age;
    // rohit.getData(120);

    // Student rohit(121, 305);
    // Student anushka(122, 330);
    // Student ankita(123, 303);
    // Student rutuja(140, 320);

    // rutuja.printdata();
    
//     Student ob;
//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// destructor

// #include<iostream>
// using namespace std;
// class Abc
// {
//     public:
//         Abc()
//         {
//             cout<< "Hello\n";
//         }

//         ~Abc()
//         {
//             cout << "Bye bye\n";
//         }
// };

// int main()
// {
//     Abc ob1;
//     Abc ob2;
//     cout<<"jai ho\n";
//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=


// #include<iostream>
// using namespace std;

// class Abc
// {
//     int num;
//     public:
//         Abc(int a)
//         {
//             num = a;
//             cout<< "Constructor call for ob"<< num<<endl ;
//         }

//         ~Abc()
//         {
//             cout<< "Destructor call for ob"<< num<<endl ;
            
//         }
// };

// int main()
// {
//     Abc ob1(1);
//     {
//         Abc ob2(2);
//         {
//             Abc ob3(3);
//             {
//                 cout<<"Hello mitro\n";
//             }
//         }
//         Abc ob4(4);
//     }
//     cout<<"rom rom bhaiyo\n";
//     return 0;
// }
// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=