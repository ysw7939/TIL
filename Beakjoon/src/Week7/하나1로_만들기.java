package Week7;

import java.io.*;

public class 하나1로_만들기 {
    static int result =123456789;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int N = Integer.parseInt(br.readLine());
        dp(N,0);
        System.out.println(result);

    }

    public static void dp(int x, int depth) {
        if(result<= depth){
            return;
        }
        if (x == 1) {
            result = Math.min(result,depth);
            return;
        }
        if (x % 3 == 0) {
            dp(x/3 , depth+1);
        }
        if (x %2 ==0) {
            dp(x/2, depth+1);
        }
        dp(x-1, depth+1);
    }
}
