#include<bits/stdc++.h>
using namespace std;

int main()
{
    string player_name;
    cout<<"Enter your name :- ";
    cin>>player_name;
    system("cls");

    int rounds;
    cout<<player_name<<" Enter the number of round your want to play ?";
    cin>>rounds;
    
    int player_score=0 , computer_score=0;
    for(int round=0;round<rounds;round++)
    {
        system("cls");
        int player_choice , computer_choice;
        cout<<"Round No:- "<<round<<"/"<<rounds<<endl;
        cout<<player_name<<"'s Score = "<<player_score;
        cout<<"Computer's Score"<<computer_score;
        cout<<"\n1.rock\n 2.paper\n 3.scissor\n";
        do
        {
        cout<<"Select your choice";
        cin>>player_choice;
        }while(player_choice != 1 && player_choice != 2 && player_choice != 3);
        srand(time(0));
        computer_choice=(rand()%3)+1;
        if(player_choice==1 && computer_choice)
        {
            cout<<"player wins"<<endl;
            player_score++;
        }
        else if(player_choice==2 && computer_choice==1)
        {
            cout<<"player wins"<<endl;
            player_score++;
        }
        else if(player_choice==3 && computer_choice==2)
        {
            cout<<"player wins"<<endl;
            player_score++;
        }
        else if(player_choice==computer_choice)
        {
            cout<<"It is Draw"<<endl;
        }

        else
        {
            cout<<"computer wins"<<endl;
            computer_score++;
        }
    }
    if(computer_score == player_score)
    {
        cout<<" Game is Draw"<<endl;
    }
    else if (computer_score < player_score)
    {
        cout<<" Game is won by "<<player_name;
    }
    else  
    {
        cout<<" Computer won the game";
    }
    return 0;


}
