#include <stdio.h>
#include <math.h>
 
//��X�e100�ӽ�ơA��bprimes��ư}�C�̦A�L�X 
int main() {
    const int SIZE=100;
    int primes[SIZE];
    int count=0;
    int num=2;
    int bound=0;
    int i=0;
    int is_prime=1;

    while (count<SIZE) {   //</div>
        //�T�{num�O���O��� 
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
    for (i=0; i<SIZE; i++) {  // ���V�L</div>
         printf("%d-th prime=%d\n", (i+1), primes[i]);
    }
    return 0;
}
