#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    string str;

    while(getline(cin,str))
    {
        int arr[150] = {0};
        int maxLen = -1;
        int len = str.length();

        for(int i=0; i<len; i++)
        {
            if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
            {
                int temp = str[i];
                arr[temp]++;
                if(arr[temp]>maxLen)
                    maxLen = arr[temp];
            }
        }
        for(int i=65; i<=90; i++)
        {
            if(arr[i]==maxLen)
                cout << (char)i;
        }
        for(int i=97; i<=122; i++)
        {
            if(arr[i]==maxLen)
                cout << (char)i;
        }
        cout << " " << maxLen <<endl;
    }
    return 0;
}
