#include <bits/stdc++.h>
using namespace std;
vector<string> split(const string &s, char delim) {
    stringstream ss(s);
    string item;
    vector<string> tokens;
    while (getline(ss, item, delim)) {
        tokens.push_back(item);
    }
    return tokens;
}
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for(int i = 0; i<t; i++)
    {
        string str;
        getline(cin,str);

        vector <string> names = split(str,' ');
        long long int num1, num2;
        cin >> num1 >> num2;
        if((num1+num2)%2 == 0)
        {
            if(names[1] == "PAR")
                cout<<names[0]<<endl;
            else
                cout<<names[2]<<endl;
        }
        else
        {
            if(names[1] == "IMPAR")
                cout<<names[0]<<endl;
            else
                cout<<names[2]<<endl;
        }

        getchar();
    }

    return 0;
}

