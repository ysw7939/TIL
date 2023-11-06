package Week6;

import java.io.*;
import java.util.Stack;

public class 쇠막대기 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String S = br.readLine();
        Stack<Character> stack = new Stack<>();
        int bar = 0; //현재 막대의 갯수를 표시함
        int total_bar = 0;
        int total = 0;
        for(char ch : S.toCharArray()) {
            if (ch == '(') {
                stack.push('(');
                bar++;
                total_bar++;
            } else if (ch == ')') {
                if (stack.pop() == '(') {
                    bar--;
                    total += bar; // 레이저 빔
                    stack.push(')');
                    total_bar--;
                } else {
                    bar--;
                    stack.push(')');
                }
            }

        }
        System.out.println(total + total_bar);

    }
}
