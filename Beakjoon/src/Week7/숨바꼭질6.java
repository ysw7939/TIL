package Week7;

import java.io.*;
import java.util.Arrays;

public class 숨바꼭질6 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int arr[] = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int many = arr[0];
        int me = arr[1];

        int bros[] = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();

        for (int i = 0; i < many; i++) {
            bros[i] = Math.abs(bros[i]-me);
        }
        int common = bros[0];


        for (int i = 1; i < many; i++) {
            common = gcd(common,bros[i]);
        }
        System.out.println(common);



    }

    public static int gcd(int a, int b) {
        if (b == 0) {
            return a;
        } else {
            return gcd(b, a%b);
        }
    }
}
