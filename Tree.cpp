#include "Tree.hpp"

void  print_tree(const Tree& tree) {
	std::cout << "Фрукт: " << tree.fruit << std::endl;
	std::cout << "Количество плодов: " << tree.fruits_number << std::endl;
	std::cout << "Стоимость: " << tree.fruits << std::endl;
}
int full_price(const Tree& tree)
{
	return tree.fruits_number * tree.fruits;
}
int collect(Tree& tree, int num)
{
	if (num >= tree.fruits_number)
	{
		std::cout << "Вы собрали все плоды.";
	}
	else
	{
		tree.fruits_number -= num;
		return num * tree.fruits;
	}
}