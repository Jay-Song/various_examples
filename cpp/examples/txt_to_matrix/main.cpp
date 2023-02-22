#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main(int argc, char *argv[])
{
  std::ifstream file("a.txt");

  if (file.is_open() == false)
    return 1;

  std::string buffer;
  
  //while (file.eof() == false)
  //{
  //  std::getline(file, buffer);
  //  std::cout << buffer << std::endl;
  //}
  double temp = 0;
  std::stringstream ss;
  while (std::getline(file, buffer))
  {
    ss.str(buffer);
    while (ss >> temp) //ss.eof() is also possible
      std::cout << temp << "  ";

    std::cout << std::endl;
    //ss.str(""); <- to clear
    ss.clear();
  }

  file.close();

  return 0;
}