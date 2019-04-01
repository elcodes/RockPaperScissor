//File Name: main.cpp (
//Author: Ellis Sentoso.
//Email Address: ellissentosotech@gmail.com
//Assignment Number: Rock Paper Scissor
//Description: Rock Paper Scissor between 2 Players
//Last Changed: September 17, 2018
#include <iostream>
#include <string>

using namespace std;

int main()
{
    char ans;
    do {
        //declare
        char player_one; // storing a character value to player one
        char player_two; // storing a character value to player two
        char R;          // this character R stands for rock
        char r;          // this character r stands for rock
        char p;          // this character p stands for paper
        char P;          // this character P stands for paper
        char S;          // this character S stands for scissor
        char s;          // this character s stands for scissor

        //input
        cout<<"Player 1: Rock, Paper, or Scissor: (R/P/S)?"<<endl;
        cin>>player_one;
        cout<<"Player 2: Rock, Paper, or Scissor: (R/P/S)?"<<endl;
        cin>>player_two;

        switch (player_one) { //when P1 chooses Rock, it goes either R/S/P of P2's
           case 'R':       // allows R and r as rocks when user input it to P1
           case 'r':
           switch (player_two) {
                case 'R': // allows r and R when user input it to P2
                case 'r':
                    // result when P1 and P2 choose Rock
                    cout<<"Player 1 chose Rock, Player 2 chose Rock.It's a tie ";
                    break;

                case 'P':
                case 'p':
                   // result when P1 chose Rock and P2 chose Paper
                    cout<<"Player 1 chose Rock. Player 2's Paper beats Rock ";
                    break;
                case 'S':
                case 's':
                    // result when P1 chose Rock and P2 chose Scissor
                    cout<<"Player 1 chose Rock.Player 2 chose Scissor.Player 1 wins";
                    break;
                default:
                    cout<<"Invalid";
                break;
           }
           break; // ends the nested switch statements

            case 'P': // Player 1's Paper goes against either R/P/S of P2's
            case 'p':
            switch (player_two) {
                case 'R':
                case 'r':
                    //Result of Player 1's paper and P2's Rock
                    cout<<"Player 1 chose Papar. Player 2's Rock beats Paper ";
                    break;

                case 'P':
                case 'p':
                    // result when P1 chose Paper and P2 chose Paper
                    cout<<"Player 1 and Player 2 chose Paper. It's a tie ";
                    break;
                    // result when P1 chose Paper and P2 chose Scissor
                case 'S':
                case 's':
                    cout<<"Player 1 chose Scissor. Player 2's Paper loses to Scissor ";
                    break;

                default:
                    cout<<"Invalid";
                    break;
            }
           break;
           case 'S': // Player 1's Scissor agaisnt either R/P/S of P2's
           case 's':
               switch (player_two) {
               case 'R':
               case 'r':
                    //Result of Player 1's Scissor and Player 2's Rock
                    cout<<"Player 1 chose Scissor. Player 2's Rock beats Scissor ";
                    break;

               case 'P':
               case 'p':
                   // result of Player 1's Scissor and P2 chose Paper
                  cout<<"Player 1 chose Scissor and beat's Player 2's Paper ";
                   break;

               case 'S':
               case 's':
                   // Result of Player 1's Paper and Player 2's Scissor
                   cout<<"Player 1 and Player 2 chose Scissor.It's a tie ";
                   break;

               default:
                   cout<<"Invalid";
                   break;
           }
          // break;

        }
        cout<<"Would you like to try another round? (Y/N)?"<<endl;
        cin>>ans;
    } while ((ans=='y')||(ans=='Y')); //allows a second loop

    return 0;
}

