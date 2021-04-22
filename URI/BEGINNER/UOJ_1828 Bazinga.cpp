#include <bits/stdc++.h>
using namespace std;
int winner(string p1, string p2)
{
    if(p1 == p2)
    {
        return 3;
    }
    else if((p1 == "tesoura" && p2 == "papel") || (p1 == "papel" && p2 == "tesoura"))
    {
        if(p1 == "tesoura" && p2 == "papel")
            return 1;
        else
            return 2;
    }
    else if((p1 == "papel" && p2 == "pedra") || (p1 == "pedra" && p2 == "papel"))
    {
        if(p1 == "papel" && p2 == "pedra")
            return 1;
        else
            return 2;
    }
    else if((p1 == "pedra" && p2 == "lagarto") || (p1 == "lagarto" && p2 == "pedra"))
    {
        if(p1 == "pedra" && p2 == "lagarto")
            return 1;
        else
            return 2;
    }
    else if((p1 == "lagarto" && p2 == "Spock") || (p1 == "Spock" && p2 == "lagarto"))
    {
        if(p1 == "lagarto" && p2 == "Spock")
            return 1;
        else
            return 2;
    }
    else if((p1 == "Spock" && p2 == "tesoura") || (p1 == "tesoura" && p2 == "Spock"))
    {
        if(p1 == "Spock" && p2 == "tesoura")
            return 1;
        else
            return 2;
    }
    else if((p1 == "tesoura" && p2 == "lagarto") || (p1 == "lagarto" && p2 == "tesoura"))
    {
        if(p1 == "tesoura" && p2 == "lagarto")
            return 1;
        else
            return 2;
    }
    else if((p1 == "lagarto" && p2 == "papel") || (p1 == "papel" && p2 == "lagarto"))
    {
        if(p1 == "lagarto" && p2 == "papel")
            return 1;
        else
            return 2;
    }
    else if((p1 == "papel" && p2 == "Spock") || (p1 == "Spock" && p2 == "papel"))
    {
        if(p1 == "papel" && p2 == "Spock")
            return 1;
        else
            return 2;
    }
    else if((p1 == "Spock" && p2 == "pedra") || (p1 == "pedra" && p2 == "Spock"))
    {
        if(p1 == "Spock" && p2 == "pedra")
            return 1;
        else
            return 2;
    }
    else if((p1 == "pedra" && p2 == "tesoura") || (p1 == "tesoura" && p2 == "pedra"))
    {
        if(p1 == "pedra" && p2 == "tesoura")
            return 1;
        else
            return 2;
    }
    else
        return 3;
}

int main()
{
    int t;
    cin >> t;

    for(int i = 1; i<=t; i++)
    {
        string player1, player2;

        cin>>player1>>player2;
        int decision = winner(player1, player2);

        if(decision == 1)
        {
            printf("Caso #%d: Bazinga!\n",i);
        }
        else if(decision == 2)
        {
            printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else
        {
            printf("Caso #%d: De novo!\n",i);
        }
    }
    return 0;
}
