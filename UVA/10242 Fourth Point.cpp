//https://www.nextgurukul.in/nganswers/ask-question/answer/To-find-4th-vertex-of-a-parallelogram-/Coordinate-Geometry/4645.htm
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

struct pointer
{
    double x;
    double y;
};

bool isSame(pointer a, pointer b)
{
    if(a.x == b.x && a.y == b.y)
        return true;
    return false;
}

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //system("notepad.exe input.txt");

    double x1, y1, x2, y2, x3, y3, x4, y4;


    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4)
    {
        vector<pointer> v;
        pointer temp;

        temp.x = x1;
        temp.y = y1;
        v.pb(temp);
        temp.x = x2;
        temp.y = y2;
        v.pb(temp);
        temp.x = x3;
        temp.y = y3;
        v.pb(temp);
        temp.x = x4;
        temp.y = y4;
        v.pb(temp);

        //double midPointX = (x1+x4)/2;
        //double midPointY = (y1+y4)/2;
        double ansX, ansY;
        if(isSame(v[0],v[2]))
        {
            ansX = (v[1].x+v[3].x)-v[0].x;
            ansY = (v[1].y+v[3].y)-v[0].y;
        }
        else if(isSame(v[0],v[3]))
        {
            ansX = (v[1].x+v[2].x)-v[0].x;
            ansY = (v[1].y+v[2].y)-v[0].y;
        }
        else if(isSame(v[1],v[2]))
        {
            ansX = (v[0].x+v[3].x)-v[1].x;
            ansY = (v[0].y+v[3].y)-v[1].y;
        }
        else
        {
            ansX = (v[0].x+v[2].x)-v[1].x;
            ansY = (v[0].y+v[2].y)-v[1].y;
        }
        cout << fixed << setprecision(3) << ansX << " " << ansY << endl;

        v.clear();
    }

    //system("notepad.exe out.txt");
    return 0;
}
