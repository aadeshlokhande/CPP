// Multilevel Inheritance




// #include<iostream>
// using namespace std;
// class GrandParent
// {
//     public:
//         void GrandParentQuality()
//         {
//             cout << "kind" <<endl;
//         }
// };


// class Parent : public GrandParent
// {
//     public:
//         void ParentQuality()
//         {
//             cout << "Hard working"<<endl;
//         }
// };


// class Child : public Parent
// {
//     public:
//         void ChildQuality()
//         {
//             cout << "Kamchor"<<endl;
//         }
// };

// int main()
// {
//     Child Anushka;
//     Anushka.ChildQuality();
//     Anushka.ParentQuality();
//     Anushka.GrandParentQuality();
//     return 0;
// }


// ==================================================


// #include<iostream>
// using namespace std;
// class GrandParent
// {
//     public:
//         GrandParent()
//         {
//             cout << "kind" <<endl;
//         }
// };


// class Parent : public GrandParent
// {
//     public:
//         Parent()
//         {
//             cout << "Hard working"<<endl;
//         }
// };


// class Child : public Parent
// {
//     public:
//         Child()
//         {
//             cout << "Kamchor"<<endl;
//         }
// };

// int main()
// {
//     Child Anushka;
//     return 0;
// }