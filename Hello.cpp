//
// Created by vlad on 06.03.23.
//

#include <iostream>
#include <string>

int
main(int argc, char** argv)
{
  string name;                                          // имя пользователя
  std::cin >> name;                                     // ввод имени
  std::cout << "hello world from" << name << std::endl; // вывод
}
