#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ss;
    getline(cin, ss);

    string s = ss.substr(1, ss.size() - 2);

    set<char> stt;
    for (int i = 0; i < s.size(); i += 3)
        stt.insert(s[i]);

    cout << stt.size() << endl;

    return 0;
}
