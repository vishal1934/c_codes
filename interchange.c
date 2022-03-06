/* Two number are input through the keyboard into two loaction C and D .write a program to interchange the contant
of Cand do*/

#include<stdio.h>
int main() 
{
    
    int C,D;        //declare the integers

    printf("Enter a numbers:");
    scanf("%d %d", &C, &D);
    printf("value before swapping \n");

    //show the value peroid to swapping
    printf("C: %d\n",D);
    printf("D: %d\n",D);

    //swapping value of c and D now 


 C=C+D;
 D =C-D;
 C=C-D;
 // show the value after swipping 
  
  printf ("\n value after swipping\n");
  printf ("C:%d\n",C);
  printf ("D: %d\n",C);


  return 0;


}