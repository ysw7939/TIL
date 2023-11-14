import java.io.*;
import java.util.*;

public class Test {
    static int[] prices;
    static int[] dp;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        prices = new int[n + 1];
        dp = new int[n + 1];

        for (int i = 1; i <= n; i++) {
            prices[i] = scanner.nextInt();
        }

        int result = getMaxPayment(n);
        System.out.println(result);
    }

    static int getMaxPayment(int n) {
        if (n == 0) {
            return 0;
        }

        if (dp[n] != 0) {
            return dp[n];
        }

        for (int i = 1; i <= n; i++) {
            int currentPayment = prices[i] + getMaxPayment(n - i);
            dp[n] = Math.max(dp[n], currentPayment);
        }

        return dp[n];
    }
}
