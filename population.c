#include <cs50.h>
#include <stdio.h>

int main (void)
{
    // Promting the user for a starting # of llamas

        int start;
        do
        {
            start = get_int("Start size : ");

        }

        while (start < 9 );

    //Prompting them for an ending # llamas

    int end ;
    do
    {
        end = get_int ("End size: ");

    }
    while (end < start );

    //How nany years will it take ti get to the goal ?

    int years = 0;
    while (start < end )
    {
        start += start /12 ;
        years++;
    }


    //Every year , 1/3 of our current llamas are born ; 1/4 pass away

    printf ("Years : %i\n" , years);


}