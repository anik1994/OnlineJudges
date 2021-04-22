#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define countDigit(n) (floor(log10(abs(n))+1))

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int n;
    cin >> n;


    while(n--)
    {
        int arr[350]={ };
        int k;
        cin >> k;
        unsigned char temp;
        while(k--)
        {
            cin >> temp;
            cin >> arr[temp+128];
        }

        int m;
        cin >> m;
        getchar();
        string str;
        double money = 0;
        while(m--)
        {
            getline(cin, str);
            int len = str.length();
            for(int i=0; i<len; i++)
                money += arr[str[i]+128];
        }
        printf("%0.2f$\n",money/100);
        //cout << fixed << setprecision(2) << (money/100.0) << "$" << endl;
    }

    //system("notepad.exe out.txt");
    return 0;
}
