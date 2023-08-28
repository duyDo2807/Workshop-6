#include "player.h"

Player::Player(std::string name, int health, int damage)
    : name(name), health(health), damage(damage) {}

void Player::attack(Player* opponent, int damage) {
  opponent->health = opponent->health - damage;
}

void Player::takeDamage(int damage) {
  health = health - damage;
  std::cout << name << " takes " << damage
            << " damage. Remaining health: " << health << "\n";
}

int Player::getHealth() { return health; }

std::string Player::getName() { return name; }

int Player::getDamage() { return damage; }