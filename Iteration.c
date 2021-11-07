#include<stdio.h>

int main(void)
{
	int type,quantity;
	
	printf("Pizza Type\tPrice of a Pizza\tDiscount\n");
	printf("1\t\tRs. 1000.00\t\t10%\n");
	printf("2\t\tRs. 1600.00\t\t12%\n");
	printf("3\t\tRs. 1400.00\t\t15%\n\n\n");
	
	printf("Please Enter Pizza Type : ");
	scanf("%d",&type);
	
	while (type<4 &&type>0)
	{
		printf("Please Enter the Pizza Quantity ");
	    scanf("%d",&quantity);
	    
	    if (quantity <= 3 & quantity >= 1)
	    {
	        switch (type)
	        {
	    	case 1: printf("Total Price : Rs. %.2f\n\n",(float)1000.00*quantity);break;
	    	case 2: printf("Total Price : Rs. %.2f\n\n",(float)1600.00*quantity);break;
	    	case 3: printf("Total Price : Rs. %.2f\n\n",(float)1400.00*quantity);break;
	    	}
		}
		
		else if(quantity>3)
		{
			switch (type)
	        {
	    	case 1: printf("Total Price : Rs. %.2f\n\n",(float)1000.00*quantity-(float)1000.00*quantity*10/100);break;
	    	case 2: printf("Total Price : Rs. %.2f\n\n",(float)1600.00*quantity-(float)1600.00*quantity*12/100);break;
	    	case 3: printf("Total Price : Rs. %.2f\n\n",(float)1400.00*quantity-(float)1400.00*quantity*15/100);break;
	    	}
		}
		else 
		{
			printf("");
		}
	    
	    printf("Please Enter Pizza Type : ");
    	scanf("%d",&type);
	}
	
}
