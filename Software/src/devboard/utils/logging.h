#ifndef __LOGGING_H__
#define __LOGGING_H__

#include <inttypes.h>
#include "Print.h"

class Logging : public Print {
  void add_timestamp(size_t size);

 public:
  virtual size_t write(const uint8_t* buffer, size_t size);
  virtual size_t write(uint8_t) { return 0; }
  void printf(const char* fmt, ...);
  Logging() {}
};

extern Logging logging;
#endif  // __LOGGING_H__