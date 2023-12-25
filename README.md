<h1 align="center"> 
	Libft
</h1>
<p><i><b>Custom C Library</b></i></p>

## Overview

Libft is a custom C library that provides a collection of standard functions, designed to be reusable in various C projects. This library includes implementations of fundamental operations, allowing developers to streamline their code by using established functionalities.

## Files

1. **Makefile**: Build automation script for compiling the library.
2. **ft_atoi.c**: Convert a string to an integer.
3. **ft_bzero.c**: Set a block of memory to zero.
4. **ft_calloc.c**: Allocate and zero-initialize memory.
5. **ft_isalnum.c**: Check if a character is alphanumeric.
6. **ft_isalpha.c**: Check if a character is alphabetic.
7. **ft_isascii.c**: Check if a character is within the ASCII range.
8. **ft_isdigit.c**: Check if a character is a digit.
9. **ft_isprint.c**: Check if a character is printable.
10. **ft_itoa.c**: Convert an integer to a string.
11. **ft_lstadd_back.c**: Add a new element to the end of a linked list.
12. **ft_lstadd_front.c**: Add a new element to the beginning of a linked list.
13. **ft_lstclear.c**: Clear the contents of a linked list.
14. **ft_lstdelone.c**: Delete a specific element from a linked list.
15. **ft_lstiter.c**: Apply a function to each element of a linked list.
16. **ft_lstlast.c**: Retrieve the last element of a linked list.
17. **ft_lstmap.c**: Create a new list resulting from applying a function to each element of an existing list.
18. **ft_lstnew.c**: Create a new list element.
19. **ft_lstsize.c**: Get the size of a linked list.
20. **ft_memchr.c**: Locate the first occurrence of a character in a block of memory.
21. **ft_memcmp.c**: Compare two blocks of memory.
22. **ft_memcpy.c**: Copy memory from one location to another.
23. **ft_memmove.c**: Move a block of memory to another location.
24. **ft_memset.c**: Fill a block of memory with a specified value.
25. **ft_putchar_fd.c**: Print a character to a specified file descriptor.
26. **ft_putendl_fd.c**: Print a string followed by a newline to a specified file descriptor.
27. **ft_putnbr_fd.c**: Print an integer to a specified file descriptor.
28. **ft_putstr_fd.c**: Print a string to a specified file descriptor.
29. **ft_split.c**: Split a string into an array of substrings.
30. **ft_strchr.c**: Locate the first occurrence of a character in a string.
31. **ft_strdup.c**: Duplicate a string.
32. **ft_striteri.c**: Apply a function to each character of a string, passing its index as an argument.
33. **ft_strjoin.c**: Concatenate two strings.
34. **ft_strlcat.c**: Concatenate strings with a size limit.
35. **ft_strlcpy.c**: Copy a string to a specified size.
36. **ft_strlen.c**: Get the length of a string.
37. **ft_strmapi.c**: Apply a function to each character of a string, passing its index as an argument.
38. **ft_strncmp.c**: Compare two strings up to a specified number of characters.
39. **ft_strnstr.c**: Locate a substring in a string up to a specified length.
40. **ft_strrchr.c**: Locate the last occurrence of a character in a string.
41. **ft_strtrim.c**: Trim whitespace characters from the beginning and end of a string.
42. **ft_substr.c**: Extract a substring from a string.
43. **ft_tolower.c**: Convert a character to lowercase.
44. **ft_toupper.c**: Convert a character to uppercase.
45. **libft.h**: Header file declaring function prototypes and necessary data structures.

## Project Goals

1. Provide a comprehensive set of standard functions for C development.
2. Create a library that enhances code modularity and maintainability.
3. Support a variety of operations, from string manipulation to memory management.
4. Ensure correctness and reliability through extensive testing.
5. Facilitate code reuse by offering a reusable set of functions.

## Usage
1. **Clone the repository**
	```bash
	git clone git@github.com:kbly538/libft.git
	cd libft
2. **Build the Static Library**
	```bash
	make

To use the Libft library in your C projects, include the "libft.h" header file and compile your code with the compiled "libft.a" library. For example:

	```c
	#include "libft.h"
	#include <stdio.h>

	int main() {
		char str[] = "Hello, World!";
		size_t length = ft_strlen(str);
		printf("Length of the string: %zu\n", length);
		return 0;
	}

Compile with:

	```bash
	gcc -o my_program my_program.c libft.a
