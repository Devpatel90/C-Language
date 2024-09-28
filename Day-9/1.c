#include<stdio.h>
void main()
{
	int lan,ser;

	printf("Choose Your Language:- ");
	scanf("%d",&lan);



	switch(lan)
	{
	case 1:
			printf("You Have Selected English..\n");
			printf("Choose Your Service..");
				scanf("%d",&ser);
			switch(ser)
			{
			case 1:
			printf("You Have Choosed For Prepaid Recharge");
			break;
			case 2:
			printf("You Have Choosed For Postpaid Recharge");
			break;
			case 3:
			printf("You Have Choosed For DHL Recharge");
			break;
			}
			break;
			
	case 2:
			printf("You Have Selected Gujarati..\n");
			printf("Choose Your Service..");
				scanf("%d",&ser);
			switch(ser)
			{
			case 1:
			printf("You Have Choosed For Prepaid Recharge");
			break;
			case 2:
			printf("You Have Choosed For Postpaid Recharge");
			break;
			case 3:
			printf("You Have Choosed For DHL Recharge");
			break;
			}
			break;
	case 3:
			printf("You Have Selected Hindi..\n");
			printf("Choose Your Service..");
				scanf("%d",&ser);
			switch(ser)
			{
			case 1:
			printf("You Have Choosed For Prepaid Recharge");
			break;
			case 2:
			printf("You Have Choosed For Postpaid Recharge");
			break;
			case 3:
			printf("You Have Choosed For DHL Recharge");
			break;
			}
			break;
	}
}