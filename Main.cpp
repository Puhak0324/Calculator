#include <iostream> //Allows use of input/output functions
#include <cmath> //Allows you to work with math functions
#include <stdlib.h> //contains header information for ‘Memory Allocation/Freeing’ functions.
#include <stdio.h> //contains header information for ‘File related Input / Output’ functions
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For the time() function
#include <string> // Used when writing strings in code
#include <fstream> //Allows you to work with files, create, read, and write
using namespace std; //Includes so std::string is not required on every line of code


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int getMax(int num1, int num2, int num3) {
    int result;
    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3) {
        result = num2;
    }
    else {
        result = num3;
    }
    return result;
}

void Exponent();
void BasicCalculator();
void BetterCalculator();

int main() {


    cout << getMax(2, 50, 10);
    BasicCalculator();
    BetterCalculator();

	return 0;
}



void Exponent() {
    int base = 1;
    int power = 1;
    cout << "Please specify your base number: ";
    cin >> base; "\n";
    cout << "Now specify your power number: ";
    cin >> power; "\n";
    cout << "Your result is:" << pow(base, power);
}
  

void BasicCalculator() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << num1 + num2;
}


void BetterCalculator() {
    double num1, num2;
    char op;
   
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    int result; 

    if (op == '+') {
        result = num1 + num2;
    }
    else if (op == '-') {
        result = num1 - num2;
    }
    else if (op == '*') {
        result = num1 * num2;
    }
    else if (op == '/') {
        result = num1 / num2;
    }
    else {
        cout << "Invalid Operator";
    }
    cout << result;
}