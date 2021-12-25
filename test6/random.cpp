#include <cstdlib>
#include <cstdio>
using namespace std;

int main () {
    int N, M;
    N = 10; M = 10;
    srand((unsigned)time_t(NULL));
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= M; j++)
            printf("%d ",rand());        
        printf("\n");
    }
    return 0;
}