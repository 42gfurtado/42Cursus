#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char	*str;
	char	src[12] = "Hello World";
	char	src2[12] = "Hello World";

	str = (char *)malloc(sizeof(char) * 12);
	
	int	i = 0;
	while (src[i] != '\0')
		str[i++] = src[i];
	printf("primeiro %s", str);
	free(str);
	printf("segundo %s", str);

	str = (char *)malloc(sizeof(char) * 13);
	while (src2[i] != '\0')
	{
       		str[i+12] = src2[i];
		i++;
	}
	str[i] = '\0';	
	printf("terceiro %s", str);
	free(str);
	printf("quarto %s", str);

	return (0);
}
