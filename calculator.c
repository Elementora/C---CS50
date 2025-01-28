#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //int x = get_int ("x: ");//
   // int y = get_int ("y: ");//

    long x = get_int ("x: ");
    long y = get_int ("y: ");

    //printf("%li\n", x + y);//
    //printf("%li\n", x / y);//
    // float z = x /y ;//

   // float z = (float) x /(float) y ;//
    // printf("%f\n", z);//
    double z = (double) x / (double) y ;

     printf("%.20f\n", z);

}