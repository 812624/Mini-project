/*
 * DISCRIPTION        : This file has cal2 function defined, programmed to generate
 * 						condition for checking if a no. being lucky or not.
 * RECEIVED PARAMETER : Accepts an integer type value signifying no. of
 * 						test cases for this particular problem.
 *
 * RETURNED VALUE 	  : Returns 1 if no. is lucky and 0 if not, to its calling function i.e. main()
 */
#include"project.h"													//HEADER FILE INCLUDED
//CAL2 FUNCTION STARTS HERE

void calc2(int test_cases)											//FUNCTION RECIEVES INTEGER
{
	int j,i,rem,new_rem,flag;
	if(test_cases>0)												//CHECK FOR VALIDATION OF INPUT
	{
			for(i=0;i<test_cases;i++)								//LOOP1 FOR test_cases
			{
				rem=a[i].n%10;flag=0;								//UPDATING VALUE OF EACH VARIABLE FOR EVERY NEW TEST CASE
				if(a[i].n>0)										//CHECK FOR VALIDATION OF INPUT
				{
					for(j=a[i].n;j>0;j=j/10)						//LOOP2 FOR CHECKING LUCKY NO. CONDITION
					{
						new_rem=j%10;								//BREAKING NO. TO ITS SIGNIFICANT DIGITS
						if(new_rem<=rem)
						{
							rem=new_rem;
							flag=1;									//UPDATING FLAG IF DESIRED CONDITION IS ACHEIVED
							continue;								//SKIPPING REST OF THE TERMS IN LOOP2
						}
						else
						{
							flag=0;									//UPDATING FLAG IF DESIRED CONDITION IS NOT ACHEIVED
							break;									//BREAKING LOOP2 IF DESIRED CONDITION IS NOT ACHEIVED
						}
					}
		//LOOP2 ENDS HERE

					if(flag==1)										//CHECKING IF DESIRED CONDITION IS ACHEIVED
					{
							display(a[i].n);						//CALLING DISPLAY FUNCTION
					}
					else											//IF NUMBER IS NOT LUCKY
								printf("NA\n");
			}
		}
	}
}
//FUNCTION ENDS HERE

/*AUTHOR 			: SAKSHI TIWARI
 *CODING STANDARD   : C
 */

