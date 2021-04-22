#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

ll fact(int x)
{
    ll factorial = 1;
    while(x)
    {
        factorial *= x;
        x--;
    }
    return factorial;
}

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int t, counter = 1;
    int arr[26];
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        char str[50];
        memset(arr, 0, 26*sizeof(arr[0]));
        gets(str);
        int len = strlen(str);
        for(int i=0; i<len; i++)
        {
            arr[str[i]-'A']++;
        }
        ll res = fact(len);
        for(int i=0; i<26; i++)
        {
            if(arr[i]>1)
                res /= fact(arr[i]);
        }
        printf("Data set %d: %lld\n", counter, res);
        counter++;
    }
    //system("notepad.exe out.txt");
    return 0;
}
