﻿#pragma once

#include <string>
#include <iostream>

struct Tree {
	std::string fruit;
	int fruits_number;
	int fruits;
};

void print_tree (const Tree& tree);
int full_price (const Tree& tree);
int collect (Tree& tree, int num);

