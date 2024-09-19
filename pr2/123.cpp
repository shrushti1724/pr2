#include<stdio.h>
#include<conio.h>#inc

 main()
{
	 char grade;
	 int mark;
	 
	 printf("enter your mark");
	 scanf("%d",&mark);
	 
	 
	 grade=(mark>=90 && mark<=100)?'a'
	      :(mark>=80 && mark<=90)?'b'
	      :(mark>=70 && mark<=80)?'c'
	      :(mark>=40 && mark<=60)?'e'
	      :'F';
	       
	       
	    printf("your grade is %c ",grade);
	    
	    
	    switch (grade)
	    {
	    	case 'a':printf("execellent work !");
	    	break;
	    	case 'b':printf("well done ");
	    	break;	
	    	case 'c':printf("good job ");
	    	break;
	    	case 'd':printf("passed");
	    	break;
	    	case 'e':printf("not better");
	    	break;
	    	case 'f':printf("failed");
	    	break;
		}
		
		 if (grade=='a'||grade=='b'||grade=='c'||grade=='d'||grade=='e')
		 {
		 	printf("congratulation! you are eligible for next level");
		 	
		 }
	     else 
	     {
	     	  printf("pleae try again next time");
	     	  
		 }
	  	
	
	
}
