#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_K 20
//Brute Force
int max_spend_bf(int m, int k, int prices[][MAX_K]) {
    int max_spend = 0;
    int i,j;
    for (i = 0; i < (1 << k); i++) {
        int spend = 0;
        for (j = 0; j < k; j++) {
            if (i & (1 << j)) {
                spend += prices[j][0];
            }
        }
        if (spend <= m) {
            max_spend = fmax(max_spend, spend);
        }
    }
    if (max_spend == 0) {
        return -1;
    }
    return max_spend;
}

//Dynamic Programming
int max_spend_dp(int m, int k, int prices[][20], int options[20]) {
    int dp[21][201];
    memset(dp, 0, sizeof(dp));
    int i,j,p;
    for (i = 1; i <= k; i++) {
        for (j = 1; j <= m; j++) {
            dp[i][j] = dp[i - 1][j];
            for (p = 0; p < options[i - 1]; p++) {
                if (j >= prices[i - 1][p]) {
                    dp[i][j] = fmax(dp[i][j], dp[i - 1][j - prices[i - 1][p]] + prices[i - 1][p]);
                }
            }
        }
    }
    if (dp[k][m] == 0) {
        return -1;
    }
    return dp[k][m];
}

int main() {
    int m = 20;
    int k = 3;
    int prices[3][20] = {{6, 4, 8}, {5, 10}, {1, 5, 3, 5}};
    int options[3] = {3, 2, 4};
    
    printf("Brute Force\n");
    int max_spend = max_spend_bf(m, k, prices);
    if (max_spend == -1) {
        printf("no solution\n");
    } else {
        printf("%d\n", max_spend);
    }
    
    printf("Dynamic Programming\n");
    int result = max_spend_dp(m, k, prices, options);
    if (result == -1) {
        printf("no solution\n");
    } else {
        printf("%d\n", result);
    }
    return 0;
}

