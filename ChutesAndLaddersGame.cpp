//
//  ChutesAndLaddersGame.cpp
//

#include <iostream>
#include <string>

#include "ChutesAndLaddersGame.hpp"
#include "GameBoard.hpp"
#include "Player.hpp"

using namespace std;

// TODO: implement the constructor with all your team members
// constructor with the default value of a minimum players
ChutesAndLaddersGame::ChutesAndLaddersGame(int nPlayers) : winner("no winner") {
   // TODO: implement this function properly
   //throw std::logic_error("not implemented yet");
	string playerName[] = { "Paul", "Emily" };
	playerList = ArrayQueue<Player>(nPlayers);
	numPlayers = nPlayers;
	Player p1;
	for (int i = 0; i < nPlayers; i++)
	{
		if (i <= 1)
			p1 = Player(playerName[i]);
		else
			p1 = Player("Player" + to_string(i));
		playerList.enqueue(p1);
	}
	winner = "";
}

// TODO: implement the destructor
// destructor - dequeue players from the queue
ChutesAndLaddersGame::~ChutesAndLaddersGame() {
   // TODO: implement this function properly
   //throw std::logic_error("not implemented yet");
	for (int i = 0; i < numPlayers; i++)
	{
		playerList.dequeue();
	}
}

// TO DO: implement this function properly
// reset the game - rebuild the list of players
//        (i.e., the list should be the same as in the constructor).
//        Place all players at the figurative square zero
void ChutesAndLaddersGame::resetGame() {
   // TODO: implement this function properly
   //throw std::logic_error("not implemented yet");
	string playerName[] = { "Paul", "Emily" };
	playerList = ArrayQueue<Player>(numPlayers);
	Player p1;
	for (int i = 0; i < numPlayers; i++)
	{
		if (i <= 1)
			p1 = Player(playerName[i]);
		else
			p1 = Player("Player" + to_string(i));
		playerList.enqueue(p1);
	}
}

// TO DO: implement this function properly
// Play the chutes and ladders until a player reaches the winning square 100
//    - Each player takes turn to roll the die and moves to the new square by invoking rollDieAndMove.
//         If the new square is outside of the board, the player stays put
//    - Player's new position is checked against the game board's checkChutesLadders
//    - checkChutesLadders returns a different square if player lands on a chute or a ladder
//    - Player's position is then set to the new position as indicated by checkChutesLadders
//          If player lands on a chute or a ladder, player slides down or climbs up
//    - If player lands on the winning square 100, game is over
//    - playGame returns after congratulating and printing the winner's name
void ChutesAndLaddersGame::playGame() {
   // TODO: implement this function properly
   //throw std::logic_error("not implemented yet");
	winner = "";
	while (winner == "")
	{
		if (playerList.empty())
			break;
		Player p1 = playerList.front();
		p1.rollDieAndMove();
		int tmpPos = gameBoard.checkChutesLadders(p1.getPostion());
		if (p1.getPostion() != tmpPos)
			p1.setPostion(tmpPos);
		if (p1.getPostion() == 100)
		{
			winner = p1.getName();
			cout << "Congratulations " << winner << endl;
		}
		playerList.dequeue();
		playerList.enqueue(p1);
	}   
}
