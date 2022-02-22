#include <iostream>
#include <myfunc>
using namespace std;

/*
A function is a block of code which only runs when it is called.
You can pass data, known as parameters, into a function.
Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.
*/

/*
A C++ function consist of two parts:

Declaration: the function's name, return type, and parameters (if any)
Definition: the body of the function (code to be executed)
*/
void myFunction() {
  cout << "I am called!";
}

//You will often see C++ programs that have function declaration above main(), and function definition below main(). This will make the code better organized and easier to read:
// Function declaration
void myFunction2();
void myFunction3(string fname);

int add(int x,int y);


/*
 You can also pass a reference to the function. This can be useful when you need to change the value of the arguments:
*/
void swapNumsValues(int x, int y) {
  int z = x;
  x = y;
  y = z;
}
void swapNumsRef(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main(){
    /*
    C++ provides some pre-defined functions, such as main(), which is used to execute code. But you can also create your own functions to perform certain actions.
    */
    myFunction();
    //A function can be called multiple times:
    myFunction();
    myFunction();

    //
    myFunction2();

    //with parameters
    myFunction3("Amit");
    myFunction3("Jenny");
    myFunction3("Anja");

    cout << add(7,7) << endl;

    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << "\n";
    cout << firstNum << secondNum << "\n";

    // Call the function, which will change the values of firstNum and secondNum
    //swapNumsValues(firstNum, secondNum);
    swapNumsRef(firstNum, secondNum);

    cout << "After swap: " << "\n";
    cout << firstNum << secondNum << "\n";
}

// Function definition
void myFunction2() {
  cout << "I am clicked too!";
}

//Information can be passed to functions as a parameter. Parameters act as variables inside the function.
//When a parameter is passed to the function, it is called an argument. So, from the example above: fname is a parameter, 
//while Amit, Jenny and Anja are arguments.
void myFunction3(string fname) {
  cout << fname << " welcome\n";
}

//You can also use a default parameter value, by using the equals sign (=).
void myFunction4(string country = "Norway") {
  cout << country << "\n";
}

//multiple parameter function
void myFunction5(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}

/*
The void keyword, used in the previous examples, indicates that the function should not return a value. 
If you want the function to return a value, you can use a data type (such as int, string, etc.) instead of void, 
and use the return keyword inside the
*/
//Multiple functions can have the same name as long as the number and/or type of parameters are different.
int add(int x,int y) {
  return x + y;
}

//With function overloading, multiple functions can have the same name with different parameters:
int plusFuncInt(int x, int y) {
  return x + y;
}

double plusFuncDouble(double x, double y) {
  return x + y;
}
//Instead of defining two functions that should do the same thing, it is better to overload one.
int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}
