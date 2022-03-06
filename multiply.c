#include<stdio.h>
int main()
{
int num;
printf("Enter the number you want multiplication table of:\n");
scanf("%d", &num);
printf ("multiplication table of %d is as following:\n",num);
for (int i = 1; i < 11; i++)
{
    printf("%dx%d=%d\n",num,i,num*i);
}
return 0;
}
