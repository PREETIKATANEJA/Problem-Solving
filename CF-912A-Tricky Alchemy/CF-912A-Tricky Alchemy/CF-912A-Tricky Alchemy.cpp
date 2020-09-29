// CF-912A-Tricky Alchemy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

int main()
{
    //values can be upto 10^9, so use long long int 
    long long int A, B, x, y, z;
    cin >> A >> B;
    cin >> x >> y >> z;

    long long int ans = 0;

    //yellow crystals needed
    long long int yellow_crystals = 2 * x + y - A;
    //blue crystals needed
    long long int blue_crystals = y + 3 * z - B;

    //if given yellow crystals are sufficient
    if (yellow_crystals > 0)
        ans = ans + yellow_crystals;

    //if given blue crystals are sufficient
    if (blue_crystals > 0)
        ans = ans + blue_crystals;

    cout << ans << endl;

    return 0;
}
