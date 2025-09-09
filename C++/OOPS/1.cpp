#include<iostream>
using namespace std;

class Animal {
    private:
    int weight;

    public:  // this is a access specifier

    // state or properties
    int age ;
    string type;

    // default cosntructor
    Animal(){
        // we using this keyword is good practise
        this -> weight = 0;
        this -> age = 0;
        this -> type = "";
        cout<<"constructor called "<< endl;
    }
    // parameterised constructor
    Animal(int age){
        this->age = age;
        cout<<"parameterised constructor";
    }

    Animal(int age,int weight){
        this->age = age;
         this->weight = weight;
        cout<<"parameterised constructor 2";
    }
    Animal(int age,int weight,string type){
        this->age = age;
        this->weight = weight;
        this->type = type;
        cout<<"parameterised constructor 3";
    }
    // copy costructor

    Animal(Animal& obj){
        this-> age =obj.age;
        this-> weight =obj.weight;
        cout<<"I am copy construcor"<< endl;
    }


    // behaviour or function
    void eat(){
        cout <<"eating"<< endl;
    }
    void sleep(){
        cout<<"sleeping"<< endl;
    }
    // getter and setter function which help to access the privte class 
    int getWeight(){
        return weight;
    }

    void setWeight(int weight){
        this -> weight = weight;
    }
    // destructor
    ~Animal(){
        cout<<"I am inside the destructor";
    }
};
int main (){
    //cout<<"size of empty class is: " << sizeof(Animal)<<endl;
    
    // object cretion -> static and dynamic

    // static

    Animal ramesh;
    ramesh.age = 12; 
    ramesh.type = "lion";
    cout<<"age of ramesh is "<< ramesh.age << endl;
    cout<<"name of ramesh is "<< ramesh.type << endl;
    

    ramesh.eat();
    ramesh.sleep();
    // using getter and setter accessing private member
    ramesh.setWeight(101);
    cout<<"weight "<<ramesh.getWeight()<< endl;


    // dynamically

    Animal*suresh = new Animal;
    suresh->age = 15;
    suresh->type = "billi";

    suresh->eat();
    suresh->sleep();


    // constructor
    Animal a(10);
    Animal * b = new Animal(100,10,"mohit");//parametrised constructor

    Animal c = a; // copy constructor


// destructor

    cout<<"a obj creation"<<endl;
    Animal a;
    a.age = 5;

    cout<<"b obj cretion"<< endl;
    Animal * b = new Animal();
    b-> age = 12;

    // manually
    delete b;
    
}