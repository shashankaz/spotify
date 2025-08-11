#include <bits/stdc++.h>
using namespace std;

void printName(int count)
{
    if (count == 0)
        return;

    cout << "Hello" << endl;
    count--;
    printName(count);
}

int main()
{
    printName(5);

    return 0;
}

// TC - O(n)
// SC - O(n)