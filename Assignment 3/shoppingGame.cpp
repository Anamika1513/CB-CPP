/* Faculty at CodingBlocks loves to purchase smartphones and decides to play a game.
Aayush and Harshit decides to shop for smartphones. Aayush purchases 1 smartphone, 
then Harshit purchases 2 smartphones, then Aayush purchases 3 smartphones, 
then Harshit purchases 4 smartphones, and so on.
Once someone can't purchase more smartphones, he loses.
Aayush can purchase at most M smartphones and Harshit can purchase at most N smartphones. Who will win ? 
Print "Aayush" and "Harshit" accordingly.*/

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int M, N;
        cin >> M >> N;

        int a = 0, h = 0;
        int turn = 1;

        while (true) {
            if (turn % 2 == 1) {
                a += turn;
                if (a > M) {
                    cout << "Harshit" << endl;
                    break;
                }
            } else {
                h += turn;
                if (h > N) {
                    cout << "Aayush" << endl;
                    break;
                }
            }
            turn++;
        }
    }
    return 0;
}
