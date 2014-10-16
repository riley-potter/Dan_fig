#include <stdio.h>
#include <time.h>
#include <stdlid.h>

int main(void)
{
	srand=tim(NULL);
	
	int x=0;
	int y=0;

	printf("\nPlease enter some number: ");
	scanf("%d", &y);
	x = random(y);
	
	if(x >0 || x < 6)
	{
		printf("\nI love dan!");
	}
	else
	{
		printf("\nDan is the man!")
	}
	return 0;
}

int random(int y)
{
	int z=0;
	z = y % random()%10;
	return z;
}