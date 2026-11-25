#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n; 
        vector<int> v(n); 
        for(int i = 0; i < n; i++)
        {
            cin >> v[i]; 
        }

        sort(v.begin(), v.end());

        bool has_duplicate = false;

        for(int i = 1; i < n; i++)
        {
            if (v[i - 1] == v[i]) 
            { 
                has_duplicate = true;
                break;
            }
        }

        if(!has_duplicate) 
        {
            long long min_diff = LLONG_MAX; 
            for (int i = 1; i < n; i++) 
            {
                long long diff = v[i] - v[i - 1];
                min_diff = min(min_diff, diff);
            }
            cout << min_diff << endl;
        }else
        {
            cout << 0 << endl; 
        }
        
    }
    return 0; 
}