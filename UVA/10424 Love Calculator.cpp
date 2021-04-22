#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int result(string str)
{
    int len = str.length();
    int sum = 0;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for(int i=0; i<len; i++)
    {
        if(str[i]>='a' && str[i]<='z')
            sum += ((int)str[i]-96);
    }
    while(sum>9)
    {
        int x = sum;
        sum = 0;
        while(x!=0)
        {
            sum += x%10;
            x = x/10;
        }
    }
    return sum;
}

int main()
{
    string str1, str2;
    while(getline(cin,str1))
    {
        getline(cin,str2);
        int a, b;
        a = result(str1);
        b = result(str2);

        if(a<b)
          printf("%0.2f \%\n", (((double)a/(double)b)*100.00));
        else
            printf("%0.2f \%\n", (((double)b/(double)a)*100.00));
    }
    return 0;
}
