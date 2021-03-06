// C++ Program to find n'th fibonacci Number
#include <iostream>
using namespace std;
#include <cmath>

int fib(int n)
{
    double phi = (1 + sqrt(5)) / 2;
    return round(pow(phi, n) / sqrt(5));
}

// Driver Code
int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}
//This code is contributed by Lokesh Mohanty.
