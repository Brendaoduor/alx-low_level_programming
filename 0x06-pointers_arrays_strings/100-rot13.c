#include "main.h"

/**
 * rot13 - it encodes a string
 * @str: the string to be encoded
 * Return: prints the result value1
 */
char *rot13(char *str)
{
int value1 = 0, value2;
char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
			'G', 'H', 'I', 'J', 'K', 'L',
			'M', 'N', 'O', 'P', 'Q', 'R',
			'S', 'T', 'U', 'V', 'W', 'X',
			'Y', 'Z', 'a', 'b', 'c', 'd',
			'e', 'f', 'g', 'h', 'i', 'j',
			'k', 'l', 'm', 'n', 'o', 'p',
			'q', 'r', 's', 't', 'u', 'v',
			'w', 'x', 'y', 'z'};
char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
			'T', 'U', 'V', 'W', 'X', 'Y',
			'Z', 'A', 'B', 'C', 'D', 'E',
			'F', 'G', 'H', 'I', 'J', 'K',
			'L', 'M', 'n', 'o', 'p', 'q',
			'r', 's', 't', 'u', 'v', 'w',
			'x', 'y', 'z', 'a', 'b', 'c',
			'd', 'e', 'f', 'g', 'h', 'i',
			'j', 'k', 'l', 'm'};
	while (str[value1])
	{
		for (value2 = 0; value2 < 52; value2++)
		{
			if (str[value1] == alphabet[value2])
			{
				str[value1] = rot13key[value2];
				break;
			}
		}
		value1++;
	}
return (str);
}
