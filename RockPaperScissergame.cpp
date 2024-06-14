#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0)); 
    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "Enter your choice (rock, paper, or scissors): ";
    
    string userChoice;
    cin >> userChoice;

    for (char &c : userChoice) {
        c = tolower(c);
    }

    int computerChoice = rand() % 3; 

    string computerChoiceStr;
    switch(computerChoice) {
        case 0:
            computerChoiceStr = "rock";
            break;
        case 1:
            computerChoiceStr = "paper";
            break;
        case 2:
            computerChoiceStr = "scissors";
            break;
    }
    cout << "I chose: " << computerChoiceStr << endl;

    if (userChoice == computerChoiceStr) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == "rock" && computerChoiceStr == "scissors") ||
               (userChoice == "paper" && computerChoiceStr == "rock") ||
               (userChoice == "scissors" && computerChoiceStr == "paper")) {
        cout << "Congratulations! You win!" << endl;
    } else {
        cout << "I  won you lost hahaha!" << endl;
    }

    return 0;
}