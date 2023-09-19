#include <iostream>
using namespace std;
int main() {
  int num1, num2, choice;
  char value;
  float result;

  cout << "Enter first number: ";
  cin >> num1;
  cout << endl;
  cout << "Enter second number: ";
  cin >> num2;
  cout << endl;
  cout << "Select the operation you want to perform:  + , - , * , /" << endl;
  cout << "1 for Add" << endl;
  cout << "2 for Substract" << endl;
  cout << "3 for Multiply" << endl;
  cout << "4 for Division" << endl;
  cin >> choice;
  switch (choice) {
  case 1:
    result = num1 + num2;
    cout << "Your answer is " << result;
    break;
  case 2:
    result = num1 - num2;
    cout << num1 << "-" << num2 << " = " << result << endl;
    cout << "Your answer is " << result;
    break;
  case 3:
    result = num1 * num2;
    cout << num1 << "*" << num2 << " = " << result << endl;
    cout << "Your answer is " << result;
    break;
  case 4:
    result = num1 / num2;
    cout << num1 << "/" << num2 << " = " << result << endl;
    cout << "Your answer is " << result;
    break;
  default:
    cout << "Please choose correct operator!" << endl;
    break;
  }

  return 0;
}