 function that swaps the values of two integers.

 function that returns the length of a string.

function that prints a string, followed by a new line, to stdout.

function that prints a string, in reverse, followed by a new line.

Write a function that reverses a string.

 function that prints every other character of a string, starting with the first character, followed by a new line.

function that prints half of a string, followed by a new line.



Prototype: void puts_half(char *str);

The function should print the second half of the string

If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2


function that prints n elements of an array of integers, followed by a new line.



Prototype: void print_array(int *a, int n);

where n is the number of elements of the array to be printed

Numbers must be separated by comma, followed by a space

The numbers should be displayed in the same order as they are stored in the array

You are allowed to use printf


function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.



Return value: the pointer to dest

FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.
