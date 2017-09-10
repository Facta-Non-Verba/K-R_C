#include <stdio.h>

int main()
{
	printf("hello, world\a\n"); // the \a makes beep sound
	return 0;
}

/*
All C programs consists of functions and variables
- a function contains statements that specify the computing operations to be done
- variables store values used during the computation

This main function is an example; every C program is required to have a main function
somewhere to begin running

The first line,
		#include <stdio.h>
tells the compiler to include information about the standard input/output files.

Communicating data between functions is for the calling function to provide a list of values,
called arguments, to the function it calls.

A sequence of caharacters in double quotes is called a character string or string constant.
*/