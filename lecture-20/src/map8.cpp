#include <iostream>
#include <map>

int main()
{
  std::map<char,std::string> dir;

  dir['C'] = std::string("south");
  dir['D'] = std::string("west");
  dir['B'] = std::string("east");
  dir['A'] = std::string("north");

  for (auto &d : dir)
    std::cout << d.first << std::endl;

  return 0;
}
