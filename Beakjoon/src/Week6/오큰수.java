package Week6;

import java.io.*;
import java.util.Arrays;
import java.util.Stack;

public class 오큰수 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int N = Integer.parseInt(br.readLine());
        int A[] = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        Stack<Integer> stack = new Stack<>();
        for (int i = 0; i < N; i++) {
            if (stack.empty()) {
                stack.push(i);
            } else {
                if (A[stack.peek()] >= A[i]) {
                    stack.push(i);
                } else {
                    A[stack.pop()] = A[i];
                    while ((!stack.empty()) && A[stack.peek()] < A[i]) {
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
