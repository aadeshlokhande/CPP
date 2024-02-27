// distructor 

// #include<iostream>
// using namespace std;
// class Abc
// {
//     public:
//         Abc()
//         {
//             cout<<"Hello ";
//         }
        
//         ~Abc()
//         {
//             cout<<"bye bye";
//         }
// };


// int main()
// {
//     Abc ganesh;
//     cout<<"\npop\n";
    
// }



// --------------------------------------------

// #include<iostream>
// using namespace std;

// int count = 0;
// class Hello
// {
//     public:
//         Hello()
//         {
//             ++count;
//             cout<<"Constuctor call for object"<<count<<endl;
//         }
//         ~Hello()
//         {
//             cout<<"distructor call of object"<<count<<endl;
//             --count;
//         }
// };


// int main()
// {
//     cout<<"Enter scope 1\n";
//     Hello ob1,obj2;
//     {
//         cout<<"Enter scope 2\n";
//         Hello obj3, obj4;
//         {
//             cout<<"Enter scope 3\n";
//             Hello obj5;
//             {
//                 cout<<"Enter scope 4\n";
//                 Hello obj6;
//                 cout<<"Exit scope 4\n";
//             }
//             cout<<"Exit scope 3\n";
//         }
//         cout<<"Exit scope 2\n";
//     }
//     cout<<"Exit scope 1\n";
// }


// --------------------------------------------
// #include<iostream>
// using namespace std;

// class Hello
// {
//     string a;
//     public:
//         Hello(string str)
//         {
//             a = str;
//             cout<<"Constuctor call for object = "<<a<<endl;
//         }
//         ~Hello()
//         {
//             cout<<"distructor call of object = "<<a<<endl;
//         }
// };


// int main()
// {
//     cout<<"Enter scope 1\n";
//     Hello a("a"),b("b");
//     {
//         cout<<"Enter scope 2\n";
//         Hello c("c"), d("d");
//         {
//             cout<<"Enter scope 3\n";
//             Hello e("e");
//             {
//                 cout<<"Enter scope 4\n";
//                 Hello f("f");
//                 cout<<"Exit scope 4\n";
//             }
//             Hello g("g");
//             cout<<"Exit scope 3\n";
//         }
//         Hello h("h");
//         cout<<"Exit scope 2\n";
//     }
//     cout<<"Exit scope 1\n";
// }


