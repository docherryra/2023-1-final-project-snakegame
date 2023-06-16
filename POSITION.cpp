#include "position.h"
using namespace std;

//Constructor
position::position(){
    x = 0;
    y = 0;
}

position::position(int posX, int posY){
    x = posX;
    y = posY;
}

position& position::randomPosition(){
    srand(time(NULL));
    this ->x = rand() % 50;
    this ->y = rand() % 40;
    return *this;
}

//operator
position& position::operator=(const position& p){
    this -> x = p.x;
    this -> y = p.y;
    return *this;
}

bool position::operator==(const position p){
    if((x == p.x) && ( y == p.y))
        return true;
    else
        return false;
}
