/*
 * DISCRIPTION : This file contains main function with menu, calling
 * 				 their respective functions based on input by user
 */
#include"project.h"		//HEADER FILE INCLUDED

//MAIN FUNCTION BEGINS

int main()
{
	
		int choice,test_case,res;
		printf("\tINPUT THE COICE\n");
		do{																   //DO WHILE LOOP STARTS
		        printf("Press 1 to go for PROBABLITY problem and 2 for LUCKY NUMBER\n"); //MENU IS DISPLAYED
				scanf("%d",&choice);									  //DESIRED INPUT IS TAKEN FROM USER
				if(choice==1)
				{
					test_case=input1();									 //INPUT1 FUNCTION IS CALLED AS PER THE CHOICE
					calc1(test_case);									 //CALC1 FUNCTION IS CALLED WITH AN INTEGER VALUE
				}
				else if(choice==2)
				{
					res=input2();										//INPUT2 FUNCTION IS CALLED AS PER THE CHOICE
					calc2(res);											//CAL2 FUNCTION IS CALLED WITH AN INTEGER VALUE
				}
				else													//CHECK FOR THE VALID INPUT FROM USER
					printf("INVALID CHOICE\n");
		}while(choice==3);												//LOOP ENDS HERE
		return 0;
}
//MAIN FUNTION ENDS HERE


/*AUTHOR 			: SAKSHI TIWARI
 *CODING STANDARD   : C
 */

