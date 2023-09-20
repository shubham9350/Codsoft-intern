#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class library {
public:
  int id;
  char name[100];
  char author[100];
  char student[100];
  int price;
  int pages;
};
int main() {
  library lib[20];
  int input = 0;
  int count = 0;

  while (input != 3) {
    cout << "Enter 1 to write Book details" << endl;
    cout << "Enter 2 to display" << endl;
    cout << "Enter 3 to quit" << endl;
    cin >> input;
    switch (input) {
    case 1:
    start:
      cout << "Enter Book ID : ";
      cin >> lib[count].id;
      cout << "Enter Book name : ";
      cin >> lib[count].name;
      cout << "Enter Book Author : ";
      cin>>lib[count].author;
      cout << "Enter student name : ";
      cin>>lib[count].name;
      cout << "Enter book price : ";
      cin >> lib[count].price;
      cout << "Enter Book Pages : ";
      cin >> lib[count].pages;
      count++;
      break;
    case 2:
      for (int i = 0; i < count; i++) {
        cout << "Book ID : " << lib[i].id << endl;
        cout << "Book Name : " << lib[i].name << endl;
        cout << "Book Author : " << lib[i].author << endl;
        cout << "Student Name : " << lib[i].student << endl;
        cout << "Book Price : " << lib[i].price << endl;
        cout << "Book Pages : " << lib[i].pages << endl;
      }
      break;
    case 3:
      exit(0);
      break;
    default:
      cout << "you have entered wrong value,please type again" << endl;
      goto start;
    }
  }
}