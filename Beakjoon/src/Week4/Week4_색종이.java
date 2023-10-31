package Week4;

import java.io.*;
import java.util.StringTokenizer;

public class Week4_색종이 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        boolean[][] booleans = new boolean[100][100];

        /**
         * 도화지를 불리언 배열로 두고 색종이 만큼 true로 변경
         */

        int count = 0;
        int num = Integer.parseInt(br.readLine());
        for (int i = 0; i < num; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            for (int j = a - 1; j < a + 9; j++) {
                for (int k = b - 1; k < b + 9; k++) {
                    booleans[j][k] = true;
                }
            }
        }
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j < 100; j++) {
                if (booleans[i][j]) {
                    count++;
                }
            }
        }
        System.out.println(count);

    }
}
