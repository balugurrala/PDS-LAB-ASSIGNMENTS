#include <stdio.h>
int main()
{
  int l = 20;
  int n, i, j, flag;
  char ch[l];
  char word[l];
  printf("Enter the number of characters: ");
  scanf("%d", &n);
  printf("Enter the characters: ");
  for (i = 0; i < n; i++)
  {
    scanf(" %c", &ch[i]);
  }
  printf("Enter the word: ");
  scanf("%s", word);
  flag = 1;
  for (i = 0; word[i] != '\0'; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (word[i] == ch[j])
      {
        ch[j] = '*';
        break;
      }
    }
    if (j == n)
    {
      flag = 0;
      break;
    }
  }
  if (flag == 1)
  {
    printf("Yes, the word can be made from the characters.\n");
  }
  else
  {
    printf("No, the word cannot be made from the characters.\n");
  }
  return 0;
}
