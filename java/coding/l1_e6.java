import java.util.Scanner;

public class l1_e6 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int num = scanner.nextInt();
        
        String[] palavras = new String[num];
        for (int i = 0; i < num; i++) {
            palavras[i] = scanner.next();
        }

        String palavra = scanner.next();

        CorretorOrtografico corretor = new CorretorOrtografico(palavra);
        for (int i = 0; i < num; i++) {
            if (palavras[i].equals(palavra)) {
                System.out.printf("palavra correta\n");
                scanner.close(); 
                return;
            } else if (i == num - 1) {
                System.out.printf("palavra incorreta\n");
                corretor.corrigir(palavra, 0, palavra.length() - 1, palavras);
                System.out.printf("nenhuma sugestão\n");
                scanner.close();
                return;
            }
        }
        scanner.close();
    }

    static class CorretorOrtografico {
        String palavra;

        public CorretorOrtografico(String palavra) {
            this.palavra = palavra;
        }

        public void corrigir(String palavra, int inicio, int fim, String[] palavras) {

            for (int i = inicio; i <= fim; i++) {
                palavra = trocarLetras(palavra, inicio, i);

                for (String armazenamento : palavras) {
                    if (armazenamento.equals(palavra)) {
                        System.out.printf("%s?\n", palavra);
                        System.exit(0);
                    }
                }

                corrigir(palavra, inicio + 1, fim, palavras);
                palavra = trocarLetras(palavra, inicio, i);
            }
        }
    }

    public static String trocarLetras(String palavra, int i, int j) {
        char[] letras = palavra.toCharArray();
        char temp = letras[i];
        letras[i] = letras[j];
        letras[j] = temp;
        return new String(letras);
    }
}