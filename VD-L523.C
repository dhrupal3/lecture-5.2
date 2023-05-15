#include<stdio.h>
#include<conio.h>

main()
{
    int a,b,c,d,e;
    clrscr();
    printf("Enter Value A = ");
    scanf("%d",&a);
    printf("Enter Value B = ");
    scanf("%d",&b);
    printf("Enter Value C = ");
    scanf("%d",&c);
    printf("Enter Value D = ");
    scanf("%d",&d);
    printf("Enter Value E = ");
    scanf("%d",&e);

    if(a<b)
    {
       if(a<c)
       {
	  if(a<d)
	  {
	     if(a<e)
	     {
		printf("A Is Minimum.");
	     }
	     else
	     {
		printf("E Is Minimum.");
	     }
	  }
	  else
	  {
	     printf("D Is Minimum.");
	  }
       }
       else
       {
	  printf("C Is Minimum.");
       }
    }
    else
    {
       if(b<c)
       {
	   if(b<d)
	   {
	      if(b<e)
	      {
		 printf("B Is Minimum.");
	      }
	      else
	      {
		 printf("E Is Minimum.");
	      }
	   }
	   else
	   {
	      if(d<e)
	      {
		 printf("D Is Minimum.");
	      }
	      else
	      {
		 printf("E Is Minimum.");
	      }
	   }
       }
       else
       {
	   if(c<d)
	   {
	      printf("C Is Minimum.");
	   }
	   else
	   {
	      printf("D Is Minimum.");
	   }
       }
    }
    getch();
}



