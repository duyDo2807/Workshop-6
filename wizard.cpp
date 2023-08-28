#include "wizard.h"

Wizard::Wizard(std::string name, int health, int damage, int mana)
    : Player(name, health, damage), mana(mana) {}

void Wizard::castSpell(Player* opponent) {
  if (mana >= getDamage()) {
    std::cout << getName() << " casts a spell on " << opponent->getName()
              << " for " << getDamage() << " damage.\n";
    opponent->takeDamage(getDamage());
    mana = mana - getDamage();
  } else {
    std::cout << getName() << " doesn't have enough mana to cast a spell!"
              << std::endl;
  }
}