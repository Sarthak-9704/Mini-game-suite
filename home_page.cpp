//this program is based on the concept of the game roblox but using c++ executables imported from other files instead of using applets which are not allowed in c++
#include<iostream>
#include<string>
#include<vector>
#include"TicTacToe.h"
#include"blackjack(beta).h"
using namespace std;

int main()
{

    cout<<"Welcone!!"<<endl<<"which game would you like to play?"<<endl;
    int n;
    vector<string>games;
    games.push_back("TicTacToe");
    games.push_back("BlackJack");
    for (n=0;n<2;++n)
        {
            cout<<n+1<<". "<<games[n]<<endl;
        }
    cout<<"enter the serial number of the game you wish to play ";
    cin>>n;
    if(n==1)
    {
        ttt_fun();
    }
    else if(n==2)
    {
        bj_fun();
    }
    else 
    cout<<"invalid entry "<<endl;

return 0;
}

