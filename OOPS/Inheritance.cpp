#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;
    void eat(){
        cout<<"Eating";
    }
};
class Dog:public Animal{
    public:
    void speak(){
        eat();
    }
};
int main(){
    Dog a;
    a.speak();
}