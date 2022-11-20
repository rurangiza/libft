# Libft

## Personal Library of function in C

This project consists of re-writing built-in functions in C from scratch using our own logic and later, adding new functions.

The goal being to understand how they work exactly, what clever tricks were used to implement them, and recognize their strengths/limitations so we can use them in a more deliberate way.

In this project, I learned how to:
- Implement functions for tasks like string handling (identify characters type / copy, concatenate, trim, split, search / convert to a string to a number,...) 
- Create a custom library
- Write a Makefile 


| Function name                                                        | Description                                                                          |
|----------------------------------------------------------------------|--------------------------------------------------------------------------------------|
| [isalpha](https://github.com/rurangiza/libft/blob/main/ft_isalpha.c) | checks whether a character is an alphabet or not                                     |
| [isdigit](https://github.com/rurangiza/libft/blob/main/ft_isdigit.c) | checks whether a character is numeric character (0-9) or not                         |
| [isalnum](https://github.com/rurangiza/libft/blob/main/ft_isalnum.c) | checks whether the argument is an alphanumeric character (alphabet or number) or not |
| [isascii](https://github.com/rurangiza/libft/blob/main/ft_isascii.c) | check whether the argument is an ascii value                                         |
| [isprint](https://github.com/rurangiza/libft/blob/main/ft_isprint.c) | check whether the argument is a printable character                                  |
| [strlen](https://github.com/rurangiza/libft/blob/main/ft_strlen.c)   | calculate the length of a string                                                     |
| [memset](https://github.com/rurangiza/libft/blob/main/ft_memset.c)   | copies a character to the first n characters of a string                             |
| [bzero](https://github.com/rurangiza/libft/blob/main/ft_bzero.c)     | erases the data in the first n bytes of a given memory location                      |
| [memcpy](https://github.com/rurangiza/libft/blob/main/ft_memcpy.c)   | copies n bytes from memory area src to dest                                          |
| [memmove](https://github.com/rurangiza/libft/blob/main/ft_memmove.c) | copies n bytes from memory area src to dest (handles overlap)                        |
| [strlcpy](https://github.com/rurangiza/libft/blob/main/ft_strlcpy.c) | copies a certain number of characters from one string to another                     |
| [strlcat](https://github.com/rurangiza/libft/blob/main/ft_strlcat.c) | concatenates a certain number of characters from one string to another               |
| [toupper](https://github.com/rurangiza/libft/blob/main/ft_toupper.c) | converts a lowercase alphabet to an uppercase                                        |
| [tolower](https://github.com/rurangiza/libft/blob/main/ft_tolower.c) | converts an uppercase alphabet to lowercase                                          |
| [strchr](https://github.com/rurangiza/libft/blob/main/ft_strchr.c)   | searches for the first occurence of a character in a given string                    |
| [strrchr](https://github.com/rurangiza/libft/blob/main/ft_strrchr.c) | searches for the last occurence of a character in a given string                     |
| [strncmp](https://github.com/rurangiza/libft/blob/main/ft_strncmp.c) | compares at most the first n characters of two strings                               |
| [memchr](https://github.com/rurangiza/libft/blob/main/ft_memchr.c)   | searches for the first occurence of a character in a given memory area               |
| [memcmp](https://github.com/rurangiza/libft/blob/main/ft_memcmp.c)   | compares the first n bytes of two different memory areas                             |
| [strnstr](https://github.com/rurangiza/libft/blob/main/ft_strnstr.c) | locates the first occurence of a string in another                                   |
| [atoi](https://github.com/rurangiza/libft/blob/main/ft_atoi.c)       | converts a string into an integer                                                    |
| [calloc](https://github.com/rurangiza/libft/blob/main/ft_calloc.c)   | allocates a specified amount of memory and initialize it to zero                     |
| [strdup](https://github.com/rurangiza/libft/blob/main/ft_strdup.c)   | duplicates a string (deep copy)                                                      |


### Tester
francinette
