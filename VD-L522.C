#include<stdio.h>
#include<conio.h>

main()
{
    int a,b,c,d;
    clrscr();
    printf("Enter Value A = ");
    scanf("%d",&a);
    printf("Enter Value B = ");
    scanf("%d",&b);
    printf("Enter Value C = ");
    scanf("%d",&c);
    printf("Enter Value D = ");
    scanf("%d",&d);

    if(a>b)
    {
       if(a>c)
       {
	  if(a>d)
	  {
	     printf("A Is Max.");
	  }
	  else
	  {
	     printf("D Is Max.");
	  }
       }
       else
       {
	  printf("C Is Max.");
       }
    }
    else
    {
       if(b>c)
       {
	   if(b>d)
	   {
	      printf("B Is Max.");
	   }
	   else
	   {
	      printf("D Is Max.");
	   }
       }
       else
       {
	   if(c>d)
	   {
	      printf("C Is Max.");
	   }
	   else
	   {
	      printf("D Is Max.");
	   }
       }
    }
    getch();
}



