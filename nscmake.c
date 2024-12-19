/* ./nscmake *.txt > nscript.dat */
#include <stdio.h>
int main(int argc, char** argv) {
  int i;
  for (i = 1; i < argc; ++i) {
    char b;
    FILE* fp = fopen(argv[i], "r");
    while (fread(&b, 1, 1, fp)) {
      if (b != '\r') {
        printf("%c", b ^ 0x84);
      }
    }
    printf("%c", '\n' ^ 0x84);
    fclose(fp);
  }
  return 0;
}