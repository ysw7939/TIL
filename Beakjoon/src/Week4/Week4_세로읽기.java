package Week4;

import java.io.*;

public class Week4_세로읽기 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String[][] strings = new String[5][15];
        for (int i = 0; i < 5; i++) {
            strings[i] = br.readLine().split("");
        }
        /**
         * 원래는 null일 경우 continue를 할생각이였지만  9번째 줄처럼 배열을 넣다보니
         * 들어온 배열의 크기만큼 길이가 변경되어서 ArrayIndexOutOfBoundsException 오류 발생함
         * 그래서 try catch문을 이용함
         */

        for (int i = 0; i < 15; i++) {
            for (int j = 0; j < 5; j++) {
                try {
                    bw.write(strings[j][i]);
                } catch (Exception e) {
                    continue;
                }
            }
        }
        bw.flush();
        bw.close();

    }
}