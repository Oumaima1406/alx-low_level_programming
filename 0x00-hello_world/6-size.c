#include <stdio.h>
/**
 * main - entry point
 * description: program that prints the size of various types
 * Return: O if sucsseful.
*/
int main(void)
{
printf("Size of a char: %1lu byte(s)\n", sizeof(char));
printf("Size of an int: %1lu byte(s)\n", sizeof(int));
printf("Size of a long int: %1lu  byte(s)\n", sizeof(long int));
printf("Size of a long long int: %1lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %1lu byte(s)\n", sizeof(float));
return (0);
}
