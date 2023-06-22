#include "main.h"
/**
* _islower
* a function that checks for lowercase character.
* Return: 1 if char is a lowercase, else 0.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
