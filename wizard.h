#include <iostream>
#ifndef WIZARD_H
#define WIZARD_H
#include "player.h"

class Wizard : public Player {
 private:
  int mana;
  std::string weapon;

 public:
  Wizard(std::string name, int health, int damage, int mana);
  void castSpell(Player* opponent);
};

#endif