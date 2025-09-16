#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

bool isLucky(long long n) {
    if (n == 0) return false;
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7)
            return false;
        n /= 10;
    }
    return true;
}

int main() {
    long long A, B;

    cout << "Enter two numbers (A and B): ";
    cin >> A >> B;

    bool found = false;
    cout << "Lucky numbers between " << A << " and " << B << ": ";
    for (long long i = A; i <= B; i++) {
        if (isLucky(i)) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found)
        cout << -1;

    cout << endl;
    return 0;
}
