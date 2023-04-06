#include "main.h"

/* Prototype to check palindrome */
int check_palindrome(char *s);

/* Prototype to count the length of a string */
int _strlen_recursion(char *s);

/**
  * is_palindrome - A function that returns if a string is palindrome
  *
  * @s: the string value to be checked
  *
  * Return: integer value
  */

int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (check_palindrome(s));
}

/**
  * check_palindrome - A function to check if a string is palindrome
  *
  * @s: the string value to be checked
  *
  * Return: integer value
  */

int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}

	return (1);
}

/**
  * _strlen_recursion - Get the length of a string
  *
  * @s: the string to get the length
  *
  * Return: the string length
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
