/*  Coding Rock, Paper, Scissors In C : #51


Problem statement:-
As we all are familiar with the concept of the game. In this game, we have two players. In our program, player 1 will be the user, and player 2 will be the computer. Player 1 selects either rock, paper, or scissor. The computer does not know about what player 1 has selected, so the computer randomly selects any item (rock, paper, or scissor).

In this game, each player has 3 turns. The player who gets the point at least two times will win the game. 
The following are the rules of the game :

rock vs. scissors -> rock wins

paper vs. scissors -> scissors wins

paper vs. rock -> paper wins




Task:-
You have to write a C program that will:

Allows the user to play this game three times with a computer.
Log the scores of the computer and the player.
Display the name of the winner at the end



Note: You have to display the name of the player during the game. Take users name as an input from the user.


*/

// Code as described/written in the Harry's video:-                // video no. 56 for solution 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}
// Create Rock, Paper & Scissors Game
//  Player 1: rock
//  Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end.
// Notes: You have to display name of the player during the game. Take users name as an input from the user.

int main()
{
    printf("The random number between 0 to 5 is %d\n", generateRandomNumber(5));
    return 0;
}
