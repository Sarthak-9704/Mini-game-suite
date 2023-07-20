#include<iostream>
#include<string>
#include"TicTacToe.h"
using namespace std;

int main()
{
    ttt_fun();
    // basic();
}
    
void basic()
{
    cout<<"hello test";
}
void ttt_fun()
{
    cout<<"WELCOME TO TIC-TAC-TOE!"<<endl;
    cout<<"This game requires 2 players."<<endl;
    string p1, p2;
   
    cout<<"enter name of first player (X)";
    cin>>p1;
    cout<<"enter name of second player (O)";
    cin>>p2;
    
    int win;
    show_board();
    int n;
    for (n=0;n<4;n++)
    {
        cout<<"\nIt is "<<p1<<"'s turn "<<endl;
        cout<<"enter the number where you wish to place your mark ";
        move1('X','O');
        show_board();
        win = check_win();
        if (win==1)
        break;
        
        cout<<endl<<"it is "<<p2<<"'s turn"<<endl;
        cout<<"enter the number where you wish to place your mark ";
        move2('O','X');
        win = check_win();
        show_board();
        if(win==1)
        {
            break;
        }
    }
    
    if (win!=1)
    {
        cout<<"\nIt is "<<p1<<"'s turn "<<endl;
        cout<<"enter the number where you wish to place your mark ";
        move1('X','O');
        show_board();
    }
    win=check_win();
    if(win!=1)
    {
        cout<<"it's a tie! "<<endl;
    }
    else
    cout<<"game over !"<<endl;
}

void show_board()
{
     cout<<"_"<<board[0][0]<<"_|_"<<board[0][1]<<"_|_"<<board[0][2]<<"_\n";
    cout<<"_"<<board[1][0]<<"_|_"<<board[1][1]<<"_|_"<<board[1][2]<<"_\n";
    cout<<" "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";
}

void move1(char X,char O)
{
    int play;
    cin>>play;

    switch (play)
    {
        case 1: 
        if (board[0][0]=='O')
        {
            cout<<"invalid input. Enter a different number ";
            move1(X,O);
        }
        else
        {
            board[0][0]='X';
            break;
        }
        
        case 2:
        if (board[0][1]=='O')
        {
            cout<<"invalid input. Enter a different number ";
            move1(X,O);
        }
        else
        {
            board[0][1]='X';
            break;
        }
        case 3: 
        if (board[0][2]=='O')
        {
            cout<<"invalid input. Enter a different number ";
            move1(X,O);
        }
        else
        {
            board[0][2]='X';
            break;
        }
        case 4:
        if (board[1][0]=='O')
        {
            cout<<"invalid input. Enter a different number ";
            move1(X,O);
        }
        else
        {
            board[1][0]='X';
            break;
        }
        case 5: 
        if (board[1][1]=='O')
        {
            cout<<"invalid input. Enter a different number ";
            move1(X,O);
        }
        else
        {
            board[1][1]='X';
            break;
        }
        case 6:
        if (board[1][2]=='O')
        {
            cout<<"invalid input. Enter a different number ";
            move1(X,O);
        }
        else
        {
            board[1][2]='X';
            break;
        }
        case 7: 
        if (board[2][0]=='O')
        {
            cout<<"invalid input. Enter a different number ";
            move1(X,O);
        }
        else
        {
            board[2][0]='X';
            break;
        }
        case 8:
        if (board[2][1]=='O')
        {
            cout<<"invalid input. Enter a different number ";
            move1(X,O);
        }
        else
        {
            board[2][1]='X';
            break;
        }
        case 9:
        if (board[2][2]=='O')
        {
            cout<<"invalid input. Enter a different number ";
            move1(X,O);
        }
        else
        {
            board[2][2]='X';
            break;
        }
        default:
        cout<<"INVALID INPUT"<<endl;
        move1(X,O);
    }
}

void move2(char O,char X)
{
    int play;
    cin>>play;

    switch (play)
    {
        case 1: 
        if (board[0][0]=='X')
        {
            cout<<"invalid input. Enter a different number ";
            move2(X,O);
        }
        else
        {
            board[0][0]='O';
            break;
        }
        
        case 2:
        if (board[0][1]=='X')
        {
            cout<<"invalid input. Enter a different number ";
            move2(X,O);
        }
        else
        {
            board[0][1]='O';
            break;
        }
        case 3: 
        if (board[0][2]=='X')
        {
            cout<<"invalid input. Enter a different number ";
            move2(X,O);
        }
        else
        {
            board[0][2]='O';
            break;
        }
        case 4:
        if (board[1][0]=='X')
        {
            cout<<"invalid input. Enter a different number ";
            move2(X,O);
        }
        else
        {
            board[1][0]='O';
            break;
        }
        case 5: 
        if (board[1][1]=='X')
        {
            cout<<"invalid input. Enter a different number ";
            move2(X,O);
        }
        else
        {
            board[1][1]='O';
            break;
        }
        case 6:
        if (board[1][2]=='X')
        {
            cout<<"invalid input. Enter a different number ";
            move2(X,O);
        }
        else
        {
            board[1][2]='O';
            break;
        }
        case 7: 
        if (board[2][0]=='X')
        {
            cout<<"invalid input. Enter a different number ";
            move2(X,O);
        }
        else
        {
            board[2][0]='O';
            break;
        }
        case 8:
        if (board[2][1]=='X')
        {
            cout<<"invalid input. Enter a different number ";
            move2(X,O);
        }
        else
        {
            board[2][1]='O';
            break;
        }
        case 9:
        if (board[2][2]=='X')
        {
            cout<<"invalid input. Enter a different number ";
            move2(X,O);
        }
        else
        {
            board[2][2]='O';
            break;
        }
        default:
        cout<<"INVALID INPUT"<<endl;
        move2(X,O);
    }
}

int check_win()
{
    int m;
    for(m=0;m<3;m++)
    {
        if(board[m][0]==board[m][1] && board[m][0]==board[m][2])
        {
            // cout<<"game over!";
            return 1;
        }
        
        else if(board[0][m]==board[1][m] && board[0][m]==board[2][m])
        {
            // cout<<"game over!";
            return 1;
        }
    }
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2])
    {
        // cout<<"game over!";
        return 1;
    }
    
    if(board[0][2]==board[1][1] && board[1][1]==board[2][0])
    {
        // cout<<"game over!";
        return 1;
    }
    return 0;
}
