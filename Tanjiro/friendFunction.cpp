// Friend function

// 3 + 8i ----> abc.a + abc.b i
// 4 + 5i ----> pqr.a + pqr.b i
// --------
// 7 + 13i 

// 2 + 3 = 5 


// #include<iostream>
// using namespace std;

// class Complex
// {
//     private:
//         int a,b;
//         friend Complex Add(Complex o1, Complex o2);
//     public:
//         void GetData(int num1, int num2)
//         {
//             a = num1 ;
//             b = num2 ;
//         }

//         void PrintData()
//         {
//             cout << a <<" + "<<b<<"i"<<endl;
//         }
// };

// Complex Add(Complex o1, Complex o2)
// {
//     Complex ans;
//     ans.GetData(o1.a+o2.a, o1.b+o2.b);
//     return ans;
// }


// int main()
// {
//     Complex com1, com2, comAns;
//     com1.GetData(2,3);
//     com1.PrintData();

//     com2.GetData(3,4);
//     com2.PrintData();
//     cout<<"--------\n";
//     comAns = Add(com1, com2);
//     comAns.PrintData();

//     return 0;
// }
// ===========================================


// #include<iostream>
// using namespace std;

// class Abc
// {
//     private:
//         int num;
//         friend Abc square(Abc ob);
//     public:
//         void getData(int a)
//         {
//             num = a;
//         }

//         void printData()
//         {
//             cout << num << endl;
//         }
// };


// Abc square(Abc ob)
// {
//     Abc ans;
//     ans.getData( ob.num * ob.num );
//     return ans;
// }

// int main()
// {
//     Abc Obj1;
//     Obj1.getData(6);
//     Obj1.printData();

//     Abc lol;
//     lol = square(Obj1);
//     lol.printData();
//     return 0;
// }