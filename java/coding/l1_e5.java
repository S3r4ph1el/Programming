package coding;
import java.util.Scanner;

class Produto {
    String nome;
    int quantidade;

    public Produto(String nome, int quantidade) {
        this.nome = nome;
        this.quantidade = quantidade;
    }
}

public class l1_e5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        Produto[] produtos = new Produto[n];
        for(int i = 0; i < n; i++){
            
            produtos[i] = new Produto(scanner.next(), scanner.nextInt());

        }

        while(true){

            String nome = scanner.next();
            if(nome.equals("fim")){
                break;
            }

            boolean found = false;
            for(int i = 0; i < n; i++){
                if(produtos[i].nome.equals(nome)){
                    int venda = scanner.nextInt();
                    produtos[i].quantidade -= venda;
                    found = true;
                    System.out.printf("%s %d\n", nome, venda);
                    break;
                }
            }
            if (!found) {
                System.out.printf("%s produto não encontrado\n", nome);
            }
        }

        for(int i = 0; i < n; i++){
            System.out.printf("%s %d\n", produtos[i].nome, produtos[i].quantidade);
        }
        scanner.close();
    }
}