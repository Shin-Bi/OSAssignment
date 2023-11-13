#include "types.h"
#include "user.h"
int test =0;

void func1(void) {
  test++;
  while(1) {;}
  exit();
}

void func2(void) {
  test++;
  while(1) {;}
  exit();
}

int main() {
  printf(1, "스레드 생성 시작.\n");
  int tid1 = thread_create(func1);
  int tid2 = thread_create(func2);
  int tid3 = thread_create(func2);
  if(tid1 < 0) {
    printf(1, "스레드1 생성 실패.\n");
  } else {
    printf(1, "생성된 스레드 1의 TID: %d\n", tid1);
  }
  if(tid2 < 0) {
    printf(1, "스레드2 생성 실패.\n");
  } else {
    printf(1, "생성된 스레드 2의 TID: %d\n", tid2);
  }
    if(tid3 < 0) {
    printf(1, "스레드3 생성 실패.\n");
  } else {
    printf(1, "생성된 스레드 3의 TID: %d\n", tid3);
  }
  printf(1, "test = %d\n", test);
  while(1) {;}
  exit();
}