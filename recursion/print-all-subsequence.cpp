#include <bits/stdc++.h>
using namespace std;

void printSubsequences(int idx, vector<int> &ans, vector<int> &val)
{
    if (idx >= val.size())
    {
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        if (ans.size() == 0)
            cout << "{}" << " ";
        cout << endl;
        return;
    }

    // Include current element
    ans.push_back(val[idx]);
    printSubsequences(idx + 1, ans, val);

    // Exclude current element
    ans.pop_back();
    printSubsequences(idx + 1, ans, val);
}

int main()
{
    vector<int> val = {3, 2, 1};
    vector<int> ans;

    printSubsequences(0, ans, val);

    return 0;
}

// TC - O(2^n x n) where n is the length of the input array
// SC - O(n)