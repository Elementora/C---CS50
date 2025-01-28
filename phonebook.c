#include <cs50.h>
#include <stdio.h>

int main (void)
{
    string name = get_string("What`s your name ?");
    int age = get_int("What`s you age ?");
    string number = get_string("What`s your number ?");

    printf("Age 's %i. Name is %s . Phone number is %s" , age , name , number);

}