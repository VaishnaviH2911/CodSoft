#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;

/*--------------------------------------------------------------------------------------------------------------*/
void EasyLevel(int secretNumber)
{
    int iCnt=0;
    int choicesLeft=10;
    int playerPrediction=0;

    cout<<"You have 10 chances for guessing the number between 1 to 100"<<"\n\n";

    for(iCnt=1;iCnt<=10;iCnt++)
    {
        cout<<"Enter the number:"<<"\n";
        cin>>playerPrediction;

        if(playerPrediction==secretNumber)
        {
            cout<<"\nCongratulations!! You won !! Your guessed number "<<playerPrediction<<" matches the secret number!!"<<"\n";
            cout<<"Thanks for playing the game!!!"<<"\n";
            cout<<"Play Againn!!"<<"\n\n";
            break;
        }
        else
        {
            cout<<"\nWrong!! "<<playerPrediction<<" is not the right number!!"<<"\n";

            if(playerPrediction>secretNumber)
            {
                cout<<"The secret number is smaller than you guessed!!"<<"\n";
            }
            else
            {
                cout<<"The secret number is bigger than you guessed!!"<<"\n";

            }
        
            choicesLeft--;

            cout<<"Choices left are:"<<choicesLeft<<"\n\n";

            if(choicesLeft==0)
            {
                cout<<"You loss the Game!!"<<"\n";
                cout<<"Secret number is:"<<secretNumber<<"\n";
                cout<<"Better Luck next Time!!!"<<"\n";
                cout<<"Play again to win!!!"<<"\n";
            }
        }
    }
}
/*--------------------------------------------------------------------------------------------------------------*/

void MediumLevel(int secretNumber)
{
    int iCnt=0;
    int choicesLeft=7;
    int playerPrediction=0;

    cout<<"You have 7 chances for guessing the number between 1 to 100"<<"\n\n";

    for(iCnt=1;iCnt<=7;iCnt++)
    {
        cout<<"Enter the number:"<<"\n";
        cin>>playerPrediction;

        if(playerPrediction==secretNumber)
        {
            cout<<"\nCongratulations!! You won !! Your guessed number "<<playerPrediction<<" matches the secret number!!"<<"\n";
            cout<<"Thanks for playing the game!!!"<<"\n";
            cout<<"Play Againn!!"<<"\n\n";
            break;
        }
        else
        {
            cout<<"\nWrong!! "<<playerPrediction<<" is not the right number!!"<<"\n";

            if(playerPrediction>secretNumber)
            {
                cout<<"The secret number is smaller than you guessed!!"<<"\n";
            }
            else
            {
                cout<<"The secret number is bigger than you guessed!!"<<"\n";

            }
        
            choicesLeft--;

            cout<<"choices left are:"<<choicesLeft<<"\n\n";

            if(choicesLeft==0)
            {
                cout<<"You loss the Game!!"<<"\n";
                cout<<"Secret number is:"<<secretNumber<<"\n";
                cout<<"Better Luck next Time!!!"<<"\n";
                cout<<"Play again to win!!!"<<"\n";
            }
        }
    }
}
/*--------------------------------------------------------------------------------------------------------------*/

void HardLevel(int secretNumber)
{
    int iCnt=0;
    int choicesLeft=5;
    int playerPrediction=0;

    cout<<"You have 5 chances for guessing the number between 1 to 100"<<"\n\n";

    for(iCnt=1;iCnt<=5;iCnt++)
    {
        cout<<"Enter the number:"<<"\n";
        cin>>playerPrediction;

        if(playerPrediction==secretNumber)
        {
            cout<<"\nCongratulations!! You won !! Your guessed number "<<playerPrediction<<" matches the secret number!!"<<"\n";
            cout<<"Thanks for playing the game!!!"<<"\n";
            cout<<"Play Againn!!"<<"\n\n";
            break;
        }
        else
        {
            cout<<"\nWrong!! "<<playerPrediction<<" is not the right number!!"<<"\n";

            if(playerPrediction>secretNumber)
            {
                cout<<"The secret number is smaller than you guessed!!"<<"\n";
            }
            else
            {
                cout<<"The secret number is bigger than you guessed!!"<<"\n";

            }
        
            choicesLeft--;

            cout<<"choices left are:"<<choicesLeft<<"\n\n";

            if(choicesLeft==0)
            {
                cout<<"You loss the Game!!"<<"\n";
                cout<<"Secret number is:"<<secretNumber<<"\n";
                cout<<"Better Luck next Time!!!"<<"\n";
                cout<<"Play again to win!!!"<<"\n";
            }
        }
    }
}
/*--------------------------------------------------------------------------------------------------------------*/

int main()
{
    int difficultyLevelChoice=0;
    int secretNumber=0;

    cout<<"\n\n";
    cout<<"--------------------WELCOME TO NUMBER GUESSING GAME--------------------"<<"\n\n";
    cout<<"You have to guess the number in range 1 to 100."<<"\n";
    cout<<"You have to select the level and depending on that you have limited chances."<<"\n\n";

    do
    {
        cout<<"Enter the level:"<<"\n";
        cout<<"1 for EASY!!"<<"\n";
        cout<<"2 for MEDIUM!!"<<"\n";
        cout<<"3 for HARD!!"<<"\n";
        cout<<"0 for ending the game!!"<<"\n\n";

        cout<<"Enter the difficulty level:"<<"\n";
        cin>>difficultyLevelChoice;

        srand(time(0));
        secretNumber=1+(rand()%100);
        

        switch (difficultyLevelChoice)
        {
            case 0:
                exit(0);
            case 1:
                EasyLevel(secretNumber);
                break;
            case 2:
                MediumLevel(secretNumber);
                break;
            case 3:
                HardLevel(secretNumber);
                break;
            default:
                cout<<"Wrong choice,please enter valid choice(0,1,2,3)"<<"\n";
                break;
        }
    }while(true);

    return 0;
}