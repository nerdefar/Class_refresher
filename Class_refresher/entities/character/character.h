#pragma once
#include "../entity/entity.h"
#include <string>

class character : public entity {

public:
	//Constructor
	character(int x_pos, int y_pos )	:	entity(x_pos, y_pos, false)
	{ hp_ = 100; mana_ = 100; name_ = "John Doe"; }

	// Get functions
	const int get_hp() const { return this->hp_; }
	const int get_mana() const { return this->mana_; }
	const std::string get_name() const { return this->name_; }
	
	// Actions
	void take_damage(int damage);

private:
	int hp_;
	int mana_;
	std::string name_;

};