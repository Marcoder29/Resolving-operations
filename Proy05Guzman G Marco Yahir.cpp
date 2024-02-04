#include<stdio.h>
#include<conio.h>
#include<math.h>
// Declaración de variables, solo el resultado 2 no es entero, los demás si.
int resultado1, resultado3, resultado4, resultado1pow, resultado3pow;
float resultado2, resultado2pow;

main ( )
{
resultado1 = 15/3+4*(3*3)-5*6;
resultado1pow = 15/3+4*pow(3,2)-5*6;
resultado2 = (6*3+8-9/3+(2*2*2*2))/2.0;
resultado2pow = (6*3+8-9/3+pow(2,4))/2.0;
resultado3 = 2+(4*4)*(6*(1-(7+2)/9))+5;
resultado3pow = 2+pow(4,2)*(6*(1-(7+2)/9))+5;
resultado4 = 8*((!(7.0/4.0>2)||9>9)&&(3>=7.0/3.0||1+4>=9.0/2.0))+5;

printf("El resultado del ejemplo 1 es: %d\n", resultado1);
printf("El resultado del ejemplo 2 es: %.2f\n", resultado2);
printf("El resultado del ejemplo 3 es: %d\n", resultado3);
printf("El resultado del ejemplo 4 es: %d\n\n", resultado4);
printf("El resultado del ejemplo 1 usando pow es: %d\n", resultado1pow);
printf("El resultado del ejemplo 2 usando pow es: %.2f\n", resultado2pow);
printf("El resultado del ejemplo 3 usando pow es: %d\n", resultado3pow);
getch ();
return 0;
}
