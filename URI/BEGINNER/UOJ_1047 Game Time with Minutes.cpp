#include<bits/stdc++.h>
using namespace std;

int main()
{
    int startHr, startMin, endHr, endMin;
    int totalHr = 0, totalMin = 0;
    cin >> startHr >> startMin >> endHr >>endMin;


    if(endMin >= startMin)
    {
        totalMin = endMin - startMin;
        if(endHr >= startHr)
        {
            totalHr = endHr - startHr;
        }
        else
        {
            totalHr = (24+endHr) - startHr;
        }
    }
    else
    {
        startHr++;
        totalMin = (60+endMin) - startMin;
        if(endHr >= startHr)
        {
            totalHr = endHr - startHr;
        }
        else
        {
            totalHr = (24+endHr) - startHr;
        }
    }
    if(totalHr == 0 && totalMin == 0)
    {
        totalHr = 24;
        totalMin = 0;
    }
    cout<<"O JOGO DUROU "<<totalHr<<" HORA(S) E "<<totalMin<<" MINUTO(S)"<<endl;
    return 0;
}

