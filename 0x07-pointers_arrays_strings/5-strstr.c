#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: - is a pointer to string.
 * @needle: - is a pointer to a substring.
 *
 * Description: this function finds the first
 * occurence of the substring needle in the
 * string haystack. The terminating nullbytes
 * ('\0') are not compared.
 * 
 * Return: It returns a pointer to the begining
 * of the located substring, or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;
		if (*(haystack + i) == *(needle + i))
		{
			do{
				if (*(needle + i + 1) == '\0')
					return(haystack);
				i++;
			} while (*(haystack + i) == *(needle + i));
		}
		haystack++;
	}
	return ('\0');
}	
