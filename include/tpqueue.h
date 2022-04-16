// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
  // реализация шаблона очереди с приоритетом на кольцевом буфере
 private:
  T arr[size] = { 0 };
  int f, l;
 public:
void push(T tmp) {
int a = l;
for (; (a >= f) && arr[a % size].prior < tmp.prior; --a) {
  arr[(a + 1) % size] = arr[a % size];
    }
    arr[(a + 1) % size] = tmp;
    ++l;
}
T pop() {
    return arr[(f++) % size];
  }
};
struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
