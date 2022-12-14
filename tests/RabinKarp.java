public class RabinKarp {

   private String pat;  
   private long patHash;  // hash do padrão
   private int M;
   private long Q;
   private int R = 256;
   private long RM;

   public RabinKarp(String pat) {
      this.pat = pat;
      M = pat.length();
      Q = longRandomPrime();
      RM = 1;
      for (int i = 1; i <= M-1; i++) // calcula R^(M-1)%Q
         RM = (R * RM) % Q;
      patHash = hash(pat, M);
   }

   private long hash(String key, int M) {
      long h = 0;
      for (int j = 0; j < M; j++)
         h = (R * h + key.charAt(j)) % Q;
      return h;
   }

   private int search(String txt) {
      int N = txt.length();
      long txtHash = hash(txt, M);
      if (patHash == txtHash && check(txt, 0)) // casamento
         return 0; 
      for (int i = 1; i <= N - M; i++) {
         txtHash = (txtHash + Q - RM*txt.charAt(i-1) % Q) % Q;
         txtHash = (txtHash * R + txt.charAt(i+M-1)) % Q;
         if (patHash == txtHash)
            if (check(txt, i)) 
               return i; // casamento
      }
      return N; // nenhum casamento
   }

   public boolean check(String txt, int i) { 
      return true; // Monte Carlo
   } 
}
