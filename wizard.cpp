#include "wizard.h"

Wizard::Wizard(std::string name, int health, int damage, int mana)
    : Player(name, health, damage), mana(mana) {}

void Wizard::castSpell(Player* opponent) {
  if (mana >= damage) {
    std::cout << getName() << " casts a spell on " << opponent->getName()
              << " for " << damage << " damage.\n";
    opponent->takeDamage(damage);
    mana = mana - damage;
  }
}