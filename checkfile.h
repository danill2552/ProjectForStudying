#pragma once
#include <fstream>

bool checkin(std::ifstream& fin, std::ofstream& fout);
bool checkout(std::ifstream& fin, std::ofstream& fout);

//git