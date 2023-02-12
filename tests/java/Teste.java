import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Queue;
import java.util.Stack;
import java.util.TreeSet;
import java.util.concurrent.ConcurrentLinkedQueue;

public class Teste {

    static void resolver(String str, int x) {
		String solucao = "";
        int z = str.length() % x;//resto
        int k = str.length()/x;//  
        Queue<String> q = new ConcurrentLinkedQueue<>();
        int ptr = 0;
        for(int i = 0; i < str.length(); i += k-1){
            if(i + k-1 >= str.length()){
                ptr = i; 
                break;
            }
            String s = str.substring(i, i+k-1);
            q.add(s);
        }
        //pra evitar O(n^2) quando for inserir no inicio da string
        Stack<Character> st = new Stack<>();
        String end = "";
        int count = 0;
        if(ptr != 0)
        for(int i = ptr; i < str.length(); ++i, ++count){
            if(count % 2 == 0){
                st.push(str.charAt(i));
            }else{
                end += str.charAt(i);
            }
        }
        while(!st.empty()) solucao += st.pop();
        count = 0;
        while(!q.isEmpty()){
            if(count % 2 == 0){
                solucao += q.poll();
            }else{
                StringBuilder sb = new StringBuilder(q.poll());
                solucao += sb.reverse().toString();
            }
            count++;
        } 
        solucao += end;
        System.out.println(solucao);
		// return solucao;
    }

    public static void main(String[] args) {
        resolver("STRINGCOMSOBRAFOUR", 5);
    }

}
