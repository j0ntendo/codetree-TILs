#include <iostream>
using namespace std;


long long calc(long long array[], long long n, long long ldr, long long mbr){
    long long total = 0;
    for (int i = 0; i < n; i++){
        if ((array[i] - ldr) == 0){
            ++total;
        } else {
            long long cust = array[i] - ldr;
            if (cust % mbr == 0){
                total++;
            } else{
                total++;
            }
        }
        
    }
        return total;
    }


int main() {
    long long num;
    cin >> num;
    long long restaurant[num];

    for (int i = 0; i < num; i++){
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