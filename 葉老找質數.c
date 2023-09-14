#include <stdio.h>
#include <math.h>
 
//找出前100個質數，放在primes整數陣列裡再印出 
int main() {
    const int SIZE=100;
    int primes[SIZE];
    int count=0;
    int num=2;
    int bound=0;
    int i=0;
    int is_prime=1;

    while (count<SIZE) {   //</div>
        //確認num是不是質數 
        bound = (int)sqrt(num);
        is_prime = 1;
        for (i=2; i<=bound; i++) {
            if (num%i==0) {
                // not a prime
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1) {  // prime found
            primes[count] = num;
            count++;
        }
        num++; 
    }
    for (i=0; i<SIZE; i++) {  // 順向印</div>
         printf("%d-th prime=%d\n", (i+1), primes[i]);
    }
    return 0;
}
