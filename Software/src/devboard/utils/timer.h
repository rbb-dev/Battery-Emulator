#ifndef __MYTIMER_H__
#define __MYTIMER_H__

#ifndef UNIT_TEST
#include <Arduino.h>
#endif

class MyTimer {
 public:
  /** interval in ms */
  MyTimer(unsigned long interval);
  /** Returns true and resets the timer if it has elapsed */
  bool elapsed();

 private:
  unsigned long interval;
  unsigned long previous_millis;
};

#endif  // __MYTIMER_H__