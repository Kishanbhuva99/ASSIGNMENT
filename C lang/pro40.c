/* Accept marks from user and check pass or fail  */

#include <stdio.h>

int main(void)
{
    int mark;
	printf("Enter marks (between 0 to 100) : ");
	scanf("%d",&mark);
	if(mark >= 40)
		printf("\nResult is pass");
	else
		printf("\nResult is fail");
	return 0;
}