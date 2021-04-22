// A side theke 1,2,3,....n ei akare coaches (bogi) gula asbe
// eder ke emn vabe rakha possible kina je given configuration pete pari
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define countDigit(n) (floor(log10(abs(n))+1))

bool isSeq(vector<int> vct)
{
    int len = vct.size();

    stack<int> st;

    int index = 0, curNo = 1;

    while(curNo<=len)
    {
        st.push(curNo);
        while(!st.empty() && st.top()==vct[index])
        {
            st.pop();
            if((++index)>=len)
                break;
        }
        curNo++;
    }

    return st.empty();
}

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int n;
    vector<int> vct;
    while(scanf("%d", &n)==1 && n)
    {
        while(1)
        {
            int temp;
            scanf("%d", &temp);
            if(!temp)
            {
                printf("\n");
                break;
            }
            vct.pb(temp);
            for(int i=1; i<n; i++)
            {
                scanf("%d", &temp);
                vct.pb(temp);
            }
            if(isSeq(vct))
                printf("Yes\n");
            else
                printf("No\n");

            vct.clear();
        }
    }

    //system("notepad.exe out.txt");
    return 0;
}
