#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
 
vector <char> vec;
int main()
{
    string str;
    while(cin >> str)
    {
        vec.clear();
        int sz = str.size();
        for(int i=0; i<sz; i++){
            vec.pb(str[i]);
        }
        reverse(vec.begin(), vec.end());
        for(int i=0; i<vec.size(); i++){
            cout << vec[i];
        }
        cout << "\n";
    }
    return 0;
}