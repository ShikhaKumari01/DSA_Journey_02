// #include<iostream>
// using namespace std;
// class Animal{
//     int a;
//     int b;
//     char c;
// };
// int main(){
//     cout<<"Size of class: "<<sizeof(Animal);
// }

//Static Memory Allocation
#include<iostream>
using namespace std;
class Animal{
    private:
    int weight;
    public:
    //state & properties
    int age;
    string name;
    //behaviour
    void eat(){
        cout<<"Eating"<<endl;
    }
    void sleep(){
        cout<<"Sleeping"<<endl;
    }
    int getWeight(){
        return weight;
    }
    // void setWeight(int w){
    //     weight=w;
    // }
    void setWeight(int weight){
        this->weight=weight;
    }
    //Constructor

    //Default Constructor
    Animal(){
        this->age=0;
        this->name="Pappu";
        this->weight=0;
        cout<<"Default constructor called"<<endl;
    }

    //Parameterized Constructor
    Animal(int a,int b){
        this->age=a;
        this->weight=b;
        cout<<"Parameterized constructor called"<<endl;
    }

    //Copy Constructor
    Animal(Animal &obj){
        this->age=obj.age;
        this->weight=obj.weight;
        cout<<"I am inside Copy Constructor"<<endl;
    }
    ~Animal(){
        cout<<"I am inside destructor"<<endl;
    }
};
// int main(){
//     //Object Creation
//     Animal a;
//     a.age=15;
//     a.name="Dog";
//     cout<<"Name: "<<a.name<<endl;
//     cout<<"Age: "<<a.age<<endl;
//     a.setWeight(60);
//     cout<<"Weight: "<<a.getWeight()<<endl;
//     a.sleep();
//     a.eat();
    
// }


//Dynamic Memory Allocation

int main(){
    // //Object Creation
    // Animal* a=new Animal;
    // a->age=26;
    // a->setWeight(101);
    // cout<<"Name: "<<a->name<<endl;
    // cout<<"Age: "<<a->age<<endl;
    // cout<<"Weight: "<<a->getWeight()<<endl;
    // a->eat();
    // a->sleep();
    // Animal* b=new Animal;
    // Animal* c=new Animal;
    // Animal();
    // Animal(2,4);
    // Animal d;
    // Animal e=d;
    // Animal first(e);
    // Animal *f=new Animal;
    // // Animal* g=f;
    // Animal g(*f);

    Animal a;
    //manually delete for dynamic memory allocation
    Animal *b=new Animal;
    delete b;
    return 0;
}