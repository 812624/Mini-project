/*
 * DISCRIPTION        : This file has display function defined, programmed to undergo
 *                      display based on "lucky no." problem if a no. is lucky
 *
 * RECEIVED PARAMETER : Accepts an integer type value signifying lucky no.
 *
 * RETURNED VALUE 	  : Returns void to its calling function i.e. cal2()
 */
#include"project.h"												//HEADER FILE INCLUDED
//DISPLAY FUNCTION STARTS HERE

void display(lucky_num)											//FUNCTION RECIEVES INTEGER
{

					int j,rem,new_rem,diff=0,maxdiff=0,sop=0;
								rem=lucky_num%10;new_rem=0;		//UPDATING VALUES OF VARIABLE FOR EVERY LIUCKY NO.
								for(j=lucky_num;j>0;j=j/10)		//LOOP TO EXTRACT DIGITS OF NUMBER
								{
										new_rem=j%10;
										diff=rem-new_rem;		//CALCULATING MAXIMUM DIFFERENCE AMONG DIGITS
										if(diff>=maxdiff)
										{
											maxdiff=diff;
										}
										rem=new_rem;
								}
								for(j=lucky_num;j>0;j=j/10)		//LOOP FOR CALCULATING SUM OF DIGITS OF LUCKY NO.
							    {
										rem=j%10;
										sop=sop+rem;
								}
								printf("%d,%d\n",maxdiff,sop);	//DISPLAYING DIFFERENCE AND SUM OF DIGITS

}

//FUNCTION ENDS HERE

/*AUTHOR 			: SAKSHI TIWARI
 *CODING STANDARD   : C
 */

