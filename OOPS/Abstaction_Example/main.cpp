#include<iostream>
#include "bird.h"
using namespace std;
void birdBehave(Bird* &bird){
    bird->eat();
    bird->fly();
    bird->sleep();
}
int main(){
    // Bird *bird =new Sparrow;
    // birdBehave(bird);

    Bird *b =new Pigeon;
    birdBehave(b);
    // Pigeon * p=new Pigeon;
    // p->fly();
}