#include <stdio.h>
#include <cstring>

char str[1001];

int main() {
  int i;
  scanf("%s %d ", str, &i);
  printf("%c", str[i-1]);
}
