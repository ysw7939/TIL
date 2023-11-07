package Week6;

import java.io.*;
import java.util.Stack;
import java.util.StringTokenizer;

public class 오등큰수 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int N = Integer.parseInt(br.readLine());

        int[] A = new int[1_000_001];
        int[] count = new int[1_000_001];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            int n = Integer.parseInt(st.nextToken());
            A[i] = n;
            count[n]++;
        }

        Stack<Integer> stack = new Stack<>();
        for (int i = 0; i < N; i++) {
            if (stack.empty()) {
                stack.push(i);
            } else {
                if (count[A[stack.peek()]]  >= count[A[i]] ) {
                    stack.push(i);
                } else {
                    A[stack.pop()] = A[i];
                    while ((!stack.empty()) &&  count[A[stack.peek()]] <count[A[i]]) {
                        A[stack.pop()] = A[i];
                    }
                    stack.push(i);
                }
            }
        }
        while (!stack.empty()) {
            A[stack.pop()] = -1;
        }

        for (int i = 0; i < N; i++) {
            bw.write(A[i] +" ");
        }
        bw.flush();
        bw.close();
    }
}
