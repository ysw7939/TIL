package Week7;

import java.io.*;
import java.util.Arrays;

public class 조합_0의_개수 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int nums[] = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int N = nums[0];
        int M = nums[1];

        int five = count_five(N) - count_five(N-M) - count_five(M);
        int two = count_two(N) - count_two(N-M) - count_two(M);

        if (five > 0 && two > 0) {
            System.out.println(Math.min(five,two));
        }else {
            System.out.println(0);
        }
    }

    public static int count_five(int i) {
        int sum=0;
        while (i >= 5) {
            sum += i/5;
            i /= 5;
        }
        return sum;
    }

    public static int count_two(int i) {
        int sum=0;
        while (i >= 2) {
            sum += i/2;
            i /=2;
        }
        return sum;
    }
}
