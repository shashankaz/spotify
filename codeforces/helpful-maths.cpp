#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> numbers;
    stringstream ss(s);
    string token;

    while (getline(ss, token, '+'))
    {
        numbers.push_back(stoi(token));
    }

    sort(numbers.begin(), numbers.end());

    for (size_t i = 0; i < numbers.size(); ++i)
    {
        if (i > 0)
            cout << "+";
        cout << numbers[i];
    }

    return 0;
}
