#include<stdio.h>
int main()
    {
    char input;
float kmtomiles =0.621371;
float inchestofoot =0.0833333;
float cmstoinches =0.393701;
float poundtokgs =0.453592;
float inchestometers =0.0254;
float first,second ;
while (1)
{
    printf("Enter the input character. q to quit\n 1. kmsto miles\n 2. inches to foot\n");
    scanf ("%c",& input);
    switch (input)
    {
        case 'q':
    printf  ("Qutting the program...");
    goto end;
    break ;
    case '1':
    printf ("Enter quantity in term of first unit\n");
    scanf("  %f",& first);
    second = first * kmtomiles ;
    printf("%.2f kms is equal to %.2f miles\n",first,second);
    break;
    
        case '2':
    printf ("Enter quantity in term of first unit\n");
    scanf("  %f",& first);
    second = first * inchestofoot;
       printf("%.2f inches is equal to %.2f foot\n\n\n",first,second);
    break;
        case '3':
    printf ("Enter quantity in term of first unit\n");
    scanf("  %f",& first);
    second = first * cmstoinches;
       printf("%.2f cms is equal to %.2f inches\n\n\n",first,second);
    break;
        case '4':
    printf ("Enter quantity in term of first unit\n");
    scanf("  %f",& first);
    second = first * poundtokgs;
       printf("%.2f pounds is equal to %.2f kgs\n\n\n",first,second);
    break;    case '5':
    printf ("Enter quantity in term of first unit\n");
    scanf("  %f",& first);
    second = first * inchestometers;
       printf("%.2f inchs is equal to %.2f meters\n\n\n",first,second);
    break;
    }
    
}
end :
return 0;

}
