#include <bits/stdc++.h>
using namespace std;

void explainStack()
{
    stack<int> st;

    // All operations are O(1)

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;

    stack<int> st1, st2;
    st1.swap(st2);
}

int main()
{
    explainStack();

    return 0;
}