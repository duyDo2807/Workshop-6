#include "wizard.h"

Wizard::Wizard(std::string name, int health, int damage, int mana)
    : Player(name, health, damage), mana(mana) {}

void Wizard::castSpell(Player* opponent) {
  if (mana > 0) {
    std::cout << getName() << " casts a spell on " << opponent->getName()
              << " for " << getDamage() << " damage.\n";
    opponent->takeDamage(getDamage());
    mana = mana - getDamage();
  }
}