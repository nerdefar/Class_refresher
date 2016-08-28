#pragma once

// Base class for all entities (Characters, monsters, obstacles)
class entity {

public:
	//Constructor
	entity(int x_pos, int y_pos, bool is_static) { x_pos_ = x_pos; y_pos_ = y_pos; is_static_ = is_static; }
	
	//Get functions
	const int get_xPos() const { return this->x_pos_; }
	const int get_yPos() const { return this->y_pos_; }
	const bool get_staticStatus() const { return this->is_static_; }

private:
	int x_pos_, y_pos_;
	bool is_static_;
};