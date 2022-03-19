#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    string holdA, holdB;
    cin >> a >> b;
    char a0 = a[0];
    char b0 = b[0];
    holdA = a;
    holdA[0] = b[0];
    holdB = b;
    holdB[0] = a[0];
    int alen = a.size();
    int blen = b.size();
    cout << alen << " " << blen << "\n" << a + b << "\n"  << holdA + " " + holdB;
    return 0;
}