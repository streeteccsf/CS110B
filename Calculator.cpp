//Task: Ensure division returns float [solved]
#include <iostream>
using namespace std;

float add(float num1, float num2) {
  cout << "You chose to add " << num1 << " and " << num2 << endl;
  return num1 + num2;
}

float sub(float num1, float num2) {
  cout << "You chose to subtract " << num2 << " from " << num1 << endl;
  return num1 - num2;
}

float mul(float num1, float num2) {
  cout << "You chose to multiply " << num1 << " and " << num2 << endl;
  return num1 * num2;
}

float divide(float num1, float num2) {
  cout << "You chose to divide " << num1 << " by " << num2 << endl;
  return num1/num2;
}

float power(float base, float exp) {
  int count = 0;
  int val = 1;
  cout << "You chose to raise " << base << " to the power of " << exp << endl;
  while (count < exp) {
    val = val*base;
    count++;
  }
  return val;
}

int main() {
  int num1 = 0;
  int num2 = 0;
  int operand = 0;
  float result = 0;
  cout << "Enter two numbers" << endl << "First number:  ";
  cin >> num1;
  cout << "Second number:  ";
  cin >> num2;

  cout << "\nWhat operation would you like to perform? Select the accompanying number: \n\nAddition - 1 \nSubtraction - 2 \nMultiplication - 3 \nDivision - 4 \nExponent - 5 \nYour choice:  ";
  //In later expansions: Sq Root - 6, ABS - 7, Floor - 8, Ceiling - 9, Factorial - 10.
  cin >> operand;
  cout << endl;
  /* Test values of variables by printing them to stdout
  cout << endl << num1 << endl << num2 << endl << operand << endl;
  */

  if (operand == 1) {
    result = add(num1, num2);
  } else if (operand == 2) {
    result = sub(num1, num2);
  } else if (operand == 3) {
    result = mul(num1, num2);
  } else if (operand == 4) {
    result = divide(num1, num2);
  } else if (operand == 5) {
    result = power(num1, num2);
  }
  
  cout << result;
}
