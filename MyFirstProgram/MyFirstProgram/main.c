#include	<stdio.h> // Defines printf etc.

int	main() 
{
	int userInput;
	printf("Please enter your age: ");
	scanf("%d", &userInput);
	fpurge(stdin);
	printf("You are %d years old.\n", userInput);
	return 0;
}
