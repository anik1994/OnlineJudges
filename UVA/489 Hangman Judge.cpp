#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int main()
{
    int x;

    while(cin>>x)
    {
        getchar();
        if(x == -1)
            break;

        string ans, guess;
        getline(cin, ans);
        getline(cin, guess);

        int ansMark[30] = {0}, guessMark[30]= {0}, hangMan = 0, sum;

        for(int i=0; i<ans.length(); i++)
        {
            if(ans[i]>='a' && ans[i]<='z')
            {
                int temp = ans[i]-97;
                if(ansMark[temp]!=1)
                    ansMark[temp] = 1;
            }
        }
        for(int i=0; i<guess.length(); i++)
        {
            int temp = guess[i]-97;
            if(guessMark[temp]!=1) //check if already taken or not
            {
                guessMark[temp] = 1;
                if(ansMark[temp]==1)
                {
                    ansMark[temp] = 0;
                }
                else
                    hangMan++;

                sum = 0;

                for(int j =0; j<26; j++)
                    sum += ansMark[j];

                if(sum > 0 && hangMan==7)
                {
                    cout << "Round " << x <<endl;
                    cout << "You lose." << endl;
                    break;
                }
                else if(sum == 0 && hangMan < 7)
                {
                    cout << "Round " << x <<endl;
                    cout << "You win." << endl;
                    break;
                }
            }
        }
        if(sum>0 && hangMan <7)
        {
            cout << "Round " << x <<endl;
            cout << "You chickened out." << endl;
        }

    }
    return 0;
}
