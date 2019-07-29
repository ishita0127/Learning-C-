#include <iostream>
#include "math.h"

double power(int, int);
int main() {
    std::cout << "Hello, World!" << std::endl;
    power(3,5);
    return 0;
}
double power(int x, int y){
    std::cout << pow(x,y);
}
