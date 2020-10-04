#include <stdio.h>
#include <stdlib.h>

int main()
{
    int MAT,CAL1,CAL2,CAL3,CAL4,CAL5;
    float PROM;
    
    printf("Ingresa la matricula del alumno: ");
    scanf("%d",&MAT);
    
    printf("\n Ingresa la cal1: ");
    scanf("%d",&CAL1);
    printf("\n Ingresa la cal2: ");
    scanf("%d",&CAL2);
    printf("\n Ingresa la cal3: ");
    scanf("%d",&CAL3);
    printf("\n Ingresa la cal4: ");
    scanf("%d",&CAL4);
    printf("\n Ingresa la cal5: ");
    scanf("%d",&CAL5);
    PROM=(CAL1+CAL2+CAL3+CAL4+CAL5)/5;
    printf("\nLa matricula del alumno: %d con un promedio: %f \n",MAT,PROM);
    system("pause"); 
}
