#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    for (char &c : s)
        c = tolower(c);

    set<char> letters;
    for (char c : s)
    {
        if (isalpha(c))
            letters.insert(c);
    }

    if (letters.size() == 26)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
