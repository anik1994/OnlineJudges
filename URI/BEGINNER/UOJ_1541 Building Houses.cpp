#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;

    scanf("%d",&A);
    if(A == 0)
        return 0;
    scanf("%d%d", &B, &C);

    while(1)
    {
        cout<<floor(sqrt((100.0/C)*A*B))<<endl;

        scanf("%d",&A);
        if(A == 0)
            return 0;
        scanf("%d%d", &B, &C);
    }

    return 0;
}

