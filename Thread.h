#ifndef _THREAD_H_
#define _THREAD_H_

/*
 * Clase abstracta que luego implementaran
 * los threads correspondientes
 */
#include <thread>
class Thread {
 private:
  std::thread thread;

 public:
  Thread();
  void start();
  void join();
  virtual void run() = 0;
  virtual ~Thread();
  Thread(const Thread &) = delete;
  Thread &operator=(const Thread &) = delete;
  Thread(Thread &&other);
  Thread &operator=(Thread &&other);
};

#endif
