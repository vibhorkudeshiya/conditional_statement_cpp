#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if ( n== 0)
        cout << n << " Is Zero.";

    else if (n % 2 == 0)
        cout << n << " Is even.";
    else
        cout << n << " is odd.";

    return 0;
}
