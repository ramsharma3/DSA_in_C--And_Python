#include <iostream>
using namespace std;

void count(int n) {
    // Base case
    if (n == 0) {
        return;
    }
    
    cout << n << endl;
    count(n - 1);
}

int main() {
    int j;
    cin >> j;
    count(j);
    return 0;
}
