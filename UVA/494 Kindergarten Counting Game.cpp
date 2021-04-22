//http://onlinejudgesolution.blogspot.com/2017/05/uva-solution-494-kindergarten-counting.html
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    string input;

    while(getline(cin,input))
    {
        int len = input.length();
        int temp = 0, counter = 0;

        for(int i=0; i<len; i++)
        {
            if(input[i]>='a' && input[i]<='z' || input[i]>='A' && input[i]<='Z')
            {
                temp = 1;
            }
            else
            {
                counter += temp;
                temp = 0;
            }
        }
        counter += temp;
        cout << counter << endl;
    }
    return 0;
}
