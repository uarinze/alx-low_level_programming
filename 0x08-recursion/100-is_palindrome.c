#include "main.h"

int s_len(char *s);
int check_palindrome(char *s, int len, int i);
/**
 * s_len - returns the length of a string
 * @s: the string passed
 *
 * Description: returns the length of s
 * Return: the length of s.
 */
int s_len(char *s)
{
	int len = 0;
	if (*s + len)
	{
		len++;
		len += s_len(s + len);
	}
	return (len);
}

/**
 * check_palindrome - checkes is a string is
 * a palindrome
 * @s: - the string to check
 * @len: - the length of s
 * @i: - the index of s.
 *
 * Description: checks if a string is paliondrome.
 *
 * Return: if the string is palindrome it returns 1
 * otherwise it returns 0.
 */
int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);
	if (s[i] == s[len - i -1])
		return(check_palindrome(s, len, i + 1));
	return (0);
}

/**
 * is_palindrome - checks is a string is a palindrome
 * @s: argument which is a string
 *
 * Description: checks if a string is a palindrome
 *
 * Return: 1 if te string ia a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = s_len(s);

	if (!(*s))
		return (1);

	return(check_palindrome(s, len, i));
}
