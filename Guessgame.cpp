#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0)); 
    int secretNum = rand() % 100 + 1; 
    int guess;
    int chances = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Can you guess it?" << endl;

    do {cout<<"Enter 0 if u want to quit"<<endl;
        cout << "Enter your guess : ";
        cin >> guess;
        chances++;

         if(guess==0){
              cout<<"YOU QUIT"<<endl;
              cout<<"The number is : "<<secretNum<<endl;
              cout<<"Oooh you were soo close. Try again!!!"<<endl;
              break;
        }
    
        else if (guess > secretNum)
            cout << "Too high! Try again." << endl;

        else if (guess < secretNum)
            cout << "Too low! Try again." << endl; 

        else
            cout << "Congratulations! You've guessed the correct number in " << chances << " chances!" << endl;
    } while (guess != secretNum);

    return 0;
}