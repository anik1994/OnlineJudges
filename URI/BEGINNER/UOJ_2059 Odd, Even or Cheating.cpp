#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
    int p, j1, j2, r, a;
    while(cin >> p >> j1 >> j2 >> r >> a)
    {
        if(r == 1 && a == 0)
            cout << "Jogador 1 ganha!" << endl;
        else if (r == 1 && a == 1)
            cout << "Jogador 2 ganha!" << endl;
        else if (r == 0 && a == 1)
            cout << "Jogador 1 ganha!" << endl;
        else
        {
            if(p == 1 && (j1+j2)%2 == 0)
               cout << "Jogador 1 ganha!" << endl;
            else if(p == 1 && (j1+j2)%2 != 0)
               cout << "Jogador 2 ganha!" << endl;
            else if(p == 0 && (j1+j2)%2 == 0)
               cout << "Jogador 2 ganha!" << endl;
            else if(p == 0 && (j1+j2)%2 != 0)
                cout << "Jogador 1 ganha!" << endl;

        }
    }
    return 0;
}
