#include <stdio.h>

int main(void)
{
  int seg, hra, mnt, sgnd;
  printf("Digite a quantidade de segundos: ");
  scanf("%d", &seg);
  printf("A quantidade de segundos informada foi: %d\n", seg);
  if (seg >= 3600 && seg % 3600 < 60)
  {
    hra = seg / 3600;
    mnt = 00;
    sgnd = seg % 60;
    printf("Os segundos convertidos em horas é: %d:%d:%d:\n", hra, mnt, sgnd);
  }
  if (seg >= 3600 && seg % 3600 == 60)
  {
    hra = 1 + seg / 3600;
    mnt = 00;
    sgnd = seg % 60;
    printf("Os segundos convertidos em horas é: %d:%d:%d:\n", hra, mnt, sgnd);
  }
  if (seg >= 3600 && seg % 3600 > 60)
  {
    hra = seg / 3600;
    mnt = seg % 3600 / 60;
    sgnd = seg % 60;
    printf("Os segundos convertidos em horas é: %d:%d:%d:\n", hra, mnt, sgnd);
  }
  if (seg < 3600)
  {
    hra = seg / 3600;
    mnt = seg / 60;
    sgnd = seg % 60;
    printf("Os segundos convertidos em horas é: %d:%d:%d:\n", hra, mnt, sgnd);
  }
  return 0;
}