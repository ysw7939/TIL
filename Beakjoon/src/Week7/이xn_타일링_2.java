package Week7;

import java.io.*;

public class 이xn_타일링_2 {
    static int count  =0;
    static long memo[];
    static int N;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        N = Integer.parseInt(br.readLine());
        memo = new long[N];

        memo[0] = 1;
        dp(1);
        long result = memo[N-1] ;
        System.out.println(result);

    }

    static private void dp(int i) {
        if (i == N) {
            return;
        }

        if (i % 2 == 0) {
            memo[i] = (memo[i-1] + memo[i - 1] - 1) %10007;
            dp(i + 1);
        } else {
            memo[i] = (memo[i-1] + memo[i - 1] + 1) %10007;
            dp(i + 1);
        }

    }
}
