#include "main.h"

/**
 * get_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
<<<<<<< HEAD
 * Return: Flags:
 */
=======
 * Return: Flags
 */

>>>>>>> 11878aa2d78eb36046b74ecad664374b0ce87a31
int get_flags(const char *format, int *i)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
<<<<<<< HEAD
=======

>>>>>>> 11878aa2d78eb36046b74ecad664374b0ce87a31
	int j, curr_i;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
			if (format[curr_i] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}
<<<<<<< HEAD

		if (FLAGS_CH[j] == 0)
			break;
	}

=======
		if (FLAGS_CH[j] == 0)
			break;
	}
>>>>>>> 11878aa2d78eb36046b74ecad664374b0ce87a31
	*i = curr_i - 1;

	return (flags);
}
