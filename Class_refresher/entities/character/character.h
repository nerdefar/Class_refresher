#pragma once
#include <string>


// Inline defined, doesn't need .cpp file.
class character {
private:
	int hp;
	int mana;
	std::string name;
public:
	//Constructor
	character(){ hp = 100; mana = 100; name = "John Doe"; }

	// Get functions
	const int char_getHp() const { return this->hp; }
	const int char_getMana() const { return this->mana; }
	const std::string char_getName() const { return this->name; }

	// Set functions
	void char_setHp(int new_hp) { hp = new_hp; }
	void char_setMana(int new_mana) { mana = new_mana; }
	void char_setName(std::string new_name) { name = new_name; }

};