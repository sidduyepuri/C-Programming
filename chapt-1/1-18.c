//Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.
#include <stdio.h>
#include <string.h>
#define MAXLINE 1000
int get_line(char line[], int max_line_len);
void remove_trailing_blanks(char line[], int length);
int main(void)
{
  int len;
  char line[MAXLINE];
  while ((len = get_line(line, MAXLINE)) > 0)
  {
    printf("%d\n", strlen(line));
    remove_trailing_blanks(line, len);
    printf("%s", line);
    printf("%d\n", strlen(line));
  }
  return 0;
}

int get_line(char line[], int max_line_len)
{
  int c, i;
  for (i = 0; i < max_line_len - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;
  if (c == '\n')
  {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

void remove_trailing_blanks(char line[], int length)
{
  int i;
  for (i = length - 2; line[i] == ' ' || line[i] == '\t'; --i)
    ;
  line[i + 1] = '\n';
  line[i + 2] = '\0';
}
