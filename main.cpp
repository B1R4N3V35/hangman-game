#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "show_header.h"
#include "draw_word.h"
#include "show_spaces.h"
#include "missed.h"
#include "guess.h"
#include "show_word.h"
#include "show_missed.h"
#include "end_game.h"
#include "show_menu.h"

using namespace std;

int main () {

  const string game_title = "HANGMAN GAME";
  string word_bank;
  string secret_word;
  const int max_attempts = 5;
  map<char, bool> guessed;
  vector<char> missed_guesses;

  show_header(game_title, max_attempts);
  word_bank = show_menu();
  secret_word = draw_word(word_bank);
  show_spaces(secret_word);

  while (missed(secret_word, guessed) && missed_guesses.size() < max_attempts) {

    guess(guessed, missed_guesses, secret_word);
    show_word(secret_word, guessed);

    if (missed_guesses.size() > 0)
      show_missed(missed_guesses);

  }

  end_game(secret_word, guessed, word_bank);

  return 0;

}