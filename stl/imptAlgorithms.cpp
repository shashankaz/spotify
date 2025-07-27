#include <bits/stdc++.h>
using namespace std;

void doSomething(int num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 10;
    cout << num << endl;
}

void doSomethingAgain(int &num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 10;
    cout << num << endl;
}

bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.second < b.second)
        return true;
    else if (a.second == b.second)
        return a.first < b.first;
    return false;
}

void explainExtra()
{
    sort(a, a + n);
    sort(v.begin(), v.end());

    sort(a + 2, a + 4);

    sort(a, a + n, greater<int>()); // descending order

    sort(v.begin(), v.end(), greater<int>()); // descending order

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    // sort it acc to second element
    // if second element is same, then sort
    // it acc to first element but in descending

    sort(a, a + 3, comp); // comp is self written comparator function

    int n = 7;
    int cnt = __builtin_popcount(n); // counts number of set bits in n
    long long m = 165786578687;
    int cnt = __builtin_popcountll(m); // counts number of set bits in m

    // Next permutation
    string s = "123";
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    // If you want to print all combinations of the string
    // then you have to sort the string first
    // and then use next_permutation
    // and then print the string

    // prev permutation
    string s = "123";
    do
    {
        cout << s << endl;
    } while (prev_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a + n);             // max element in array a
    int mini = *min_element(v.begin(), v.end());   // min element in vector v
    int sum = accumulate(a, a + n, 0);             // sum of all elements in array a
    int sum = accumulate(v.begin(), v.end(), 0);   // sum of all elements in vector v
    int sum = accumulate(v.begin(), v.end(), 100); // sum of all elements in vector v + 100

    int mini = min({2, 1, 9}); // min of 2, 1, 9
    int maxi = max({2, 1, 9}); // max of 2, 1, 9
}

int main()
{
    explainExtra();

    int num = 10;
    // This is example of pass by value
    doSomething(num);
    cout << num << endl;

    // This is example of pass by reference
    doSomethingAgain(num);
    cout << num << endl;

    // Array is always passed by reference by default

    return 0;
}