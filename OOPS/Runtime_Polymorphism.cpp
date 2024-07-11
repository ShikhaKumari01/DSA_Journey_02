// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     int ag;
//     int weight;
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };
// class Dog:public Animal{
//     public:
//     void speak(){
//         cout<<"Bark"<<endl;
//     }
// };
// int main(){
//     Dog d1;
//     d1.speak();
// }


#include<iostream>
using namespace std;
class Animal{
    public:
    int ag;
    int weight;
    Animal(){
        cout<<"I am inside Parent Constructor"<<endl;
    }
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Dog:public Animal{
    public:
    Dog(){
        cout<<"I am inside Child Constructor"<<endl;
    }
    void speak(){
        cout<<"Bark"<<endl;
    }
};
int main(){
    // Animal *a=new Animal;
    // a->speak();

    // Dog *a=new Dog;
    // a->speak();

    //UpCasting
    // Animal *a=new Dog;
    // a->speak();

    //Error
    // Dog *a=new Animal;
    // a->speak();

    //After using virtual keyword to UpCasting
    // Animal *a=new Dog;
    // a->speak();

    // Dog *a=(Dog*)new Animal;
    // a->speak();

    // Animal*a=new Animal;
    // a->speak();

    // Animal*a=new Dog;
    // a->speak();

    // Dog*a=new Dog;
    // a->speak();

    // Animal*a=new Animal;
    // Animal*a=new Dog;
    // Dog*a=new Dog;
    Dog*a=(Dog*)new Animal;
   
}