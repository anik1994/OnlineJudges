#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define countDigit(n) (floor(log10(abs(n))+1))

int fin(int fir, int last, int key)
{
    while(fir<=last)
    {
        int mid = (fir+last)/2;
        if((mid*mid*mid) == key)
            return mid;
        else if((mid*mid*mid)>key)
            last = mid-1;
        else
            fir = mid+1;
    }
    return -1;
}

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    while(cin>>t && t)
    {
        bool isFound = true;
        for(int i=1;i<60;i++)
        {
            int x = fin(i, 59, t+(i*i*i));
            if(x>0)
            {
                cout << x <<" "<< i << endl;
                isFound = false;
                break;
            }
        }
        if(isFound)
            cout << "No solution" << endl;
    }

    //system("notepad.exe out.txt");
    return 0;
}
