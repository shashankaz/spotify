#include <bits/stdc++.h>
using namespace std;

void printnto1(int n)
{
    if (n == 0)
        return;

    cout << n << " ";
    printnto1(n - 1);
}

int main()
{
    printnto1(5);

    return 0;
}