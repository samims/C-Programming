
#include <stdio.h>
#include <string.h>
char *longer(char *s1, char *s2);


int main()
{
	char *string1 = "A long time ago";
	char *string2 = "In a galaxy far, far away";
	char *result;
	result = longer(string1,string2);
	printf("String '%s' is longer.\n",result);
	
	return(0);
}

char *longer(char *s1, char *s2)
{
	int len1,len2;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if( len1 > len2 )
		return(s1);
	else
		return(s2);
}

