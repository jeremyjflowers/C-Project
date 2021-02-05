#pragma once

class Character
{
private:
    int m_health;
    int m_damage;
public:
    Character();
    Character(float health, float damage);

    float getDamage() { return m_damage; }
    float getHealth() { return m_health; }

    void setDamage(float damageVal);
    void setHealth(float healthVal);
};