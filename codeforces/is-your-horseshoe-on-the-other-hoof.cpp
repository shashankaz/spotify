#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;

    for (int i = 0; i < 4; i++)
    {
        int temp = 0;
        cin >> temp;
        st.insert(temp);
    }

    cout << 4 - st.size();

    return 0;
}
