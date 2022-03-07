#include <iostream>
#include "Calculator.h"
using namespace std;

void Calculator::Add(double val){
   value += val;
}

void Calculator::Subtract(double val){
   value -= val;
}

void Calculator::Multiply(double val){
   value *= val;
}

void Calculator::Divide(double val){
   value /= val;
}

void Calculator::Clear(){
   value = 0;
}
