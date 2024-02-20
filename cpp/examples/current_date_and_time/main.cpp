#include <Windows.h>
#include <sstream>
#include <string.h>
#include <time.h>
#include <iostream> 
#include <iomanip> //for set fill (0)

// this can be used for both window and linux. with some modification
//  std::time_t t = std::time(0);   // get time now
//  std::tm* now = std::localtime(&t);
//  std::cout << (now->tm_year + 1900) << '-'
//    << (now->tm_mon + 1) << '-'
//    << now->tm_mday
//    << "\n";
//

std::string getCurrentDateAndTime()
{
  time_t     now = time(0); //save current time into time_t
  struct tm  tstruct;

  localtime_s(&tstruct, &now);

  std::stringstream ss;
  ss << tstruct.tm_year + 1900;

  ss << std::setw(2) << std::setfill('0') << (tstruct.tm_mon + 1)
    << std::setw(2) << std::setfill('0') << tstruct.tm_mday
    << std::setw(2) << std::setfill('0') << tstruct.tm_hour
    << std::setw(2) << std::setfill('0') << tstruct.tm_min
    << std::setw(2) << std::setfill('0') << tstruct.tm_sec << ".txt";

  return ss.str();
}

int main(void)
{
  std::cout << getCurrentDateAndTime() << std::endl;

  return 0;
}