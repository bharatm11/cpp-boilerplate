#include <gmock/gmock.h>
#include "../include/class_A.hpp"

#ifndef mock_H_
#define mock_H_

class mockClass:public A {
public:
  MOCK_METHOD0(producta, int());
  MOCK_METHOD0(getdata, void());
};
#endif /* mock_H_ */
