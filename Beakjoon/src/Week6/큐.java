package Week6;

import java.io.*;
import java.util.Deque;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class 큐 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int N = Integer.parseInt(br.readLine());
        Queue<Integer> queue = new LinkedList<Integer>();
        for (int i = 0; i < N; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            String order = st.nextToken();
            switch (order) {
                case "push" : queue.add(Integer.parseInt(st.nextToken()));break;
                case "pop" :
                    if (queue.isEmpty()) {
                        bw.write("-1\n");break;
                    } else {
                        bw.write(queue.poll()+"\n");break;
                    }
                case "size" : bw.write(queue.size()+"\n");break;
                case "empty" :
                    if (queue.isEmpty()) {
                        bw.write("1\n");break;
                    } else {
                        bw.write("0\n");break;
                    }
                case "front" :
                    if (queue.isEmpty()) {
                        bw.write("-1\n");break;
                    } else {
                        bw.write(queue.peek()+"\n");break;
                    }
                case "back" :
                    if (queue.isEmpty()) {
                        bw.write("-1\n");break;
                    } else {
                        bw.write(((LinkedList<Integer>) queue).peekLast()+"\n");break;
                    }
            }


        }
        bw.flush();
        bw.close();
    }

}
