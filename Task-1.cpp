#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
  string name;
  char input;
  int inputuser;
  cout << "Enter your Name : ";
  getline(cin, name);
  cout << endl;
  do {
    srand(0);
    int variable = rand() % 10 + 1;
    cout << "enter any number between 1 to 5 : ";
    cin >> inputuser;
    cout << endl;
    if (inputuser == variable) {
      cout << "Congralution! you found right number";
      cout<<endl;
    } else {
      cout << "Sorry you found wrong number";
      cout<<endl;
    }
    cout << "would you like to Try Again Y/N : ";
    
    cin >> input;
    cout << endl;
  } while (input != 'N');
  cout << "GAME END";
}
