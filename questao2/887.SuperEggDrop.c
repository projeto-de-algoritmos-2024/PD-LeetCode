#include <stdio.h>
#include <stdlib.h>

int superEggDrop(int k, int n) {
    // Tentativas máximas possíveis
    int t = 0;
    
    // Matriz DP onde dp[t][k] representa o número máximo de andares testáveis com t tentativas e k ovos
    int dp[k + 1][n + 1];

    // Inicializa DP
    for (int i = 0; i <= k; i++) {
        for (int j = 0; j <= n; j++) {
            dp[i][j] = 0;
        }
    }

    // Enquanto não for possível testar todos os andares, aumentamos as tentativas
    while (dp[k][t] < n) {
        t++;
        for (int eggs = 1; eggs <= k; eggs++) {
            dp[eggs][t] = 1 + dp[eggs - 1][t - 1] + dp[eggs][t - 1];
        }
    }
    
    return t;
}

