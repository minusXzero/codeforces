#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin >> s;

    vector<char> v;
    vector<char> v1; 

    for(char c : s)
    {
        if(c == '+')
        {
            v.push_back(c);
        }else 
        {
            v1.push_back(c);
        }
    }

    sort(v1.begin(), v1.end());

    string result = ""; 
    int index1 = 0, index2 = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(i%2 == 0)
        {
            result.push_back(v1[index1++]); 
        }

        if(i%2 == 1){
            result.push_back(v[index2++]); 
        }
    }

    cout << result << endl;

    return 0; 
}