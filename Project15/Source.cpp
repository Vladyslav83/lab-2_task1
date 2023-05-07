#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, i;
    cout << "Enter values for a, b, c, and d: ";
    cin >> a >> b >> c >> d;
    i = (c << 13) + (c << 7) + (c << 5) + (c << 4) - (c << 2) + c;
    int x = (d << 4) - (d << 1) + (a << 2) + (a << 3);;
    int result = ((b << 5) + (b << 1) + (x) >> 10) - (i) + (d << 4) - (d << 1) - d;

       cout << "Result: " << result << endl;

    return 0;
}