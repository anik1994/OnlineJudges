#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for(int i = 0; i<t; i++)
    {
        string str, str2;
        getline(cin,str);

        str2 = str.substr(0,5);
        if(str2 == "Thor ")
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;

    }

    return 0;
}
