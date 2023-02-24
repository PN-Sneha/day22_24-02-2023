#include<stdio.h>
#include<math.h> 
main()
{
int num;
printf("\nEnter the number :");
scanf("%d",&num);
int i,count = 0;
printf("\nThe factors of %d are : ",num);
for(i = 1;i <= num; i++)
{
if(num % i ==0)
{
++count;
printf("%d ",i);
}
}
printf("\n\nTotal factors of %d : %d\n",num,count);
return 0;

}
