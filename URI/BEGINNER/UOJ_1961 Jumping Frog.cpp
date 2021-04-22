#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, n;
    cin >> p >> n;

    vector<int> v;
    while(n--)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0; i<v.size()-1; i++)
    {
        if(abs(v[i]-v[i+1])>p)
        {
            cout << "GAME OVER" <<endl;
            return 0;
        }
    }
    cout << "YOU WIN" <<endl;
    return 0;
}
