#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

struct dep
{
    int forMonth;
    double rate;
};

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    int month, noOfDepre, monthCounter;
    double downPayment, loan;

    while(scanf("%d %lf %lf %d", &month, &downPayment, &loan, &noOfDepre)==4 && month>0)
    {
        vector<dep> vct;
        monthCounter = 0;

        for(int i=0; i<noOfDepre; i++)
        {
            dep temp;
            scanf("%d %lf", &temp.forMonth, &temp.rate);
            vct.pb(temp);
        }
        double currentCarPrice = (loan+downPayment) - ((loan+downPayment)*vct[0].rate);
        int index = 0;
        double payable = loan/month;
        while(loan >= currentCarPrice)
        {
            //cout << "After month " << monthCounter << "\n Car : "<<currentCarPrice << "\t Loan : " << loan << "\t Index : " << index << endl;
            monthCounter++;
            loan -= payable;
            if(monthCounter < vct[index+1].forMonth)
                currentCarPrice = currentCarPrice - (currentCarPrice*vct[index].rate);
            else if(monthCounter == vct[index+1].forMonth)
            {
                index++;
                currentCarPrice = currentCarPrice - (currentCarPrice*vct[index].rate);
            }
            else
                currentCarPrice = currentCarPrice - (currentCarPrice*vct[index].rate);

        }

        if(monthCounter == 1)
            printf("1 month\n");
        else
            printf("%d months\n", monthCounter);

        vct.clear();

    }
    //system("notepad.exe out.txt");
    return 0;
}
