#include <iostream>
#include <string>
#include "Tree.hpp"

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	Tree appleTree{"Apple", 50, 2 };

	print_tree(appleTree);

	int total_price = full_price(appleTree);
	std::cout << "Стоимость всех плодов: " << total_price << std::endl;

	int collect_price = collect(appleTree, 10);
	std::cout << "Стоимoсть собранных плодов: " << collect_price << std::endl;


	return 0;
}