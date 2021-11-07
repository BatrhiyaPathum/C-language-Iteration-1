#include<stdio.h>

int main(void)
{
	int type,quantity;
	float total,totalPrice=0;
	
	printf("Burger Type\tExtra Charge per Burger\n");
	printf("1\t\tNo extra Charge\n");
	printf("2\t\tRs. 50.00\n");
	printf("3\t\tRs. 100.00\n\n");
	
	printf("Enter Burger Type : ");
	scanf("%d",&type);
	
	while(type>=1 && type<=3)
	{
		printf("Enter Quantity : ");
		scanf("%d",&quantity);
		
		switch(type)
		{
			case 1: total=500.00*(float)quantity;
			break;
			
			case 2: total=(500.00+50.00)*(float)quantity;
			break;
			
			case 3: total=(500.00+100.00)*(float)quantity;
			break;
			
			default : printf("Invalid Input");
		}
		
		
		printf("\nTotal Price : Rs. %.2f",total);
		printf("\n\n\nEnter Burger Type : ");
    	scanf("%d",&type);
    	
    	totalPrice=totalPrice+total;
	}
	
	printf("\n\n\nAll Total amnount : Rs. %.2f",totalPrice);
	
	
	return 0;
}
