#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 *  @c: this is a character
 *
 * Return: returns 1 and 0  depending on the condition given
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
