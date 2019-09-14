
#include <stdio.h>
#include <stdlib.h>

main()

{
    //char junk, cmd,  junk1;
    int n; //newval, oldval;
    int r,z,oldval1;
    double a;
    char junk;
    int value;
    //int nVals, fact =1 ,c, x, base = 2,i;
//    long long result = 1;
    double bracket, b, c;
    double absolute;
    double  maxerror;
    maxerror = 0.000001;

   double xofkplus1 = 1; //newvalue
   double xofk, xofk1;
  // r = xofk1;

    double  i, power;
     //newvalue
//do
//{
  printf(" enter 2 numbers");
   scanf("%lf %d", &a, &n);
    value = scanf("%lf %d", &a, &n);


if (value != 2)
        {
		printf("Incorrectly formatted input \n");

		}/*do
		{
			scanf("%c", &junk);
		}
    while (junk != '\n');

        }
*/
    else if (n<0)

   {
       printf(" Negative integer entered \n");

   }

   else if (a<0)

   {
       printf(" Negative number entered \n");

   }

else
{
  z = 1;

   do
   {
       xofk = xofkplus1;

       // xofk1 = xofk;


        //Reading base & exponent
   // printf("Enter base: ");
    //scanf("%d",&base);

    //printf("Enter exponent: ");
    //scanf("%d", &exponent);
    power = 1;

    //caculatinh power of given number using for loop
    for(i=1; i<= n-1; i++)
       {
        power = power * xofk;
       }


   // printf("Power : %d", power);
   // return 0;


   /*   do
    {
      oldval1 = xofk1; // xofk1 will be the base number
      xofk1 = oldval1*r; // r should be equal to the base value
        z++;
    }
        while ( z != n-1);

    printf("newval: %f ", xofk1);*/

    b = (n- 1)* (xofk);
    c = a / power ;
    bracket = b + c ;
    xofkplus1 = bracket/n;
    absolute = xofkplus1 - xofk;

   if(absolute<0)
    {
  absolute= (-1)*absolute;

      }

   }
while (absolute > maxerror);

//printf("absolute value: %f", absolute);
printf("Given A = %0.2f and n = %d, Root: %0.2f", a, n, xofkplus1);
//printf("xofk1: %f", xofk1);
}
}
//while ((value != 2 || n<0 || a<0));


