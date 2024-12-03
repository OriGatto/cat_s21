#ifndef SRC_CAT_S21_CAT_H_
#define SRC_CAT_S21_CAT_H_

#include <stdio.h>
#include <string.h>
 
typedef struct {
  int b;
  int e;
  int n;
  int s;
  int t;
  int v;
} Flags;

void init(Flags *flags);
int parse_flags(int argc, char **argv, Flags *flags);
void output_result(char *argv, Flags flags);
void flag_e(Flags flags, int *c);
void flag_t(Flags flags, int *c);
void flag_v(int *c);

#endif  // SRC_CAT_S21_CAT_H_