#include <cmath>
#include <limits>
#include <iostream>

double squared(double b){
    return pow(b,2);
}

void passByReference( int &a){ // Es wird keine Kopie erzeugt
    a+=233;
}

void passByPointer (int *ptr){
    (*ptr)+=20;
}


