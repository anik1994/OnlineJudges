#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

//https://www.techiedelight.com/angle-between-hour-minute-hand/

// Function to compute the angle between hour and minute hand
double findAngle(int hour, int min)
{
	// find position of hour's hand
	double h = (hour * 360.0) / 12 + (min * 360.0) / (12.0 * 60.0);

	// find position of minute's hand
	double m = (min * 360.0) / (60.0);

	// calculate the angle difference
	double angle = fabs(h - m);

	// consider shorter angle and return it
	if (angle > 180)
		angle = 360 - angle;

	return angle;
}

int main()
{
    int hr, mi;

    while(scanf("%d:%d", &hr, &mi))
    {
        if(hr==0 && mi ==0)
            break;
        double ang = findAngle(hr,mi);
        printf("%.3f\n",ang);
    }
    return 0;
}
