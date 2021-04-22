#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
bool isPrime(int x)
{
    for(int i =2; i<= sqrt(x); i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
int main()
{
    string str;
    while(getline(cin, str))
    {
        int sum = 0;
        int len = str.length();

        for(int i=0; i<len; i++)
        {
            if(str[i]>='a' && str[i]<='z')
                sum += ((int)str[i])-96;
            else if(str[i]>='A' && str[i]<='Z')
                sum += ((int)str[i])-38;
        }
        if(isPrime(sum))
            cout << "It is a prime word." << endl;
        else
            cout << "It is not a prime word." << endl;
    }
    return 0;
}
