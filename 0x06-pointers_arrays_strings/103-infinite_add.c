#include "main.h"

/**
 * rev_string - reverse array
 * @n: first argument
 *
 * Return: 0
 */
void rev_string(char *n)
{
	int i;
	int j;
	int len = 0;
	char tmp;
	for (i = 0; *(n + i) != '\0'; i++)
		len = i;
	for (j = 0; j < len; j++, len--)
	{
		tmp = *(n + j);
		*(n + j) = *(n + len);
		*(n + len) = tmp;
	}
}
/**
 * infinite_add - add two numbers together
 * @n1: - text representation of 1st number to add
 * @n2: - text representation f 2nd number to add
 * @r: - pointer to buffer
 * @size_r: - buffer size
 *
 * Return: - pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size size_r)
{
	int overflow = 0;
	int i = 0;
	int j = 0;
	int digits = 0;
	int val1 = 0;
	int val2 = 0;
	tmp_sum = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		tmp_sum = val1 + val2 + overflow;
		if (tmp_sum >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1)
			return (0);
		*(r + digits) = (tmp_sum % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
	return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
