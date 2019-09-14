
#include <stdio.h>
#include <stdlib.h>

main()
{
    char junk, cmd, n, junk1;
    int newval, oldval;
    int nVals, fact =1,c, x, base = 2,i;
    long long result = 1;
    float bracket,b, c;

    do
        {
	printf("Enter command and integer: ");
	nVals = scanf("%c %d", &cmd, &n);

        {

	// Otherwise, print error & clear line
	if (nVals != 2)
        {
		printf("Incorrectly formatted input \n");
		do
		{
			scanf("%c", &junk);
		}
    while (junk != '\n');
	}

    else if (n<0)

   {
       printf(" Negative integer entered \n");

   }

    else
    {

printf("good");
for (c = 1; c <= n; c++)
    fact = fact * c;
printf("Factorial of %d = %d\n", n, fact);

}


{


{

   while (n != 0)
    {
        result *= base;
        --n;
    }
}


}

}
        }
        while ((nVals != 2 || n<0));
        }
/*
        while(1)



/* for (c = 1; c <= n; c++)
    fact = fact * c;

  printf("Factorial of %d = %d\n", n, fact);


printf("Enter  and integer: ");
	 scanf(" A: %d N: %d", &a, &n);
	 */
// loop for 2^n
maxerror == 0.000001;


     i =1;
	 newval = 2;

	     do
         {
         oldval = newval;
         newval = oldval*2;

         i++;
         }

        while ( i != n);


    printf("newval: %d ", newval);

         }




// main equation loop

xofnplus1 = 1; //newvalue

   do
   {
       xofk= xofkplus1;
       xofk1 = xofk;
       z =1;
       do
    {
      oldval1 = xofk1;
      xofk1 = oldval1*2;
        z++;
    }
        while ( z != n-1);

        printf("newval: %d ", xofk1);

    b = (n-1)*(xofk);
    c = a/ xofk1;

    bracket = b + c ;
    xofnplus1 = (1/n) *(bracket);
    absolute = xofkplus1 - xofk;

   if(absolute<0)
    {
  absolute=(-1)*absolute;

      }

   }
while (absolute <= maxerror)







/*int n;
float real;
printf(" enter a real number and a integer");
scanf(" %f \t %d ", &real, &n);*/

{

}








