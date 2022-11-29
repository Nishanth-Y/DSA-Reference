#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    // find even and odd using bit operation;
    int even = 2, odd = 3;
    if((odd&1) == 0) cout << "Even" << endl;
    else cout << "odd\n";
    return 0;

    // multiplication and division operation using bit operator
    // Note: a << times return a*2**times
    //       b >> times return b/2**times
    int a = 5, b = 7;
    int ten = 5 << 1; // i.e 5 * (2**1)
    int three = b >> 1; //i.e 7 / (2**1)
    cout << ten << " " << three << endl;
    

    // Swap two numbers using bit operators
    cin >> a >> b;
    cout << " Before\n" << a << "\t" << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << " After\n" << a << "\t" << b << endl;
}