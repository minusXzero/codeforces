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

    vector<int> pre_sum; 
    long long sum = 0; 
    for(int i = 0; i < t; i++)
    {
        sum += v[i]; 
        pre_sum.push_back(sum);
    }
    int count = 0;

    for(int i = t-1; i >= 0; i--)
    {
        count++; 
        long long remaining_sum = (i > 0) ? pre_sum[i - 1] : 0;
        long long my_sum = sum - remaining_sum;
        if(my_sum > remaining_sum)
        {
            cout << count << endl; 
            break; 
        }
    }
    
    return 0;
}