#include <iostream>
#include "Dice.h"
using namespace std;

int main() {
int num;
cout<<"Enter number of dice to roll : ";
cin>>num;

cout<<"Enter number of sides of the dices : ";
int sides;
cin>>sides;

Dice myDices[num];
for(int i=0;i<num;i++){
Dice d(sides);
myDices[i] =d;
}

for(int i=0;i<num;i++){
cout<<"Rolling dice : "<<i+1<<" : "<<myDices[i].rollDice()<<endl;
}
return 0;
}

