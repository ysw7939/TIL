package Week6;

import java.io.*;
import java.util.Stack;

public class 단어_뒤집기2 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String S = br.readLine();
        Stack<Character> stack = new Stack<>();

        boolean tag  = false;
        for (char ch : S.toCharArray()) {
            if (ch == '<') {
                while (!stack.empty()) {
                    bw.write(stack.pop());
                }
                tag = true;
            }

            if (!tag) {
                if (ch == ' ') {
                    while (!stack.empty()) {
                        bw.write(stack.pop());
                    }
                    bw.write(" ");
                }else {
                    stack.push(ch);
                }
            } else {
                if(ch == '>'){
                    tag = false;
                }
                bw.write(ch);
            }
        }
        while (!stack.empty()) {
            bw.write(stack.pop());
        }

        bw.flush();
        bw.close();
    }

}
