#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int A, B, C, D, E, F;

    cin>>A>>B>>C>>D;
    E=A+B;
    F=C+D;
    if(B>C && D>A && F>E && C>0 && D>0 && A%2==0){
        cout<<"Valores aceitos"<<endl;
    }
    else
    {
        cout<<"Valores nao aceitos"<<endl;
    }
}
