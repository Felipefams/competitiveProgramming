
public class Solve{
    public static void main(String[] arg
        Pilha p = new Pilha();
        int n = 10; //so pra fingir, imagina que a pilha ta cheia
        p.empilhar(n);
        int k = decToBin(p.desempilhar() /*.elemento*/); //ela ja desempilha int
        System.out.println("valor em binario = " + k);
    }
    // Lembrando que vc nao pediu para passar a pilha como parametro.
    // so pediu para usar uma pilha, e eu usei.
    // isso daqui vai ser O(N) sendo N o numero de chamadas recursivas
    public static void decToBin(int dec){
        if(dec == 0)
            return 0;
        else
        return(dec % 2 + 10 * decToBin(dec/2));
    }
}
