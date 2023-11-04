package Week6;

import java.io.*;
import java.util.*;

public class 요세푸스 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int num[] = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int N = num[0];
        int K = num[1];
        ArrayList<Integer> result = new ArrayList<>();
        Queue<Integer> queue = new LinkedList<>();
        for (int i = 1; i <= N; i++) {
            queue.offer(i);
        }
        while (!queue.isEmpty()) {
            for (int i = 1; i < K; i++) {
                queue.offer(queue.poll());
            }
            result.add(queue.poll());
        }
        bw.write("<");
        for (int i = 0; i < N; i++) {
            if (i == N - 1) {
                bw.write(result.get(i) + ">");
            } else {
                bw.write(result.get(i) + ", ");
            }
        }

        bw.flush();
        bw.close();


    }
}
