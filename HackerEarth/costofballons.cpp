#include <iostream>
using namespace std;

int main() {
    int testcases;
    cin >> testcases;

    for(int i=0;i<testcases;i++) {
        int greencost, purplecost;
        int num_p;
        cin >> greencost >> purplecost;
        cin >> num_p;

        int problem1 = 0;
        int problem2 = 0;
        int solved[2 * num_p];

        for (int i = 0; i < 2 * num_p; i++) {
            cin >> solved[i];
        }

        for (int i = 0; i < 2 * num_p; i += 2) {
            if (solved[i] == 1) {
                problem1++;
            }
        }

        for (int i = 1; i < 2 * num_p; i += 2) {
            if (solved[i] == 1) {
                problem2++;
            }
        }

        int totalgreencost, totalpurplecost;

        if (problem1 > problem2) {
            if (greencost > purplecost) {
                totalpurplecost = problem1 * purplecost;
                totalgreencost = problem2 * greencost;
            } else {
                totalgreencost = problem1 * greencost;
                totalpurplecost = problem2 * purplecost;
            }
        } else {
            if (greencost > purplecost) {
                totalpurplecost = problem2 * purplecost;
                totalgreencost = problem1 * greencost;
            } else {
                totalgreencost = problem2 * greencost;
                totalpurplecost = problem1 * purplecost;
            }
        }

        int totalcost = totalgreencost + totalpurplecost;
        cout << totalcost << endl;
    }

    return 0;
}
