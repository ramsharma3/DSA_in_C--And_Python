#include <iostream>
#include <string>
using namespace std;

string reverse_a_string(string str, int j, int i) {
    // Base case
    if (i >= j) {
        return str;
    }

    swap(str[i], str[j]);
    i++;
    j--;
    return reverse_a_string(str, j, i);
}

int main() {
    string str;
    cout << "Enter a string to reverse: ";
    cin >> str;
    
    int j = str.length() - 1;
    int i = 0;
    string str1 = reverse_a_string(str, j, i);
    
    cout << "The reversed string is: " << str1;

    return 0;
}
