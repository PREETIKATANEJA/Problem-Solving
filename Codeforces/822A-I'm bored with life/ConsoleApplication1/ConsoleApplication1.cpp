// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int fact(int x) {
    if (x <= 1)
        return 1;
    else
        return x * fact(x - 1);
}
int gcd(int x, int y) {
    if (x == 0)
        return y;
    if (y == 0)
        return x;
    if (x == y)
        return x;
    if (x > y)
        return gcd(x - y, y);
    else
        return gcd(x, y - x);
}
int main()
{
    int a, b, p, q, g;
    cout << "enter a and b" << endl;
    cin >> a >> b;
    p = fact(a);
    q = fact(b);
    g = gcd(p,q);
    cout << g << endl;
    return 0;

}
