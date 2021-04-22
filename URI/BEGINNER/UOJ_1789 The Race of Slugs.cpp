#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L;
    while(scanf("%d",&L) != EOF)
    {
        int currentLevel = 0;
        int V;

        for(int i = 0; i < L; i++)
        {
            cin>>V;
            if(V < 10 && currentLevel < 1)
                currentLevel = 1;
            else if(V >= 10 && V < 20 && currentLevel < 2)
                currentLevel = 2;
            else if(V >= 20 && currentLevel < 3)
                currentLevel = 3;
        }
        cout<<currentLevel<<endl;
    }
    return 0;
}
