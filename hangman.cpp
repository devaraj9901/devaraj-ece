#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

string getRandomWord() {
    vector<string> wordList = {"apple", "banana", "computer", "keyboard", "hangman", "elephant", "lion",};
    srand(time(0));
    return wordList[rand() % wordList.size()];
}

void displayHangman(int wrongGuesses) {
    string stages[] = {
        "  +---+\n      |\n      |\n      |\n     ===",
        "  +---+\n  O   |\n      |\n      |\n     ===",
        "  +---+\n  O   |\n  |   |\n      |\n     ===",
        "  +---+\n  O   |\n /|   |\n      |\n     ===",
        "  +---+\n  O   |\n /|\\  |\n      |\n     ===",
        "  +---+\n  O   |\n /|\\  |\n /    |\n     ===",
        "  +---+\n  O   |\n /|\\  |\n / \\  |\n     ==="
    };
    cout << stages[wrongGuesses] << endl;
}

int main() {
    string word = getRandomWord();
    string guessed(word.length(), '_');
    vector<char> wrongLetters;
    int wrongGuesses = 0;
    const int maxGuesses = 6;
    char guess;

    cout << "=== Hangman Game ===\n";

    while (wrongGuesses < maxGuesses && guessed != word) {
        displayHangman(wrongGuesses);
        cout << "\nWord: " << guessed << endl;
        cout << "Wrong guesses: ";
        for (char c : wrongLetters) cout << c << ' ';
        cout << "\nGuess a letter: ";
        cin >> guess;
        guess = tolower(guess);

        if (find(guessed.begin(), guessed.end(), guess) != guessed.end() || 
            find(wrongLetters.begin(), wrongLetters.end(), guess) != wrongLetters.end()) {
            cout << "You already guessed that letter.\n";
            continue;
        }

        bool found = false;
        for (size_t i = 0; i < word.size(); ++i) {
            if (word[i] == guess) {
                guessed[i] = guess;
                found = true;
            }
        }

        if (!found) {
            wrongLetters.push_back(guess);
            ++wrongGuesses;
        }
    }

    displayHangman(wrongGuesses);
    if (guessed == word) {
        cout << "\n🎉 Congratulations! You guessed the word: " << word << "\n";
    } else {
        cout << "\n💀 Game over! The word was: " << word << "\n";
    }

    return 0;
}
