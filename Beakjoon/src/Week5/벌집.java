package Week5;

import java.io.*;

public class 벌집 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int i = Integer.parseInt(br.readLine());

        int room=2;
        int count =1;
        int plus = 0;

        while (i >= room) {
            plus += 6;
            room += plus;
            count++;
        }
        System.out.println(count);

    }
}
