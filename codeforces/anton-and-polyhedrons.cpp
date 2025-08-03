#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int val = 0;
    for (int i = 0; i < n; i++)
    {
        string tp;
        cin >> tp;

        if (tp == "Tetrahedron")
            val += 4;
        else if (tp == "Cube")
            val += 6;
        else if (tp == "Octahedron")
            val += 8;
        else if (tp == "Dodecahedron")
            val += 12;
        else if (tp == "Icosahedron")
            val += 20;
    }

    cout << val << endl;

    return 0;
}
