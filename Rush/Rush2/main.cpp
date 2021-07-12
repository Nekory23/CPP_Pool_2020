/*
** EPITECH PROJECT, 2021
** Rush
** File description:
** task1
*/

#include <iostream>
#include <iostream>
#include "object.hpp"
#include "teddy.hpp"
#include "box.hpp"
#include "giftPaper.hpp"
#include "unitTests.hpp"

int main() {
  LittlePony pony("Pony");
  Teddy ted("Ted");
  Object **obj = MyUnitTests();

  pony.isTaken();
  ted.isTaken();
  for (int i = 0; i != 2; i++)
    std::cout << *obj[i] << std::endl;
  
  Object **objs = new Object*[3];

  objs[0] = new Teddy("teddy");
  objs[1] = new Box("box");
  objs[2] = new GiftPaper("present");
  std::cout << *MyUnitTests(objs) << std::endl;
}
