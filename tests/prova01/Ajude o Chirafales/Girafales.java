import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

public class Girafales {

    public static int solve(Map<String, String> map1, Map<String, String> map2) {
        int ww = 0;
        for (String x : map1.keySet()) {
            for (String y : map2.keySet()) {
                if (x.equals(y)) {
                    final String s1 = map1.get(x);
                    final String s2 = map2.get(x);
                    int count = 0;
                    for (int i = 0; i < Math.min(s1.length(), s2.length()); i++) {
                        if (s1.charAt(i) != s2.charAt(i)) {
                            count++;
                            if (count > 1) {
                                ww++;
                                break;
                            }
                        }

                    }
                }
            }
        }
        return ww;
    }

    public static void main(String[] args) {
        FastReader fr = new FastReader();
        int c = 1;
        Map<String, String> map1 = new HashMap<String, String>();
        Map<String, String> map2 = new HashMap<String, String>();
        while (true) {
            int t = fr.nextInt();
            if (t == 0) {
                break;
            }
            if (c < 2) {
                map1.clear();
                map2.clear();
                while (t-- > 0) {
                    String s = fr.nextLine();
                    String[] tmp = s.split(" ");
                    map1.put(tmp[0], tmp[1]);
                }
                c++;
            }else{
                while (t-- > 0){
                    String s = fr.nextLine();
                    String[] tmp = s.split(" ");
                    map2.put(tmp[0], tmp[1]);
                }
                System.out.println(solve(map1, map2));
                c = 1;
            }
        }

    }

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(
                    new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
}
