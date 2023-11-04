package Week6;

import java.io.*;
import java.util.Stack;

public class 스택_수열 {
    public class Main {
        public static void main(String[] args) throws IOException {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
            StringBuilder sb = new StringBuilder();


            int times = Integer.parseInt(br.readLine());
            Stack<Integer> stack = new Stack<>();
            int comma = 0;

            for (int i = 1; i <= times; i++) {
                int n = Integer.parseInt(br.readLine());
                if (n <= comma) {

                    if (stack.peek() == n) {
                        sb.append("-" + "\n");
                        stack.pop();
                    } else {
                        System.out.println("NO");
                        return;
                    }
                } else {
                    while (comma < n) {
                        comma++;
                        sb.append("+" + "\n");
                        stack.push(comma);
                    }
                    sb.append("-" + "\n");
                    stack.pop();
                }
            }
            System.out.println(sb);

        }
    }
}
