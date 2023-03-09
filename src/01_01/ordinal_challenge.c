#include <stdio.h>

char *ordinal(int v)
{
	/*
		 - create this function
		 - this code won't run with out it!
	 */

	// we have few exceptions
	// eg: 11th (not 11st), 12th (not 12nd), 13th (not 13rd)
	if (v == 11 || v == 12 || v == 13)
	{
		return "th";
	}

	// now the logic
	//  the input is less than 20, so max 2 digit
	// to get the last digit, I am doing a modulus of 10 (eg, if I do 50%10, its 0, 55%10, 5. )
	int l = v % 10;
	switch (l)
	{
	case 1:
		return ("st");
		break;
	case 2:
		return ("nd");
		break;
	case 3:
		return ("rd");
		break;

	default:
		return ("th");
		break;
	}
}

int main()
{
	int c;

	/* output a table of 100 numbers */
	for (c = 1; c <= 20; c++)
	{
		printf("%3d%s\t%3d%s\t%3d%s\t%3d%s\t%3d%s\n",
					 c, ordinal(c),
					 c + 20, ordinal(c + 20),
					 c + 40, ordinal(c + 40),
					 c + 60, ordinal(c + 60),
					 c + 80, ordinal(c + 80));
	}

	return (0);
}
