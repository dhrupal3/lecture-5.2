
#include<stdio.h>
#include<conio.h>

main()
{
   int a,b,c;
   clrscr();
   printf("Enter Value A = ");
   scanf("%d",&a);
   printf("Enter Value B = ");
   scanf("%d",&b);
   printf("Enter Value C = ");
   scanf("%d",&c);

   if(a<b)
   {
       if(a<c)
       {
	  printf("A Is Minmum");
       }
       else
       {
	  printf("C Is Minmum");
       }
   }
   else
   {
       if(b<c)
       {
	  printf("B Is Minmum");
       }
       else
       {
	  printf("C Is Minmum");
       }
   }
   getch();
}