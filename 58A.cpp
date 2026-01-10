#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a, b = "hello";
    cin >> a;
    int j = 0, n = b.size();
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == b[j])
        {
            j++;
        }

    }

    if(j == b.size())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}