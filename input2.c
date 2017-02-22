/*
 * DISCRIPTION    : This file has input2 function defined, programmed to take input for
 *                  lucky no. problem from file, using terms of file handling.
 *
 * RETURNED VALUE : Returns an integer type value to its calling function i.e. main()
 */
#include"project.h"																//HEADER FILE INCLUDED
//INPUT2 FUNCTION STARTS HERE

int input2()																	//FUNCTION RECIEVES NO VALUE i.e. VOID
{
			char filename[ 80 ];												//CHARACTER ARRAY WITH SIZE 80 DECLARED
	        FILE *fp;
		    int test_cases,i,count=0,co=0;
		    char term,c;
			printf( "Please enter a file name from where you want to pick input: " );
		    scanf( "%s", filename );											//USER HAS TO ENTER THE FILENAME FROM WHERE HE WANTS TO READ INPUT
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
		    if( ( fp = fopen( filename, "r" ) ) == NULL ) {						//CHECK WHETHER FILE EXISTS OR NOT
			    fprintf( stderr, "Error- Unable to open %s\n", filename );
		    	exit(0);
		    }
       
			 while ( fscanf(fp,"%d%c",&test_cases,&term) != EOF ) 						//TAKES INPUT FROM FILE
	          {
				 if((term!='\n')||test_cases<0)									//CHECK IFINPUT FROMTHEFILE IS VALID OR NOT
				 	 {
				 	            printf("INVALID ENTRY\n");
				 	            test_cases=0;
				 	            return(test_cases);
				 	 }
	 	          else
				 	  {
				 	            for(i=0;i<test_cases;i++)
				 			          {
				 			        	fscanf(fp,"%d",&a[i].n);			//VALUES FOR EVERY TEST CASE SCANNED
				 		              }
				 	  }
			 }
			fclose(fp);														//FILE IS CLOSED USING POINTER TO ITS CONTENT
			fp = fopen(filename, "r");
			for (c = getc(fp); c != EOF; c = getc(fp))
		 	{
				         if (c == '\n') 									// INCREMENTING COUNT IF CHARACTER IS NEWLINE
				             count = count + 1;
		 	}
			fclose(fp);														//FILE IS CLOSED USING POINTER TO ITS CONTENT
				      if(count== test_cases)
				 			return  (test_cases);
				 	else
				 	    return (count-1);
}
//FUNCTION ENDS HERE

/*AUTHOR 			: SAKSHI TIWARI
 *CODING STANDARD   : C
 */

