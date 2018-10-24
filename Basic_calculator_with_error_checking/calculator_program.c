	# define _CRT_SECURE_NO_WARNINGS
	# include <stdio.h>
	

	void main()
	{
		int precision, x;
		double num1,num2, multiply , division, addition, subtraction;
		char z;



		addition = num1 + num2;
		division = num1 / num2;
		subtraction =  num1 - num2;
		multiply = num1 - num2;

		printf("Enter the precision: ");  
		scanf("%d", &precision);
		if (precision >= 0 && precision != 'a','b','c','d','e','f','g','h','i', 'j' )

		{
			printf("Enter the expression: "); 
			x = scanf("%lf %c %lf", &num1, &z , &num2);
/*****************************************Error checking part*****************************************************/

	 if (x == 3)
		{
		switch (z)

			{
			case '+':
				printf("%.*lf %c %.*lf = %.*lf", /*precision*/ precision, num1, z , precision,num2, precision,num1 + num2 );
				break;
			case '*':
				printf("%.*lf %c %.*lf = %.*lf" , /*precision*/ precision, num1, z , precision, num2, precision,num1 * num2);
				 break;
			case '-':
				printf("%.*lf %c %.*lf = %.*lf", /*precision*/ precision, num1, z , precision, num2, precision, num1 - num2);
				 break;
			case '/':
				if (num2 != 0)

				   {

				   printf("%.*lf %c %.*lf = %.*lf", /*precision*/ precision, num1, z ,precision, num2, precision, num1 / num2 );
					break;
				   }
				else
				{



					printf("Negative Precision entered");
				}

			default :
				printf("Error: Incorrectly formatted input");
				break;
			}
		}
		else
		{
			 printf("No of items entered is incorrect");
			 return (0);
		}
			}
		else
		{
		printf("Negative Precision entered");
		}
		return 0;
		
			}

