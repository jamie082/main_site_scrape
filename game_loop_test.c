// game_loop_test.c

#include <stdio.h>

int main()
{
	// Repeat block of three printf to console three times then break
	
	for (int tries = 1; tries < 3; tries++)
	{
		printf("Start Game: \n");
		printf("Game Loop program");
		printf("\n");

		if (tries == 3)
		{
			break;
		}
		tries++;
	}

	return 0;
}
