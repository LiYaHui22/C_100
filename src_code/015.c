#include "stdio.h"

void main()
{
	int score;

	printf("Please input the score: ");
	scanf("%d", &score);

	if (score < 60) {
	    printf("The score is: C\n");
	}
	else if (score >= 90) {
	    printf("The score is: A\n");
	} else {
	    printf("The score is: B\n");
	}
}