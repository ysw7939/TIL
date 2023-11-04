package Week5;

import java.io.*;
import java.util.StringTokenizer;

public class 체스판_다시_칠하기 {
    static boolean board[][];
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        board = new boolean[N][M];


        /**
         * 랜덤한 사이즈로 주어지는 체스판을 검사하기 쉽도록 boolean 배열로 받았다.
         */
        for (int i = 0; i < N; i++) {
            String s = br.readLine();
            for (int j = 0; j < M; j++) {
                if (s.charAt(j) == 'W') {
                    board[i][j] = true;
                } else {
                    board[i][j] = false;
                }
            }
        }

        /**
         * result에 큰값을 주어 가장 작은 리턴값을 받는게 최종 정답이된다.
         * 모든 범위만큼 반복하면서 8*8만큼의 공간을 넘어가지 않는다면 체스판 검사를 하였다.
         */

        int result = 123456789;
        for (int i = 0; i < N; i++) {

            for (int j = 0; j < M; j++) {
                if(i+8<=N && j+8<=M) {
                    int min = Math.min(check_board(i,j, false), check_board(i,j, true));
                    result = Math.min(result, min);
                }
            }
        }

        System.out.println(result);

    }

    /**
     * 체스판 검사::
     * 체스판은 8*8 사이즈이기 떄문에 8번 반복해 주면서 엇갈리면서 흰색과 검은색이 나와야한다.
     * 시작은 검은색으로 시작해도 되고 흰색으로 시작해도 된다.
     * 1번 째줄 마지막 색과 2번째줄 첫번 째 색이 같기 떄문에 내부 반복문이 끝나면 temp값을 동일하게 바꿔준다.
     * 엇갈리는것을 올바르게 검색하기 위함
     */
    static int check_board(int y, int x, boolean bool){

        boolean temp = bool;
        int count =0;
        for (int i = y; i < y + 8; i++) {
            for (int j = x; j < x + 8; j++) {

                if (!(temp ^ board[i][j])) {
                    count++;
                }
                temp = !temp;
            }
            temp = !temp;
        }
        return count;
    }

}
