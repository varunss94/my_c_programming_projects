#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include<conio.h>

main ()
{

	int v,r1,r2,r3;
	double I;
	double x;
	double reff;
	double Ieff;


	//get the values
	printf("Enter voltage source value (V): ");
	scanf("%d",&v);
	printf("Enter three resistance values (ohms): ");
	scanf("%d%d%d",&r1, &r2, &r3);
	x = r1+r2+r3;
	I = v/x;
	reff = (r2*r3)/(r2+r3);
	Ieff = v/(r1+(reff));

	// calculations and printing
	printf("SERIES CIRCUIT\n");
	printf("Current through circuit: %lf\n", I);
	printf("Voltage across R1:%lf\n", I*r1);
	printf("Voltage across R2:%lf\n", I*r2);
	printf("Voltage across R3:%lf\n", I*r3);

	printf("PARALLEL CIRCUIT\n");
	printf("Voltage across each resistor: %lf\n", v);
	printf("Current through R1: %lf\n", v/r1);
	printf("Current through R1: %lf\n", v/r2);
	printf("Current through R1: %lf\n", v/r3);

	printf("R2 & R3 IN PARALLEL\n");
	printf("Voltage across R1: %f\n", Ieff*r1);
	printf("Current through R1: %f\n", Ieff);
	printf("Voltage across R2: %f\n", Ieff*reff );
	printf("Voltage across R3: %f\n", Ieff*reff);
	printf("Current through R2: %f\n", (Ieff*reff)/r2);
	printf("Current through R3: %f\n", (Ieff*reff)/(r3));

	getch();
}
