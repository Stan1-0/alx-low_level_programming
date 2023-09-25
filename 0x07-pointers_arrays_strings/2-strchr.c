#include "main.h"
/**
 * _strchr - locates a character in string
 * @s:string targeted
 * @c:character targeted
 * Return: retyurns pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++);
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
