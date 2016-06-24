#include<iostream>

using namespace std;

int main()
{
    int i, i2;
    unsigned u, u2;

    i = 10; i2 = 42;
    u = 10; u2 = 42;

    cout << u2 - u << '\n'
         << u - u2 << '\n'
         << i2 - i << '\n'
	 << i - i2 << '\n'
	 << i - u << '\n'
	 << u - i << endl;
    return 0;
}
