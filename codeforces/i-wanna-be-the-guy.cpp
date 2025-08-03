#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<int> stt;
    int p1;
    cin >> p1;
    for (int i = 0; i < p1; i++)
    {
        int tep;
        cin >> tep;
        stt.insert(tep);
    }
    int p2;
    cin >> p2;
    for (int i = 0; i < p2; i++)
    {
        int tep;
        cin >> tep;
        stt.insert(tep);
    }

    if (stt.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;
}
