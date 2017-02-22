/*
 * DISCRIPTION    : This file has input1 function defined, programmed to take input for
 *                  probability problem from file, using terms of file handling.
 *
 * RETURNED VALUE : Returns an integer type value to its calling function i.e. main()
 */
#include"project.h"													//HEADER FILE INCLUDED
//INPUT1 FUNCTION STARTS HERE

int input1()														//FUNCTION RECIEVES NO VALUE i.e. VOID
{
	
			char filename[ 80 ];									//CHARACTER ARRAY WITH SIZE 80 DECLARED
	        FILE *fp=NULL;												//POINTER TO THE FILE DECLARED
		    int test_cases,i,count=0,co=0;
		    char c,term;
			printf( "Please enter a file name from where you want to take input: " );
		    scanf( "%s", filename );								//USER HAS TO ENTER THE FILENAME FROM WHERE HE WANTS TO READ INPUT
		     fp=fopen(filename, "r");
		    for(c=getc(fp);c!=EOF;c=getc(fp))
		    {
		        co++;
		     }
		     fclose(fp);
		     if(co==0)
		        {
		        printf("FILE IS EMPTY\n");
		        exit(0);
		        }   
		       
		    if( ( fp = fopen( filename, "r" ) ) == NULL ) {
			    fprintf( stderr, "Error- Unable to open %s\n", filename );//CHECK WHETHER FILE EXISTS OR NOT
		    	exit(0);
		    }
		   
			 while ( fscanf(fp,"%d%c",&test_cases,&term ) !=EOF ) 	//TAKES INPUT FROM FILE TILL FP REACHES END OF FILE
	          {
	            
			    if((term!='\n')||test_cases<0)						//CHECK WHETHER THE ENTRY ENTERED IN FILE VALID OR NOT
				 	 {
				 	            printf("INVALID ENTRY\n");
				 	            test_cases=0;
				 	            return (test_cases);
			         }         
	 	         else
	 	          	 {
				 	            for(i=0;i<test_cases;i++)
				    	          {
				 			        	fscanf(fp,"%d%d",&a[i].n,&a[i].m);//VALUES FOR EVERY TEST CASE SCANNED
				 			        	
				    	          }
			          }
	          }
			fclose(fp);														//FILE IS CLOSED USING POINTER TO ITS CONTENT
			fp = fopen(filename, "r");										//SCANNED FILE OPENED IN READ MODE
			for (c = getc(fp); c != EOF; c = getc(fp))
			{
			        if (c == '\n') 											// INCREMENT COUNT IF NEW LINE CHARACTER IS USED
			            count = count + 1;
			}
			fclose(fp);														//FILE IS CLOSED USING POINTER TO ITS CONTENT
			     if(count==test_cases)
						return test_cases;
				else
				    return (count-1);										//NUMBER OF TEST CASES RETURNED TO main()
	}

//FUNCTION ENDS HERE

/*AUTHOR 			: SAKSHI TIWARI
 *CODING STANDARD   : C
 */

