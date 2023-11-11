package Week7;

import java.io.*;

public class N_Queen {
    static int[] chess_bord;
    static int count=0;
    static int N;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        N = Integer.parseInt(br.readLine());
        chess_bord = new int[N];

        Nqueen(0);
        System.out.println(count);

    }

    static void Nqueen(int depth) {
        if (depth == N) {
            count++;
            return;
        }

        for (int i = 0; i < N; i++) {
            chess_bord[depth] = i;
            if (check(depth)) {
                Nqueen(depth+1);
            }
        }
    }

    private static boolean check(int col) {
        for (int i = 0; i < col; i++) {
            // 가로축 검사
            if (chess_bord[col] == chess_bord[i]) {
                return false;


            } else if (Math.abs(col-i) == Math.abs(chess_bord[col] - chess_bord[i])) {
                // 대각선 검사
                return false;
            }


        }
        return true;
    }
}
