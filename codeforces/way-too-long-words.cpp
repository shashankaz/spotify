#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i].length() < 11)
            cout << s[i] << endl;
        else
            cout << s[i][0] << s[i].length() - 2 << s[i][s[i].length() - 1] << endl;
    }

    return 0;
}
