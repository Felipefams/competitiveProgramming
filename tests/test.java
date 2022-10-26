public class test {
	public static class bankAccount{
		String nome;
		int numero;
		double saldo;
		public bankAccount(String nome, int numero, double saldo){
			this.nome = nome;
			this.numero = numero;
			this.saldo = saldo;
		}
	}
	public static class businessAccount extends bankAccount{
		double limite;
		public businessAccount(String nome, int numero, double saldo, double limite){
			super(nome, numero, saldo);
			this.limite = limite;
		}
	}

	public static void main(String[] args) {
		bankAccount b = new bankAccount("nome", 1, 100);
		businessAccount b2 = new businessAccount("nome", 1, 100, 100);
		bankAccount acc1 = b2;
		System.out.println("Hello World!");

	}

}
