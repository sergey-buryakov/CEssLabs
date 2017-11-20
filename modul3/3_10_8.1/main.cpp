#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void) {
    int maxball;
    int ballsno;

    cout << "Max ball number? ";
    cin >> maxball;
    cout << "How many balls? ";
    cin >> ballsno;
    srand(time(NULL));

    int *rands;
    rands = new int[ballsno];
    for (int i = 0; i < ballsno; i++) {

        rands[i] = rand() % maxball + 1;

        for (int j = 0; j < i; ) {
            if (rands[i] == rands[j]) {
                rands[i] = rand() % maxball + 1;
                j = 0;
            }
            else
                j++;
        }
        cout << rands[i] << " ";
    }

    return 0;
}
