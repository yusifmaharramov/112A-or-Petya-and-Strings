// This is a problem from codeforces.com called 112A or Petya and Strings
// I don't know the reason, but fgets function makes troubles if the length of the character arrays str1 and str2 is exactly 100. So, what I mean the length should be at least 102 for each strings.
// We can use gets() function instead of fgets() function and everything works as expected if that is the case.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{
	int i = 0, result;
	char str1[102];
	char str2[102];
	fgets(str1, 102, stdin);
	fgets(str2, 102, stdin);

	//gets(str1);    Here, the length of str1 can be 100
	//gets(str2);    Here, the length of str2 can be 100

	if (strlen(str1) == strlen(str2))
	{
		while (str1[i])
		{
			str1[i] = tolower(str1[i]);
			i++;
		}

		i = 0;

		while (str2[i])
		{
			str2[i] = tolower(str2[i]);
			i++;
		}
	}
	result = strcmp(str1, str2);
	printf("%d", result);
	return 0;
}
