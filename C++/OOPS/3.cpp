// INHERITANCE
#include <iostream>
using namespace std;
// class Animal{
//     protected :
//     int age;
//     int weight;

//     void eat(){
//         cout<< "Eating"<< endl;
//     }
// };

// //class Dog:public Animal{
//     class Dog:public Animal{
//         public:
//         void print(){
//             cout<< this->age;
//         }

// };

// single level inheritance
// class Car{
//     public:
//     string name ;
//     int weight;
//     int age;

//     void speedUp(){
//         cout<< "speeding up"<< endl;
//     }
//     void breakMarro(){
//         cout<<"break maardi"<< endl;
//     }
// };

// class Scorpio:public Car{

// };
// int main (){
//     Scorpio Mohit;
//     Mohit.breakMarro();
// }

// multilevel inheritance

// class fruits{
//     public:
//     string name;
// };

// class Mango: public fruits{
//     public:
//     int weight;
// };

// class Alphnaso:public Mango{
//     public:
//     int Sugarlevel;
// };

// int main (){
//     Alphnaso a ;
//     cout<< a.name<<" "<< a.weight<<" "<<a.Sugarlevel<<endl;
// }

// multiple inheritnace

// class A {
//     public:
//     int physics;
// };
// class B{
//     public:
//     int chemistry;
// };
// class C{
//     public:
//     int maths;
// };
// int main (){
//    C obj;
//    cout<<obj.physics <<" "<<obj.chemistry <<" "<<obj.maths<<endl;
// }

// heirahical inheritance

// class Car
// {
// public:
//     int age;
//     int weight;

//     void speedUp()
//     {
//         cout << "speeding up" << endl;
//     }
// };
// class Scorpio : public Car
// {
// };
// class Fortuner : public Car
// {
// };

// int main()
// {
//     Scorpio s11;
//     s11.speedUp();

//     Fortuner f11;
//     f11.speedUp();

//     return 0;
// }