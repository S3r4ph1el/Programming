import java.util.Scanner;

class Conta{

     private int numeroConta;
     private String nomeCliente;
     private double saldo;
     private int senha;

     public Conta(int numeroConta, int senha, String nomeCliente, double saldo){
          this.numeroConta = numeroConta;
          this.senha = senha;
          this.nomeCliente = nomeCliente;
          this.saldo = saldo;
     }

     public boolean sacar(double valor, int senha){
          if (this.saldo >= valor && this.senha == senha){
               this.saldo -= valor;
               return true;
          } else {
               return false;
          }
     }

     public boolean depositar(double valor, int senha){
          if (valor > 0 && this.senha == senha){
               this.saldo += valor;
               return true;
          } else {
               return false;
          }
     }

     public boolean transferencia(Conta contaDestino, double valor, int senha){
          if (this.saldo >= valor && this.senha == senha){
               this.saldo -= valor;
               contaDestino.saldo += valor;
               return true;
          } else {
               return false;
          }
     }

     public double getSaldo(int senha){
          if (this.senha == senha){
               return this.saldo;
          } else {
               return -1;
          }
     }

     public String getNome(){
          return this.nomeCliente;
     }

     public int getNumeroConta(){
          return this.numeroConta;
     }

}

public class l2_e4{  //use modificador de acesso (public) apenas para a classe principal 

     public static void main(String[] args) {

          int numeroConta, senha, op;
          double valor;
          String nomeCliente;

          Scanner scanner = new Scanner(System.in);

          String input = scanner.nextLine();
          String[] parts = input.split(" ");
          numeroConta = Integer.parseInt(parts[0]);
          senha = Integer.parseInt(parts[1]);
          nomeCliente = parts[2];
          valor = Double.parseDouble(parts[3]);
          
          Conta conta1 = new Conta(numeroConta, senha, nomeCliente, valor);

          input = scanner.nextLine();
          parts = input.split(" ");
          numeroConta = Integer.parseInt(parts[0]);
          senha = Integer.parseInt(parts[1]);
          nomeCliente = parts[2];
          valor = Double.parseDouble(parts[3]);

          Conta conta2 = new Conta(numeroConta, senha, nomeCliente, valor);

          boolean running = true;
          while(running){
               op = scanner.nextInt();
               scanner.nextLine();

               switch (op) {
                    case 1:
                         senha = scanner.nextInt();
                         scanner.nextLine();
                         double saldoAtual = conta1.getSaldo(senha);
                         if (saldoAtual != -1) {
                              System.out.printf(java.util.Locale.US, "%.2f", saldoAtual);
                              System.out.println();
                         } else {
                              System.out.println("senha incorreta");
                         }
                         break;
                    case 2:
                         input = scanner.nextLine();
                         parts = input.split(" ");
                         valor = Double.parseDouble(parts[0]);
                         senha = Integer.parseInt(parts[1]);
                         if (conta1.sacar(valor, senha)) {
                              System.out.println("saque realizado");
                         } else {
                              System.out.println("saque não realizado");
                         }
                         break;
                    case 3:
                         input = scanner.nextLine();
                         parts = input.split(" ");
                         valor = Double.parseDouble(parts[0]);
                         senha = Integer.parseInt(parts[1]);
                         if (conta1.depositar(valor, senha)) {
                              System.out.println("depósito realizado");
                         } else {
                              System.out.println("depósito não realizado");
                         }
                         break;
                    case 4:
                         nomeCliente = scanner.nextLine();
                         if (conta2.getNome().equals(nomeCliente)) {
                              input = scanner.nextLine();
                              parts = input.split(" ");
                              valor = Double.parseDouble(parts[0]);
                              senha = Integer.parseInt(parts[1]);
                              if (conta1.transferencia(conta2, valor, senha)) {
                                   System.out.println("transferência realizada");
                              } else {
                                   System.out.println("transferência não realizada");
                              }
                         } else {
                              System.out.println("nenhum usuário encontrado");
                         }
                         break;
                    default:
                         running = false;
                         break;
               }
          }

          scanner.close();
          scanner.close();
          
     }

}