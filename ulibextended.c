#include "types.h"
#include "user.h"

int thread_create(void (*func) (void)) {
  void *stack = malloc(4096);
  if(stack == 0) {
    return -1;
  }
  int tid = clone(func, stack);
  if(tid < 0) {
    free(stack);
    return -1;
  }
  return tid;
}