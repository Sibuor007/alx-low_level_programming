/**
 * * _atoi - function that changes a string to int
 * * @s: the string
 * * Return: int
 * */
int _atoi(char *s)
{
	int m = 1;
	unsigned int item = 0;
	do {
		if (*s == '-')
			m *= -1;
		else if (*s >= '0' && *s <= '9')
			item = item * 10 + (*s - '0');
		else if (item > 0)
			break;
	} while (*s++);
	return (item *m);
}
