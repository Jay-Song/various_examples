#include <fstream>
#include <string>
#include <sstream>
#include <iostream>

int main(void)
{
  std::ofstream file;
  file.open("test.txt");

  int value = 1;

  while (value < 10)
  {
    file << value << " " << value + 1 << "\n";
    value++;
  }

  file.close();

  return 0;
}