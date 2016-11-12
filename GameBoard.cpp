//
//  GameBoard.cpp
//

#include "GameBoard.hpp"

// Build the gameboard
// If the landing square is a chute, set the position to the corresponding lower square
// I.e., player slides down to the lower square
// If the landing square is a ladder, set the position to the corresponding higher square
// Player climbs up to the higher square
// Otherwise, player stays put at the landing square
// TO DO: implement this method
void GameBoard::buildBoard() {
   // TODO: implement this function properly
   //throw std::logic_error("not implemented yet");
   for (int i = 0; i < 101; i++)
   {
	   gameSquares.insert(i, 0);
	   switch (i)
	   {
	   case Ladders::ONE:
		   laddersSquares.insert(Ladders::ONE, 38);
		   break;
	   case Ladders::FOUR:
		   laddersSquares.insert(i, 14);
		   break;
	   case Ladders::NINE:
		   laddersSquares.insert(Ladders::NINE, 31);
		   break;
	   case Ladders::TWENTY_ONE:
		   laddersSquares.insert(Ladders::TWENTY_ONE, 42);
		   break;
	   case Ladders::TWENTY_EIGHT:
		   laddersSquares.insert(Ladders::TWENTY_EIGHT, 84);
		   break;
	   case Ladders::THIRTY_SIX:
		   laddersSquares.insert(Ladders::THIRTY_SIX, 44);
		   break;
	   case Ladders::FIFTY_ONE:
		   laddersSquares.insert(Ladders::FIFTY_ONE, 67);
		   break;
	   case Ladders::SEVENTY_ONE:
		   laddersSquares.insert(Ladders::SEVENTY_ONE, 91);
		   break;
	   case Ladders::EIGHTY:
		   laddersSquares.insert(Ladders::EIGHTY, 100);
		   break;
	   case Chutes::SIXTEEN:
		   chutesSquares.insert(Chutes::SIXTEEN, 6);
		   break;
	   case Chutes::FORTY_SEVEN:
		   chutesSquares.insert(Chutes::FORTY_SEVEN, 26);
		   break;
	   case Chutes::FORTY_NINE:
		   chutesSquares.insert(Chutes::FORTY_NINE, 11);
		   break;
	   case Chutes::FIFTY_SIX:
		   chutesSquares.insert(Chutes::FIFTY_SIX, 53);
		   break;
	   case Chutes::SIXTY_TWO:
		   chutesSquares.insert(Chutes::SIXTY_TWO, 19);
		   break;
	   case Chutes::SIXTY_FOUR:
		   chutesSquares.insert(Chutes::SIXTY_FOUR, 60);
		   break;
	   case  Chutes::EIGHTY_SEVEN:
		   chutesSquares.insert(Chutes::EIGHTY_SEVEN, 24);
		   break;
	   case Chutes::NINETY_THREE:
		   chutesSquares.insert(Chutes::NINETY_THREE, 73);
		   break;
	   case Chutes::NINETY_FIVE:
		   chutesSquares.insert(Chutes::NINETY_FIVE, 75);
		   break;
	   case Chutes::NINETY_EIGHT:
		   chutesSquares.insert(Chutes::NINETY_EIGHT, 78);
		   break;
	   
	   default:
		   laddersSquares.insert(i, 0);
	   }
   }
}