#include <bits/stdc++.h>
using namespace std;

void printnto1(int i, int n)
{
    if (n == 0)
        return;

    printnto1(i + 1, n - 1);
    cout << i << " ";
}

int main()
{
    printnto1(1, 5);

    return 0;
}