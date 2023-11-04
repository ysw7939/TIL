package Week5;

import java.io.*;

public class 좌표_정렬하기 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int N = Integer.parseInt(br.readLine());

        int count = 0;

        int devil = 665;
        while (true) {
            devil++;
            String s = String.valueOf(devil);

            /**
             * String.valueOf(devil).contains("666") 을사용 하면 좀더 가독성이 좋아짐
             */
            for (int i = 0; i < s.length() - 2; i++) {
                if (s.charAt(i) == '6' && s.charAt(i + 1) == '6' && s.charAt(i + 2) == '6') {
                    count++;
                    break;
                }
            }
            if (count == N) {
                System.out.println(devil);
                break;
            }
        }
    }
}
