//Single Inheritance

// #include<iostream>
// using namespace std;
// class Car{
//     public:
//     int mileage;
//     int weight;
//     void speed(){
//         cout<<"Speeding up";
//     }
// };
// class Mercedes:public Car{
//     public:
    
// };
// int main(){
//     Mercedes shikhaWali;
//     shikhaWali.speed();
// }


// Multi-level Inheritance

// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     int age;
//     int weight;
//     void eat(){
//         cout<<"Eating";
//     }
// };
// class Dog:public Animal{
//     public:
//     void speak(){
//         cout<<"Barking"<<endl;
//     }
// };
// class germanShepherd:public Dog{
//     public:
//     void speak(){
//         cout<<"Barking"<<endl;
//     }
// };
// int main(){
//     germanShepherd a;
//     a.speak();
//     a.eat();
//     cout<<endl<<a.age;
// }


//Multiple Inheritance

// #include<iostream>
// using namespace std;
// class Lion{
//     public:
//     int age=40;
//     int weight;
// };
// class Tiger{
//     public:
//     int age=80;
//     int totalNo=70;

// };
// class Liger:public Lion,public Tiger{

// };
// int main(){
//     Liger a;
//     cout<<a.Tiger::age<<" "<<a.totalNo<<" ";
// }


//Hierarchical Inheritance

#include<iostream>
using namespace std;
class Car{
    public:
    int age;
    int weight;
    
};
class Scorpio:public Car{
    public:
    int mileage;

};
class Fortuner:public Car{
    public:
    int fuel;
};
int main(){
    Scorpio a;
    Fortuner b;
    cout<<a.age<<" "<<b.fuel<<" "<<b.weight<<" "<<a.mileage<<" ";
}