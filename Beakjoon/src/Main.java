import java.io.*;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int E = Integer.parseInt(st.nextToken());
        int S = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        int a=0;
        int b=0;
        int c=0;

        int count =0;
        while (!(a == E && b == S && c == M)) {
            if (a == 15) {
                a = 0;
            }
            if (b == 28) {
                b =0;
            }
            if (c == 19) {
                c =0;
            }
            a++;
            c++;
            b++;
            count++;
        }
        System.out.println(count);
    }
}