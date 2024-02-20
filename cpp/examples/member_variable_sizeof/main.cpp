#include <iostream>

class SizeofTest
{
public:
  int int_array_[8];
  double double_array_[5];
  uint16_t uint16_array_[10];
  uint8_t uint8_array_[7];
  bool bool_array[9];

  void checkSizeOfMemberVariables()
  {
    std::cout << sizeof(int_array_) << std::endl; // 4 * 8
    std::cout << sizeof(double_array_) << std::endl; // 8 * 5
    std::cout << sizeof(uint16_array_) << std::endl; // 2 * 10
    std::cout << sizeof(uint8_array_) << std::endl; // 1 * 7
    std::cout << sizeof(bool_array) << std::endl; // 1 * 9 // bool is 1 byte
  }
};

int main(void)
{
  SizeofTest st;
  st.checkSizeOfMemberVariables();

  return 0;
}