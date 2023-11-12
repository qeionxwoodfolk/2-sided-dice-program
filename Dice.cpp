#include <iostream>
#include "Dice.h"
using namespace std;

Dice::Dice(){
numSide = 0;
}

Dice::Dice(int num){
numSide = num;
}
int Dice::rollDice(){
return rand()%numSide+1;
}

