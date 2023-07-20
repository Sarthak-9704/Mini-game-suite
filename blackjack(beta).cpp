#include<iostream>
#include <cstdlib>
#include<string>
#include<blackjack(beta).h>
using namespace std;

int main()
{
    bj_fun();
}

void bj_fun()
{
    cout<<"Welcome to BlackJack - Beta"<<endl;
    rules();
    
    cout<<"The dealer has drawn ";
    pick_rand();
    
    cout<<"The dealer has drawn ";
    pick_rand();

    int dealer_sum;
    dealer_sum=num;
    num=0;
   int player_sum;
    cout<<"You have Drawn ";
    pick_rand();
    cout<<"You have drawn ";
    pick_rand();

    int count;
    int con;
    for (count=0;count<11;++count)
    {
        cout<<"do you wish to draw another card? \nPress 1 for YES and any other number for NO ";
        cin>>con;
        if (con==1)
    {
        cout<<"You have drawn ";
        pick_rand();
    }
        else 
        break;
    }
    
    cout<<num<<endl;
    player_sum=num;
    if (player_sum>dealer_sum && player_sum<=21)
    {
        cout<<"\nyou win";
    }
    else 
        cout<<"\nYou lose";
}
void rules()
{
    cout<<"The rules of the game are: "<<endl;
    cout<<"the player and the dealer will be dealt two cards each. The player can then proceed to open more cards if they want to get to a total closer to 21 and more than that of the dealer. \nIf the sum of the cards with the player crosses 21, the player loses. \nIf the sum of the cards the player has is less than that of the dealer, the player loses. \nIf the sums of cards with the dealer and the player are equal, it is a tie.\nTo win, the sum of the cards must be greater than that of the dealer but less than 21";
    cout<<endl;
}
   

void pick_rand()
{
    int rank = (rand() % 13) + 1;
    int suit = (rand() % 4) + 1;
   
    switch (rank)
   { case 1:
        switch (suit)
        {
        case 1:
            cout<<"Ace of Spades";
            break;
        case 2:
            cout<<"Ace of Clubs";
            break;
        case 3:
            cout<<"Ace of Diamonds";
            break;
        case 4:
            cout<<"Ace of Hearts";
            break;
        }
        num=num+1;
         deck[suit][rank]=NULL;
        break;

    case 2:
        switch (suit)
        {
        case 1:
            cout<<rank<<" of Spades";
            break;
        case 2:
            cout<<rank<<" of Clubs";
            break;
        case 3:
            cout<<rank<<" of Diamonds";
            break;
        case 4:
            cout<<rank<<" of Hearts";
            break;
        }
        num=num+rank;
         deck[suit][rank]=NULL;
        break;

    case 3:
        switch (suit)
        {
        case 1:
            cout<<rank<<" of Spades";
            break;
        case 2:
            cout<<rank<<" of Clubs";
            break;
        case 3:
            cout<<rank<<" of Diamonds";
            break;
        case 4:
            cout<<rank<<" of Hearts";
            break;
        }
        num=num+rank;
         deck[suit][rank]=NULL;
        break;
    case 4:
        switch (suit)
        {
        case 1:
            cout<<rank<<" of Spades";
            break;
        case 2:
            cout<<rank<<" of Clubs";
            break;
        case 3:
            cout<<rank<<" of Diamonds";
            break;
        case 4:
            cout<<rank<<" of Hearts";
            break;
        }
        num=num+rank;
         deck[suit][rank]=NULL;
        break;
    case 5:
        switch (suit)
        {
        case 1:
            cout<<rank<<" of Spades";
            break;
        case 2:
            cout<<rank<<" of Clubs";
            break;
        case 3:
            cout<<rank<<" of Diamonds";
            break;
        case 4:
            cout<<rank<<" of Hearts";
            break;
        }
        num=num+rank;
         deck[suit][rank]=NULL;
        break;

    case 6:
        switch (suit)
        {
        case 1:
            cout<<rank<<" of Spades";
            break;
        case 2:
            cout<<rank<<" of Clubs";
            break;
        case 3:
            cout<<rank<<" of Diamonds";
            break;
        case 4:
            cout<<rank<<" of Hearts";
            break;
        }
        num=num+rank;
         deck[suit][rank]=NULL;
        break;

    case 7:
        switch (suit)
        {
        case 1:
            cout<<rank<<" of Spades";
            break;
        case 2:
            cout<<rank<<" of Clubs";
            break;
        case 3:
            cout<<rank<<" of Diamonds";
            break;
        case 4:
            cout<<rank<<" of Hearts";
            break;
        }
        num=num+rank;
         deck[suit][rank]=NULL;
        break;

    case 8:
        switch (suit)
        {
        case 1:
            cout<<rank<<" of Spades";
            break;
        case 2:
            cout<<rank<<" of Clubs";
            break;
        case 3:
            cout<<rank<<" of Diamonds";
            break;
        case 4:
            cout<<rank<<" of Hearts";
            break;
        }
        num=num+rank;
         deck[suit][rank]=NULL;
        break;
    case 9:
        switch (suit)
        {
        case 1:
            cout<<rank<<" of Spades";
            break;
        case 2:
            cout<<rank<<" of Clubs";
            break;
        case 3:
            cout<<rank<<" of Diamonds";
            break;
        case 4:
            cout<<rank<<" of Hearts";
            break;
        }
        num=num+rank;
         deck[suit][rank]=NULL;
        break;
    case 10:
        switch (suit)
        {
        case 1:
            cout<<rank<<" of Spades";
            break;
        case 2:
            cout<<rank<<" of Clubs";
            break;
        case 3:
            cout<<rank<<" of Diamonds";
            break;
        case 4:
            cout<<rank<<" of Hearts";
            break;
        }
        num=num+rank;
         deck[suit][rank]=NULL;
        break;
    case 11:
        switch (suit)
        {
        case 1:
            cout<<"Jack of Spades";
            break;
        case 2:
            cout<<"Jack of Clubs";
            break;
        case 3:
            cout<<"Jack of Diamonds";
            break;
        case 4:
            cout<<"Jack of Hearts";
            break;
        }
        num=num+10;
         deck[suit][rank]=NULL;
        break;
    case 12:
        switch (suit)
        {
        case 1:
            cout<<"Queen of Spades";
            break;
        case 2:
            cout<<"Queen of Clubs";
            break;
        case 3:
            cout<<"Queen of Diamonds";
            break;
        case 4:
            cout<<"Queen of Hearts";
            break;
        }
        num=num+10;
         deck[suit][rank]=NULL;
        break;
    case 13:
        switch (suit)
        {
        case 1:
            cout<<"King of Spades";
            break;
        case 2:
            cout<<"King of Clubs";
            break;
        case 3:
            cout<<"King of Diamonds";
            break;
        case 4:
            cout<<"King of Hearts";
            break;
        }
        num=num+10;
        deck[suit][rank]=NULL;
        break;
   }
   cout<<endl;
   
}