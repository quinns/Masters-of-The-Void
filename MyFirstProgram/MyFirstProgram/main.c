#include	<stdio.h> // Defines printf etc.
#include	<stdbool.h>

int main ()
{

	int		vFirstArg,
			vSecondArg;
	char	vOperation;
	bool	vFinished;
	
	// make sure ouf flag is initialized
	vFinished = false;
	
	// now loop
	
	while (vFinished != true) {
		printf("What operation do you want to do?");
		scanf("%c", &vOperation);
		fpurge(stdin);
		
		if (vOperation == '+') {
			printf("Enter left argument: ");
			scanf("%d", &vFirstArg);
			fpurge(stdin);
			
			printf("Enter right argument: ");
			scanf("%d", &vSecondArg);
			
			fpurge(stdin);
			
			printf("\n%d + %d = %d\n", vFirstArg, vSecondArg, vFirstArg + vSecondArg);
		} else {
			vFinished = true;
		}

		
			printf("Finished.\n");
	}
	
	return 0;
	

}