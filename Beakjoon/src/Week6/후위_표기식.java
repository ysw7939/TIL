package Week6;

import java.io.*;
import java.util.HashMap;
import java.util.Map;
import java.util.Stack;

public class 후위_표기식 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String A = br.readLine();
        Map<Character, Integer> map = new HashMap<>();
        map.put('*', 2);
        map.put('/', 2);
        map.put('-', 1);
        map.put('+', 1);
        map.put('(', 0);
        Stack<Character> stack = new Stack<>();

        for (char ch : A.toCharArray()) {
            if (ch >= 'A' && ch <= 'Z') {
                bw.write(ch);
            } else if (ch == ')') {
                while (!stack.empty()) {
                    if (stack.peek() == '(') {
                        stack.pop();
                        break;
                    }
                    bw.write(stack.pop());
                }
            } else if (ch == '(') {
                stack.push(ch);
            } else {
                while (!stack.empty() && map.get(stack.peek()) >= map.get(ch)) {
                    bw.write(stack.pop());
                }
                stack.push(ch);
            }
        }
        while (!stack.empty()) {
            if (stack.peek() == '(') {
                stack.pop();
            }
            bw.write(stack.pop());
        }
        bw.flush();
        bw.close();


    }
}
