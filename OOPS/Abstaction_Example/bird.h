#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
using namespace std;
class Bird{
    public:
    virtual void eat()=0;
    virtual void sleep()=0;
    virtual void fly()=0;
};
class Sparrow:public Bird{
    private:
    void eat(){
        cout<<"Sparrow is eating"<<endl;
    }
    void sleep(){
        cout<<"Sparrow is sleeping"<<endl;
    }
    void fly(){
        cout<<"Sparrow is flying"<<endl;
    }
};
class Eagle:public Bird{
    private:
    void eat(){
        cout<<"Eagle is eating"<<endl;
    }
    void sleep(){
        cout<<"Eagle is sleeping"<<endl;
    }
    void fly(){
        cout<<"Eagle is flying"<<endl;
    }
};
class Pigeon:public Bird{
    private:
    void eat(){
        cout<<"Pigeon is eating"<<endl;
    }
    void sleep(){
        cout<<"Pigeon is sleeping"<<endl;
    }
    void fly(){
        cout<<"Pigeon is flying"<<endl;
    }
};

#endif // BIRD_H

