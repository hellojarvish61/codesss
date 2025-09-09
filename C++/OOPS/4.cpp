// POLYMORPHISM
// compile time polymorphism
// function overloading
// #include <iostream>
// using namespace std;
// class Maths{
//     public:

//     int sum(int a,int b){
//         cout<<"I am first"<< endl;
//         return a + b;
//     }
//     int sum(int a,int b,int c){
//         cout<<"I am second"<< endl;
//         return a+b+c;
//     }
//     int sum(int a , float b){
//         cout<<"I am third"<< endl;
//         return a+b+10;
//     }
// };
// int main(){
//     Maths obj;
//     cout<<obj.sum(2,5);
//     return 0;
// }

// operator overloading
// #include<iostream>
// using namespace std;
// class Param{
//     public:
//     int val;

//     void operator+(Param& obj2){
//         int value1 = this->val;
//         int value2 = obj2.val;
//         cout<<(value2-value1)<< endl;
//     }
// };
// int main (){
//    Param obj1,obj2;
//    obj1.val = 7;
//    obj2.val = 2;

//    obj1+obj2;
// }


// run time polymorphism
// function overiding

#include <iostream>
using namespace std;
    class Animal{
        public:
        void speak(){
            cout<<"speaking"<< endl;
        }
    };
    class Dog:public Animal {
        public:
        // overide
        void speak(){
            cout<< "barking"<< endl;
        }
    };
int main(){
    Dog a;
    a.speak();
}

