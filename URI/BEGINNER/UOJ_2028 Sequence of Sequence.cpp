#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
    int t, caso = 1;
    while(scanf("%d",&t)!=EOF)
    {
        vector<int> vct;
        vct.pb(0);

        int totalNum = 1;

        for(int i = 1; i<= t; i++)
        {
            for(int j = 1; j<=i; j++)
            {
                vct.pb(i);
                totalNum++;
            }
        }
        if(totalNum == 1)
        {
            printf("Caso %d: %d numero\n", caso , totalNum);
            for(int i = 0 ; i<totalNum ; i++)
            {
                cout << vct[i];
                if(i != totalNum -1)
                    cout << " ";
            }
            cout << endl;
        }
        else
        {
            printf("Caso %d: %d numeros\n", caso , totalNum);
            for(int i = 0 ; i<totalNum ; i++)
            {
                cout << vct[i];
                if(i != totalNum -1)
                    cout << " ";
            }
            cout << endl;
        }
        cout<<endl;
        caso++;
    }
    return 0;
}


