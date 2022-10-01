#include "main.h"
#include <stdio.h>
/**
 * main - A program that prints the number of arguments passed into it.
 * @argc: Number of command line arguement 
 * @argv: array that contains the program command line arguments.
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
  printf("%d\n", argc - 1);
  return (0);
}
  
