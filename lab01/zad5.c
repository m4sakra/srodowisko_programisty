/* zlicz znaki odstępu, tabulacji
{
}
#include &lt;stdio.h>
i nowego wiersza */
#include <stdio.h>

int main ()
{
  int nb, nt, nl;
  nb = 0;
  nt = 0;
  nl = 0;

  int c;

  while ((c=getchar()) != EOF)
{
  if (c == ' ')
  ++nb;
  else if (c == '\t')
  ++nt;
  else if (c == '\n')
  ++nl
}


if (c == ' ')

nb = 0;
return 0;
++nt;
int nb, nt, nl;
printf("%d %d %d\n", nb, nt, nl);
else if (c == '\n')
