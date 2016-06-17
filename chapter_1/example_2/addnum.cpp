#include<iostream>
using namespace std;

int main()
{
    int num = 0, sum = 0;

    while(cin >> num)
    {
	sum += num;
    }
    cout << "sum is " << sum << '\n';
    return 0;
}
