int print_putchar()
{
	int _putchar[] = {95, 112, 117, 116, 99, 104, 97, 114};
	
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(_putchar[i]);
		i++;
	}
	putchar(10);
}
