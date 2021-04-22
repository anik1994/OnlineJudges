#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day1, day2, day3;
    cin >> day1 >> day2 >> day3;

    if(day1 > day2 && day2 <= day3)
        cout<<":)"<<endl;
    else if(day1 < day2 && day2 >= day3)
        cout<<":("<<endl;
    else if(day1 < day2 && day2 < day3 && (day3 - day2)<(day2 - day1))
        cout<<":("<<endl;
    else if(day1 < day2 && day2 < day3 && (day3 - day2)>=(day2 - day1))
        cout<<":)"<<endl;
    else if(day1 > day2 && day2 > day3 && (day2 - day3)<(day1 - day2))
        cout<<":)"<<endl;
    else if(day1 > day2 && day2 > day3 && (day2 - day3)>=(day1 - day2))
        cout<<":("<<endl;
    else if(day1 == day2 && day2 < day3)
        cout<<":)"<<endl;
    else if(day1 == day2 && day2 > day3)
        cout<<":("<<endl;
    else
        cout<<":("<<endl;

    return 0;
}
