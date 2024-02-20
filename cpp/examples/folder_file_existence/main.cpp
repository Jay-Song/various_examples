#include <Windows.h>
#include <direct.h>
#include <stdio.h>
#include <sys/stat.h>
//#include <filesystem> // for create_directory

int doesFolderExist(const char* folder_name)
{
  struct stat sb;
  if (stat(folder_name, &sb) == 0) {
    return 1;
  }
  else {
    return 0;
  }
}

int main(int argc, char *argv[])
{
  char* folder = "./output";

  struct stat sb;
  if (doesFolderExist(folder) == 1) {
    printf("YES\n");
  }
  else {
    printf("NO\n");
    _mkdir(folder); // for c, just mkdir();
  }
  
  //std::filesystem::create_directory(folder); // from c++ 17

  return 0;
}

