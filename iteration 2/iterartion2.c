#include<stdio.h>

int main(void)
{
	int itemNumber,quantity;
	float unitPrice,total,total1=0;    //declare variable;
	printf("Item Number\tUnit price\n");
	printf("1\t\t300.25\n");
	printf("2\t\t145.50\n");
	printf("3\t\t525.00\n\n\n");
	
	printf("Please Enter Item Number :");  //raking user inputs until user enter -1 for itemNumber
	scanf("%d",&itemNumber);
	
	while (itemNumber != -1)
	{
		printf("Enter quantity : ");
		scanf("%d",&quantity);
		
		switch (itemNumber)             //calculate the unit price by the input
		{
			case 1 : total=300.25*(float)quantity;
			 break;
			case 2 : total=145.50*(float)quantity;
			 break;
			case 3 : total=525.00*(float)quantity;
			 break;
			default : printf("Inavlid Input \n");
			 break;
		}
		
		total1=total1+total;
		
		printf("\nPlease Enter Item Number : ");
    	scanf("%d",&itemNumber);
		
	}
	
	printf("Total Price to Pay : Rs. %.2f",total1);
	
}
