#include<stdio.h>  

void main()

{

   int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp;

   float avg_wt,avg_tat;

   printf("Enter number of process:");

   scanf("%d",&n);  

   printf("\nEnter Estimated Time:\n");

   for(i=0;i<n;i++)

   {

       printf("p%d:",i+1);

       scanf("%d",&bt[i]);

       p[i]=i+1;           //contains process number

   }  

   //sorting burst time in ascending order using selection sort

   for(i=0;i<n;i++)
