/*
 * DISCRIPTION : This file is a header file, containing all necessary header files,
 *  			 a structure and declaration of all functions used in code
 */
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

struct test			  		//STRUCTURE DEFINED
{
		int n,m;     		//ENTRIES UNDER STRUCTURE
}a[10000];					//ARRAY "a" OF STRUCT TEST TYPE DECLARED

int input1();	  			//DECLARATION OF INPUT FUNCTION FOR PROBABILITY PROBLEM
void calc1(int);			//DECLARATION OF CALCULATION FUNCTION FOR PROBABILITY PROBLEM
void display1(int,int);		//DECLARATION OF DISPLAY FUNCTION FOR PROBABILITY PROBLEM
int input2();				//DECLARATION OF INPUT FUNCTION FOR LUCKY NO. PROBLEM
void calc2(int);			//DECLARATION OF CALCULATION FUNCTION FOR LUCKY NO. PROBLEM
void display(int);			//DECLARATION OF CALCULATION FUNCTION FOR PROBABILITY PROBLEM


/*AUTHOR 			: SAKSHI TIWARI
 *CODING STANDARD   : C
 */

