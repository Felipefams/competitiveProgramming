import java.util.HashMap;
import java.util.Map;

public class testeHashMap {
    public static void solve(){

    }
   public static void main(String[] args) {
       Map<String, String> map1 = new HashMap<String, String>();
       Map<String, String> map2 = new HashMap<String, String>();
       map1.put("Chaves", "chaves1");
       map1.put("Girafales", "girafales1");
       map2.put("Chaves", "chaves2");
       map2.put("Girafales", "girafales2");
       for(String x : map1.keySet()){
           for(String y : map2.keySet()){
               if(x == y){
                   final String s1 = map1.get(x);
                   final String s2 = map2.get(y);
                   int count = 0;
                   for(int i = 0; i < Math.min(s1.length(), s2.length());i++){
                       if(s1.charAt(i) != s2.charAt(i)){
                           count++;
                           if(count > 1){
                               boolean b = false;

                           }
                       }
                   }
               }
           }
       }

   } 
}
