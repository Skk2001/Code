#include<stdio.h>
#include<math.h>
int main()
{
	char a;
	scanf("%c",&a);
	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='O' || a=='U' || a=='E' || a=='I')
	{
		printf("VOWEL");
	}
	else
	{
		if(a>=48 && a<=57)
			printf("digit");
		else
			printf("consonant");
	}
	return 0;
}
