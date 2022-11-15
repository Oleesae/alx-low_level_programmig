#include  "main.h"
/**
 * len - calculates the length of a string
 * @s: string
 * Return: length of string
 */

int len(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	return (i);
}

/**
 * _compare - compares two strings
 * @s1: first string
 * @s2: second string
 * @n: length of a string
 * Return: integer
 */

int _compare(char *s1, char *s2, int n)
{
	int i = 0, res;

	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
		else
		{
			if ((s1[i] - s2[i]) > 0)
			{
				res = s1[n];
				break;
			}
			else if ((s1[i] - s2[i]) < 0)
			{
				res = s2[n];
				break;
			}
			else if ((s1[i] - s2[i]) == 0)
			{
				res = 0;
				break;
			}
		}
		i++;
	}
	return (res);
}

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int len_s1, len_s2, res;

	len_s1 = len(s1);
	len_s2 = len(s2);

	if (len_s1 > len_s2)
	{
		res = _compare(s1, s2, len_s2);
	}
	else if (len_s1 < len_s2)
	{
		res = _compare(s1, s2, len_s1);
	}
	else
	{
		res = _compare(s1, s2, len_s1);
	}
	return (res);
}
