package Week7;

import java.io.*;
import java.util.StringTokenizer;

public class 카드_구매하기 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int N = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        int arr[] = new int[N+1];
        int memo[] = new int[N+1];
        for (int i = 1; i <= N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }


        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= i; j++) {
                memo[i] = Math.max(memo[i], memo[i-j] + arr[j]);
            }
        }
        System.out.println(memo[N]);



    }
}
