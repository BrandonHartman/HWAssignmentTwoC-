#include <iostream>
using namespace std;

int getNumberForFactors();
int SquareFree(int integer);

int main() {

    int userInputOne;
    int userInputTwo;

    int firstCounterForPerfectSquare = 0;
    int secondCounterForPerfectSquare = 0;

    cout << "Enter the 1st integer of the pair, between 2 and 5000: " << endl;
    userInputOne = getNumberForFactors();

    cout << "Enter the 2nd integer of the pair, between 2 and 5000: " << endl;
    userInputTwo = getNumberForFactors();

    SquareFree(firstCounterForPerfectSquare);
    SquareFree(secondCounterForPerfectSquare);


    if (firstCounterForPerfectSquare == 0 && secondCounterForPerfectSquare == 0)
        cout << "Therefore, the ordered pair (" << userInputOne << "," << userInputTwo << ") is SWEET.";

    else if (firstCounterForPerfectSquare == 0 && secondCounterForPerfectSquare >= 1)
        cout << "Therefore, the ordered pair (" << userInputOne << "," << userInputTwo << ") is SOUR.";

    else if (firstCounterForPerfectSquare >= 1 && secondCounterForPerfectSquare == 0)
        cout << "Therefore, the ordered pair (" << userInputOne << "," << userInputTwo << ") is SALTY.";

    else
        cout << "Therefore, the ordered pair (" << userInputOne << "," << userInputTwo << ") is BITTER.";
}

int getNumberForFactors() {

    int numberEnteredByUser;

    cin >> numberEnteredByUser;

    while (numberEnteredByUser < 2 || numberEnteredByUser > 5000) {

        cout << "That number is not between 2 and 5000.";
        cin >> numberEnteredByUser;

    }
    return numberEnteredByUser;

}

int SquareFree(int integer){
    int count;
    for (int loopInteger = 2; loopInteger * loopInteger <= integer; loopInteger++){

        if (integer % (loopInteger * loopInteger) == 0){

            cout << integer << " has these factors that are (<1), that are squares: " << loopInteger * loopInteger;
            cout << endl;
            cout << integer << "is not square free.";
            count++;

        }
        else {
            cout << integer <<" doesn't have any factors that are square. ";
            cout << endl;
            cout << integer << " is square free. ";
        }
        return count;

    }
}
