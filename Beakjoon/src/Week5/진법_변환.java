package Week5;

import java.io.*;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.StringTokenizer;

public class 진법_변환 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        String B = st.nextToken();
        double N = Integer.parseInt(st.nextToken());
        long result = 0;
        int x =0;
        for (int i = B.length()-1; i >= 0 ; i--) {
            //System.out.println(String.valueOf(B.charAt(i)));

            try {
                result += (long) (Integer.parseInt(String.valueOf(B.charAt(i))) * Math.pow(N, x));
            } catch (NumberFormatException e) {
                result += (long) ((B.charAt(i) -'A'+10) * Math.pow(N, x));
            }
            x++;
        }
        System.out.println(result);


    }



}