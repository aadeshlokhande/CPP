// single inheritance

// #include<iostream>
// using namespace std;
// class Parents
// {
//     public: 
//         int a = 20;
//         void parents()
//         {
//             cout<<"I am a parents class"<<endl;
//         }
// };

// class Child : public Parents
// {
//     public:
//         // int a = 10;
//         void child()
//         {
//             cout<<"I am a child class"<<endl;
//         }
// };

// int main()
// {
// //     Parents jethalal;
// //     jethalal.parents();
// //     jethalal.child();

//     Child tappu;
//     // tappu.child();
//     // tappu.parents();
//     cout<<tappu.a;
// }


// ------------------------------------------
// ------------------------------------------

// #include<iostream>
// using namespace std;
// class Car 
// {
//     public:
//         int price;
//         string model;
//         int vehicleNum;
//         string fuel;
        
        
//         void getData(int p, string m, int vnum)
//         {
//             price = p;
//             model = m;
//             vehicleNum = vnum;
//             fuel = "Petrol";
//         }
        
//         void printData()
//         {
//             cout<<"price = "<<price<<endl;
//             cout<<"model = "<<model<<endl;
//             cout<<"vehicleNum = "<<vehicleNum<<endl;
//             cout<<"fuel = "<<fuel<<endl;
//         }
// };

// class EV : public Car
// {
//     public:
    
//     void getData(int p, string m, int vnum)
//         {
//             price = p;
//             model = m;
//             vehicleNum = vnum;
//             fuel = "EV";
//         }
// };



// int main()
// {
//     // Car duster;
//     // duster.getData(400000, "duster", 9876);
//     // duster.printData();
    
//     // EV tesla;
//     // tesla.getData(1200000, "tesla",987);
//     // tesla.printData();
    
//     // EV nexon;
//     // nexon.getData(1400000, "Tata Nexon", 787 );
//     // nexon.printData();
    
//     Car swift;
//     swift.getData(300000, "suzuki swift", 245);
//     swift.printData();
// }