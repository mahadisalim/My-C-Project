#include <iostream>
using namespace std;

int main() {
    int score = 0;
    int answer;

    cout << "Welcome to the C++ Quiz Program! 🎉" << endl;

 // Question 1
    cout << "\nQuestion 1: What is the file extension for C++?\n";
    cout << "1) .c\n2) .cpp\n3) .py\n4) .java\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 2) {
        cout << "Correct answer! ✅\n";
        score++;
    } else {
        cout << "Wrong answer ❌\n";
    }

  // Question 2
    cout << "\nQuestion 2: Which command is used to display output in C++?\n";
    cout << "1) print\n2) console.log\n3) cout\n4) echo\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 3) {
        cout << "Correct answer! ✅\n";
        score++;
    } else {
        cout << "Wrong answer ❌\n";
    }

   // Question 3
    cout << "\nQuestion 3: What functions are a must-have to start C++ programming?\n";
    cout << "1) start()\n2) main()\n3) begin()\n4) init()\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 2) {
        cout << "Correct answer! ✅\n";
        score++;
    } else {
        cout << "Wrong answer ❌\n";
    }

    // Quiz over, show score
    cout << "\n🎉 Your total score: " << score << " / 3\n";

    if (score == 3) {
        cout << "Awesome! You fixed it all!" \n";
    } else if (score == 2) {
        cout << "Good! Try a little harder!" 💪\n";
    } else {
        cout << "No problem, just practice more!" 😊\n";
    }

    return 0;
}
