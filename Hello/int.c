#include <cs50.h>
#include <stdio.h>

int main(void)
{
     printf("You are at least %i days old.\n", get_int("What's your age?\n") * 365);
}
