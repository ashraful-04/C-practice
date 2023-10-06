#include <stdio.h>
#include <ctype.h>

int main()
{
  char alphabet;

  printf("Enter the alphabet: ");
  scanf("%c", &alphabet);

  if (tolower(alphabet) == 'a' || tolower(alphabet) == 'e' || tolower(alphabet) == 'i' || tolower(alphabet) == 'o' || tolower(alphabet) == 'u')
  {
    printf("%c is a vowel", alphabet);
  }

  else
  {
    printf("%c is a consonant", alphabet);
  }

  return 0;
}
