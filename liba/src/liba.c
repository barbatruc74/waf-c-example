#include <stdio.h>

#include "liba/liba.h"

void liba_hello() {
  fprintf(stdout, "%s\n", "hello from liba");
}

void liba_greetings() {
  fprintf(stdout, "%s\n", "greatings from liba");
}

void liba_byebye() {
  fprintf(stdout, "%s\n", "byebye from liba");
}

/* EOF */
