#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int num = 0, guess = 0, guesses = 1, limit = 0;

	srand(time(NULL));
	printf("Welcome to NumGuess for C!\n");
	printf("If you like it, buy the Pascal and ASM version too!\n");
	printf("\nUpper limit: ");
	while((scanf("%d", &limit) == 0) && (limit < 10))
	{
		printf("\nAT LEAST 10!\nUpper limit: ");
		fflush(stdin);
	}
	fflush(stdin);
	num = rand() % limit + 1;
	printf("Guess my number between 1 and %d!\n", limit);
	printf("\nGuess: ");
	for(scanf("%d", &guess); num != guess; guesses++)
	{
		if(num < guess) printf("Too high!"); else printf("Too low!");
		printf("\nGuess: ");
		scanf("%d", &guess);
		fflush(stdin);
	}
	printf("\nWell done! It took %d guesses!\n", guesses);

	return 0;
}
