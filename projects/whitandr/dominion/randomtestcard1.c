#include "dominion.h"

#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>
#include<time.h>



int i,j;
int kingdomCardsValid(int *kingdomCards) {

	for (i = 0; i < 10; i++)
	{
			for (j = 0; j < 10; j++)
			{
					if (j != i && kingdomCards[j] == kingdomCards[i])
					{
							return 0;
					}
			}
	}
return 1;

}


int main() {

	srand(time(NULL));



  int gameCount = 1000;
	int cardCount = 10;
	int choiceCount = 20;
	struct gameState *gamePtr;
	int numPlayers;

	int currentPlayer = 0;
	int gameIdx;
	int cardIdx;
	int choice;
	int handc;
	int handPos;
	int coin_bonus;

	int hand;
	int player = 1;
	int result;
	int cards[10] = {adventurer, council_room, feast, gardens, mine
               , remodel, estate, village, baron, great_hall};

	for (gameIdx=0; gameIdx<gameCount; gameIdx++) {

		printf("Testing Baron Card Game %i\n",gameIdx);
		gamePtr = malloc(sizeof(struct gameState));


		numPlayers = (rand() %(MAX_PLAYERS - 2)) + 2;



while (!kingdomCardsValid(cards)) {

		for (cardIdx = 0; cardIdx <10; cardIdx++) {

			cards[cardIdx] = rand() % 27;

		}

}
		int randomSeed = rand();

		initializeGame(numPlayers,cards,randomSeed,gamePtr);

		for (cardIdx = 0; cardIdx < cardCount; cardIdx++) {
			printf("     Card %i\n",cardIdx);
			choice = rand() % choiceCount;

		//gamePtr->hand[current4Player][MAX_HAND] = estate;

			//cardEffect(baron,1,1,1,gamePtr,0,0);

			struct gameState mygamestate;

			mygamestate.phase = 1;
int test1result =0;
	while(test1result == -1) {
				//
				//
				//
				//

			 test1result = playCard(0,1,1,0, &mygamestate);
			 baronC(1,currentPlayer, &mygamestate);
			 	//test1result = cardEffect(baron,1,0,1, gamePtr, handPos, &coin_bonus);
printf("Test one result is %i", test1result);
			assert(test1result == -1);
		}
}

//Random generation of first four parameters


		free(gamePtr);
	}



}
