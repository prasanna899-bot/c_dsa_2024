#include <stdio.h>

int main()
{
    double d = 5.55;
    double *dptr = NULL;
    dptr = &d;
    double **pp = &dptr;
    printf("Value of pp = %p  %u \n", pp, pp);
    printf("Address of pp = %p  %u \n", &pp, &pp);
    printf("Value of dptr = %p   %u \n", *pp, *pp);
    printf("Address of dptr = %p   %u \n", pp, pp);
    printf("Value of d = %lf \n", **pp);
    printf("Address of d = %p   %u \n", *pp, *pp);
    printf("Value of d = %lf \n", ***(&pp));
}