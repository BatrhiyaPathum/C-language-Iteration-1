#include<stdio.h>

int main(void)
{
	int noOfplayers=0,playerNo=0,count=1,count2=1,score,maxPlayerno,maxScore=0,totalScore=0;
	
	printf("Enter number of players : ");
	scanf("%d",&noOfplayers);
	
	for(count=1;count<=noOfplayers;++count)
	{
		totalScore=0;
		
		printf("\nInput player number : ");
		scanf("%d",&playerNo);
		
		for(count2=1;count2<=3;++count2)
		{
			printf("Input score %d :",count2);
			scanf("%d",&score);
			
			totalScore += score;
		}
		
		printf("\nTotal Score : %d\n\n",totalScore);
		
		if(maxScore < totalScore)
		{
			maxScore=totalScore;
			maxPlayerno=playerNo;
		}
		
		printf("\n");
	}
	
	printf("The Player who got the maximum score of %d is Player No.%d\n",maxScore,maxPlayerno);
}
