#include 'main.h'
/**
  wildcmp - function to swap
  @s1: first character
  @s2: second character
  Return - Always zero
  */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return 1;
	if (*s1 == '*') {
		if (*s2 == '\0') 
		{
			return 0;
		}
		while (*s2 != '\0')
		{
			if (wildcmp(s1 + 1, s2) == 1)
				return 1;
			s2++;
			return 0;
		}
		if (*s1 == *s2 || *s2 == '?') 
		{
			return wildcmp(s1 + 1, s2 + 1);
		}
		return 0;
	}
}
