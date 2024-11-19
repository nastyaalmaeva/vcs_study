#include <iostream>
#include <string>

// This code accepts the user's name and then greets him
int
main()
{
  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name;
  std::cout << "Hello, world from " << name << "!" << std::endl;
  return 0;
}
