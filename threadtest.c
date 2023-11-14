#include "types.h"
#include "user.h"
int test =0;

void func1(void) {
  test++;
  texit();
}

void func2(void) {
  test++;
  texit();
}

int main() {
  printf(1, "스레드 생성 시작.\n");
  int tid1 = thread_create(func1);
  int tid2 = thread_create(func1);
  int tid3 = thread_create(func1);
  int tid4 = thread_create(func2);
  int tid5 = thread_create(func2);
  int tid6 = thread_create(func2);

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
      if(tid3 < 0) {
    printf(1, "스레드4 생성 실패.\n");
  } else {
    printf(1, "생성된 스레드 4의 TID: %d\n", tid4);
  }
      if(tid3 < 0) {
    printf(1, "스레드5 생성 실패.\n");
  } else {
    printf(1, "생성된 스레드 5의 TID: %d\n", tid5);
  }    if(tid3 < 0) {
    printf(1, "스레드6 생성 실패.\n");
  } else {
    printf(1, "생성된 스레드 6의 TID: %d\n", tid6);
  }
  int join1 = join();
  printf(1, "1번째 조인된 스레드의 TID: %d\n", join1);
  int join2 = join();
  printf(1, "2번째 조인된 스레드의 TID: %d\n", join2);
  int join3 = join();
  printf(1, "3번째 조인된 스레드의 TID: %d\n", join3);
  int join4 = join();
  printf(1, "4번째 조인된 스레드의 TID: %d\n", join4);
  int join5 = join();
  printf(1, "5번째 조인된 스레드의 TID: %d\n", join5);
  int join6 = join();
  printf(1, "3번째 조인된 스레드의 TID: %d\n", join6);
  printf(1, "test = %d\n", test);
  exit();
}