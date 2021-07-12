/*
** EPITECH PROJECT, 2021
** Rush
** File description:
** task1
*/

#include "teddy.hpp"
#include "littlePony.hpp"
#include "box.hpp"
#include "giftPaper.hpp"

Object **MyUnitTests(void)
{
  Object **objs = new Object*[2];

  objs[0] = new LittlePony("happy pony");
  objs[1] = new Teddy("cuddles");
  return (objs);
}

Object *MyUnitTests(Object **objs)
{
  if (objs == NULL) {
    std::cerr << "The list is empty" << std::endl;
    return (nullptr);
  }
  if (((Box *)objs[1])->getStatus() != Box::OPEN)
    ((Box *)objs[1])->openMe();
  ((Box *)objs[1])->wrapMeThat(objs[0]);
  ((GiftPaper *)objs[2])->wrapMeThat(objs[1]);
  return ((GiftPaper *)objs[2]);
}