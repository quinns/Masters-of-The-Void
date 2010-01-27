#include	<stdio.h> // Defines printf etc.
#include	<stdbool.h>


int getArgument(bool isLeft){
	int vNum;
	if (isLeft) {
		printf("Enter left argument: ");
	} else
		printf("Enter right argument: ");
	scanf("%d", &vNum);
	fpurge(stdin);
	return vNum;

	}

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
			vFirstArg = getArgument(true);
			
			vSecondArg = getArgument(false);
			
			printf("\n%d + %d = %d\n", vFirstArg, vSecondArg, vFirstArg + vSecondArg);
		} else if (vOperation == '-') {
			vFirstArg = getArgument(true);
			vSecondArg = getArgument(false);
			printf("\n%d - %d = %d\n", vFirstArg, vSecondArg, vFirstArg - vSecondArg);
		}{
			vFinished = true;
		}

		
			printf("Finished.\n");
	}
	
	return 0;
	

}