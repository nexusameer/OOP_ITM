#include "MathChallenge.h"
#include <cstdlib>
#include <ctime>

using namespace std;

MathChallenge::MathChallenge() : Game("Math Challenge") {}

void MathChallenge::play() {
    srand(time(0));
    int a = rand() % 100, b = rand() % 100;
    cout << "Solve: " << a << " + " << b << " = ?" << endl;
    int answer;
    cin >> answer;
    if (answer == a + b) {
        cout << "Correct! You earned a Math Badge.\n";
    }
    else {
        cout << "Incorrect. Try again next time.\n";
    }
}
