#include "main.h"
int get_strlen(char *s);
int search_palindrome(char *s, int length, int n1);

/**
 * get_strlen - checks if string is a palindrome
 * @s: string to be checked
 * Return: displays the output
 */
int get_strlen(char *s)
{
int length = 0;
if (*(s + length))
	{
	length++;
length += get_strlen(s + length);
	}
	return (length);
}

/**
 * search_palindrome - checks if a string is palindrome
 * @s: string to be checked
 * @length: length of string
 * @n1: index of the string to be  checked
 * Return: displays the output
 */
int search_palindrome(char *s, int length, int n1)
{
if (s[n1] == s[length / 2])
	return (1);
if (s[n1] == s[length - n1 - 1])
	return (search_palindrome(s, length, n1 + 1));
return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * Return:  returna the result of the output
 */
int is_palindrome(char *s)
{
int n1 = 0;
int length = get_strlen(s);
	if (!(*s))
		return (1);
	return (search_palindrome(s, length, n1));
}
