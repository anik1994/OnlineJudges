#include <bits/stdc++.h>
using namespace std;
int decimal(string str)
{
    int len = str.length();
    int value = 0;

    for(int i = 0,j = 2; i<3; i++, j--)
    {
        if(str[i] == '*')
        {
            value += pow(2,j);
        }
    }
    return value;
}

int main()
{

    string line;
    int sum = 0;

    while(getline(cin,line))
    {
        if(line == "caw caw")
        {
            cout<<sum<<endl;
            sum = 0;
        }
        else
        {
            sum += decimal(line);
        }
    }
    return 0;
}
