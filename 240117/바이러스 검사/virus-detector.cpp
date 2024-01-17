#include <iostream>
using namespace std;

long long calc(long long array[], long long n, long long ldr, long long mbr) {
    long long total = 0;
    for (int i = 0; i < n; i++) {
        long long cust = array[i];

        // If there are customers in the restaurant
        if (cust > 0) {
            // Increment the total count for the team leader
            ++total;

            // Calculate the remaining customers after the team leader inspection
            cust -= ldr;

            // If there are remaining customers, calculate the number of team members needed
            if (cust > 0) {
                long long members = (cust + mbr - 1) / mbr;
                total += members;
            }
        }
    }
    return total;
}

int main() {
    long long num;
    cin >> num;
    long long restaurant[num];

    for (int i = 0; i < num; i++) {
        long long people;
        cin >> people;
        restaurant[i] = people;
    }

    long long ldr, mbr;
    cin >> ldr >> mbr;

    long long result = calc(restaurant, num, ldr, mbr);

    cout << result;

    return 0;
}