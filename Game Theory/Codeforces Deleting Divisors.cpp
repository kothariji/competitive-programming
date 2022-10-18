//Alice and Bob are playing a game.

//They start with a positive integer n and take alternating turns doing operations on it. Each turn a player can subtract from n one of its divisors that isn't 1 or n. The player who cannot make a move on his/her turn loses. Alice always moves first.

//Note that they subtract a divisor of the current number in each turn.

//You are asked to find out who will win the game if both players play optimally.

#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2 == 1)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            int temp = n, i;
            for(i = 0; temp > 1; i++)
            {
                temp /= 2;
            }
            if(pow(2,i) != n)
                cout<<"Alice"<<endl;
            else if(i %2 == 0)
                cout<<"Alice"<<endl;
            else
                cout<<"Bob"<<endl;
        }
    }
    return 0;
}
