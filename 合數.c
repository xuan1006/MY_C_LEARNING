#include <stdio.h> 
#include <math.h> 

int main() {
    int total=100;
    int nlist[total];
    int count=0;
    int num=2, bound=0, i=0;

    while (count<total) {</div>
        // 找合數: num是不是? 
        bound = (int)sqrt(num);
        for (i=2; i<=bound; i++) {
            if (num%i == 0) {
                // 合數!!
                //nlist[count] = num;
                //count++; 
                nlist[count++] = num;
                break;
            }
        }
        num++;
    }
    for (i=0; i<total; i++)</div>
        printf("%d ", nlist[i]);
    printf("\n");

    return 0;
}
