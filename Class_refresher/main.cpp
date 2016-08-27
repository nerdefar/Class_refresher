#include <iostream>
#include <stdlib.h>

//Classes
#include "entities\character\character.h"

void main() {
	std::cout << "Program initialized" << std::endl;
	character player;
	std::cout << "Your name is: " << player.char_getName() << std::endl;
	std::cout << "Your HP: " << player.char_getHp() << std::endl;
	std::cout << "Your mana: " << player.char_getMana() << std::endl;
	system("pause");
}