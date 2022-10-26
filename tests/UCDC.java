public class UCDC {
	//conta principal
	public static class Account{
		String nome;
		int numero;
		double saldo;
		public Account(String nome, int numero, double saldo){
			this.nome = nome;
			this.numero = numero;
			this.saldo = saldo;
		}
	}

	//variacao business
	public static class businessAccount extends Account{
		double limite;
		public businessAccount(String nome, int numero, double saldo, double limite){
			super(nome, numero, saldo);
			this.limite = limite;
		}
	}

	//variacao savings
	public static class savingsAccount extends Account{
		double juros;
		public savingsAccount(String nome, int numero, double saldo, double juros){
			super(nome, numero, saldo);
			this.juros = juros;
		}
	}
	/*			 _______
	 *			|Account|
	 *			|_______|
	 *			/		\
	 *		   /		 \
	 *		  /		  	  \
	 *	 ______________		 ______________
	 *	|businessAccount|	|savingsAccount|
	 *	|_______________|	|______________|
	 */
	 *
	 *
	 *
	 * */

	public static void main(String[] args) {
		//upcasting
		Account b = new Account("nome", 1, 100);
		businessAccount b2 = new businessAccount("nome", 1, 100, 100);
		Account acc1 = b2;
		savingsAccount s_acc = new savingsAccount("nome", 1, 100, 100);
		//downcasting
		//desse jeito aqui a gente consegue fazer um casting do objeto da superclasse pra subclasse, eh tipo um casting normal de double pra int mesmo 
		businessAccount acc2 = (businessAccount) acc1;
		//se a gente fizer isso daqui, o compilador nao vai pingar o erro, mas vai dar problema na hora de rodar, porque o objeto s_acc eh do tipo savingsAccount, e apesar de savingsAccount ser uma account, ela nao eh uma businessAccount
		businessAccount acc3 = (businessAccount) s_acc;
	
	}

}
