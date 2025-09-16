#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the amount : " << endl;
  cin >> n;
  int x = 0;
  int y = 0;
  for (int i = 1; i < 8; i++) {
    switch (i) {
      case 1:
        int a = n % 2000;
        int b = n / 2000;
        cout << "No. of 2000 notes are : " << b << endl;
        x += b;
        break;
      case 2:
        int b = a % 500;
        int c = a / 500;
        cout << "No. of 500 notes are : " << c << endl;
        x += c;
        break;
      case 3:
        int d = b % 200;
        int c1 = b / 200;
        cout << "No. of 200 notes are : " << c1 << endl;
        x += c1;
        break;
      case 4:
        int c3 = d % 100;
        int c2 = d / 100;
        cout << "No. of 100 notes are : " << c2 << endl;
        x += c3;
        break;
      case 5:
        int c5 = c3 % 50;
        int c6 = c2 / 50;
        cout << "No. of 50 notes are : " << c6 << endl;
        x += c5;
        break;
      case 6:
        int c7 = c5 % 20;
        int c8 = c5 / 20;
        cout << "No. of 20 notes are : " << c8 << endl;
        x += c8;
        break;
      case 7:
        int f = c7 % 10;
        int f1 = c8 / 10;
        if (f == 0) {
          cout << "No more notes" << endl;
        } else {
          cout << "No. of 10 notes are : " << f1 << endl;
          x += f;
        }
        break;
      default:
        cout << "Invalid amount" << endl;
    }
  }
  cout << "Total no. of notes are : " << x << endl;
  return 0;
}