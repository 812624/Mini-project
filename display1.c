/* DISCRIPTION        : This file has display function defined, programmed to undergo
 *                      display based on probability problem
 *
 * RECEIVED PARAMETER : Accepts an integer type value signifying lucky no.
 *
 * RETURNED VALUE 	  : Returns void to its calling function i.e. cal2()
 */
#include"project.h"												//HEADER FILE INCLUDED
//DISPLAY FUNCTION STARTS HERE

void display1(int diff,int count)								//FUNCTION RECIEVES INTEGER
{
	 	 float prob;
	 	 prob=(float)count/(diff+1);							//CALCULATING PROBABILTY AND FURTHER TYPECASTING IT
	 	 printf("%.6f\n",prob);									//DISPLAYING CALCULATED VALUE
}
//FUNCTION ENDS HERE

/*AUTHOR 			: SAKSHI TIWARI
 *CODING STANDARD   : C
 */

