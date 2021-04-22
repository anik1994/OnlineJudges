#include <bits/stdc++.h>
using namespace std;
//typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);

    {
        long long int n , x, totalNum;
        vector <long long int> vct , attacked;
        long long int sum = 0, sheep = 0;

        cin>>n;
        totalNum = n;
        while(n--)
        {
            cin>>x;
            vct.push_back(x);
            attacked.push_back(0);
            sum += x;
        }
        long long int startIndex = 0;
        long long int numberOfAttacked = 0;

        if(vct[startIndex] == 0)
            numberOfAttacked++;
        else
        {
            while(startIndex >= 0 && startIndex < totalNum && vct[startIndex]>0)
            {
                if(vct[startIndex]%2 == 0)
                {
                    sheep++;
                    vct[startIndex]--;
                    if(attacked[startIndex] == 0)
                    {
                        attacked[startIndex] = 1;
                        numberOfAttacked++;
                    }
                    startIndex--;
                }
                else
                {
                    sheep++;
                    vct[startIndex]--;
                    if(attacked[startIndex] == 0)
                    {
                        attacked[startIndex] = 1;
                        numberOfAttacked++;
                    }
                    startIndex++;
                }
            }
        }
        //long long int difference = sum - sheep ;
        cout << numberOfAttacked << " " << (sum-sheep) <<endl;
    }
    return 0;
}
