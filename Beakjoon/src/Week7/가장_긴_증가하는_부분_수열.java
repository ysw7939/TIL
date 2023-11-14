package Week7;

import java.io.*;
import java.util.Arrays;

public class 가장_긴_증가하는_부분_수열 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int N = Integer.parseInt(br.readLine());
        int arr[] = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int dp[] = new int[N];

        dp[0] = 1;
        for (int i = 1; i < N; i++) {
            for (int j = 1; j <= i; j++) {
                if (arr[i - j] < arr[i]) {
                    dp[i] = Math.max(dp[i], dp[i-j]+1);
                }else {
                    if(dp[i] > dp[i-j]){
                        continue;
                    }else {
                        dp[i] = Math.max(dp[i], 1);
                    }

                }
            }
        }


        Arrays.sort(dp);
        System.out.println(dp[N-1]);

    }
}
