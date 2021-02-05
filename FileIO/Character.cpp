#include "Character.h"

Character::Character()
{
	m_health = 100;
	m_damage = 10;
}

Character::Character(float health, float damage)
{
	m_health = health;
	m_damage = damage;
}

void Character::setDamage(float damageVal)
{
	m_damage = damageVal;
}

void Character::setHealth(float healthVal)
{
	m_health = healthVal;
}