#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> v;
    for(int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    int count = 1; 
    for(int i = 1; i < t; i++)
    {
        if(v[i-1] != v[i])
        {
            count++; 
        }
    }

    cout << count << endl; 
    return 0; 
}