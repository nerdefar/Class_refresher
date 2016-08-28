#include <iostream>
#include <stdlib.h>

//Classes
#include "entities\character\character.h"

void main() {
	std::cout << "Program initialized" << std::endl;
	character player(0, 0);
	std::cout << "Your name is: " << player.get_name() << std::endl;
	std::cout << "Your HP: " << player.get_hp() << std::endl;
	std::cout << "Your mana: " << player.get_mana() << std::endl;
	std::cout << "PositionX " << player.entity::get_xPos() << std::endl;
	std::cout << "PositionY " << player.entity::get_yPos() << std::endl;
	system("pause");
}