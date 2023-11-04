package Week5;

import java.io.*;
import java.util.Arrays;
import java.util.HashMap;
import java.util.StringTokenizer;

public class 좌표_압축 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int N = Integer.parseInt(br.readLine());
        int arr[] = new int[N];
        int sorted[] = new int [N];
        StringTokenizer st = new StringTokenizer(br.readLine());

        HashMap<Integer, Integer> Intmap = new HashMap<>();


        for (int i = 0; i < N; i++) {
            arr[i] = sorted[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(sorted);

        int rank=0;
        for (int i : sorted) {
            if (!Intmap.containsKey(i)) {
                Intmap.put(i,rank );
                rank++;
            }
        }
        for (int i : arr) {
            bw.write(Intmap.get(i)+" ");
        }
        bw.flush();
        bw.close();


    }
}
