// Multiple Inheritance

// #include<iostream>
// using namespace std;

// class Dad
// {
//     public:
//     void DadQuality()
//     {
//         cout<< "paisa kamana\n";
//     }
// };

// class Mom
// {
//     public:
//         void MomQuality()
//         {
//             cout << "pappa ko lootna\n";
//         }
// };

// class Child : public Dad, public Mom
// {
//     public:
//         void ChildQuality()
//         {
//             cout<< "paise udana\n";
//         }
// };

// int main()
// {
//     Child pratik;
//     pratik.ChildQuality();
//     pratik.DadQuality();
//     pratik.MomQuality();
//     return 0;
// }


// =======================================================
// #include<iostream>
// using namespace std;

// class Algebra
// {
//     public:
//         void eq()
//         {
//             cout << "solve equation......\n";
//         }
// };

// class Geometry
// {
//     public:
//         void Diagrams()
//         {
//             cout << "area of Diagram\n";
//         }
// };


// class Maths : public Algebra, public Geometry
// {
//     public:
//         void trignometry()
//         {
//             cout<< "alphe beta labda thambda\n";
//         }
// };

// int main()
// {
//     // Algebra ob;
//     // ob.eq();

//     // Geometry ob;
//     // ob.Diagrams();

//     Maths obj;
//     obj.eq();
//     obj.Diagrams();
//     obj.trignometry();
//     return 0;
// }