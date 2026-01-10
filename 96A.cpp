#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count1 = 0, count2 = 0;
    string a;
    cin >> a;
    for(int i = 0; i<a.size(); i++)
    {
        if(a[i] == '1')
        {    
            count1++;
            count2 = 0;
        }
        if(a[i] == '0')
        {    
            count1 = 0;
            count2++;
        }

        if(count1 == 7 || count2 == 7)
            break;
        
    }

    if(max(count1, count2) < 7)
        cout << "NO";
    else if(max(count1, count2) >= 7)
        cout << "YES";
}