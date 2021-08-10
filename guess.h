#pragma once
#include <string>
#include <vector>
#include <map>

void guess(std::map<char, bool> &guessed, std::vector<char> &missed_guesses, std::string &secret_word, int &errors);