#include <stdio.h>

float converter(int fahr);

int main() {
  int i;
  int fahr;

  for (fahr = 0; fahr <= 300; fahr=fahr+20) {
    printf("%3d\t%6.1f\n", fahr, converter(fahr));
  }
  return 0;
}

float converter(int fahr) {
  float celsius;

  celsius = 5.0 * (fahr - 32.0) / 9;
  return celsius;
}
