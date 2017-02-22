/*
 * DISCRIPTION        : This file has calc1 function defined, programmed to generate
 * 						probability of finding all prime no. within a range.
 *
 * RECEIVED PARAMETER : Accepts an integer type value signifying no. of
 * 						test cases for this particular problem.
 *
 * RETURNED VALUE 	  : Returns 1 if no. is lucky else 0, to its calling function i.e. main().
 */
#include"project.h" 											//HEADER FILE INCLUDED
//CAL2 FUNCTION STARTS HERE

void calc1(int test_cases)										//FUNCTION RECIEVES INTEGER
{
	int i,j,k,flag,count,diff;
	if(test_cases!=0)											//CHECK FOR VALIDATION OF INPUT
	{
			for(i=0;i<test_cases;i++)							//LOOP1 FOR test_cases
			{
				 count=0;diff=0;								//UPDATING VALUE OF EACH VARIABLE FOR EVERY NEW TEST CASE
				 if(a[i].n>0&&a[i].m>0)							//CHECK FOR VALIDATION OF INPUT
				 {

						 for(j=(a[i].n);j<=(a[i].m);j++)		//LOOP2 FOR GENERATING NUMBERS WITHIN THE SPECIFIED RANGE
						 {
								flag=0;							//UPDATING FLAG FOR EVERY NO.
								if(j==2)
									flag=1;
								for(k=2;k<j;k++)				//LOOP3 FOR CHECKING IF A NUMBER IS PRIME OR NOT
								{
										if(j%k!=0)
										{
											flag=1;
											continue;			//SKIPPING REST OF CHECKS IF NUMBER SATISFIES CONDITION
										}
										else
										{
											flag=0;
											break;				//BREAKING THE LOOP3 IF NUMBER IS NOT PRIME
										}
								}
								if(flag==1)
									count++;					//INCREMENTING COUNT FOR EACH PRIME NUMBER FOUND
						}
						diff=(a[i].m)-(a[i].n);					//CALCULATING TOTAL NO. OF OUTCOME
						display1(diff,count);					//DISPLAY1 FUNCTION CALLED FOR EVERY TEST CASE
				 }
			}
	}
}
//FUNCTION ENDS HERE

/*AUTHOR 			: SAKSHI TIWARI
 *CODING STANDARD   : C
 */

