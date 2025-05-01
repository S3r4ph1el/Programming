import java.util.Scanner;
import java.nio.charset.StandardCharsets;
import java.util.HashMap;
import java.util.Map;

public class l1_e7 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in, StandardCharsets.UTF_8);

        int num = scanner.nextInt();
        Map <String, String> siglas = new HashMap<>();

        scanner.nextLine();

        for (int i = 0; i < num; i++) {
            String linha = scanner.nextLine().trim();
            String[] partes = linha.split(" ");
            if (partes.length == 2) {
                siglas.put(partes[0], partes[1]);
            }
        }
        String texto = scanner.nextLine();
        SiglasInternet(siglas, texto);

        scanner.close();
        return;

    }

    public static void SiglasInternet(Map<String, String> siglas, String texto) {
        
        String[] palavras = texto.split(" ");
        for (int i = 0; i < palavras.length; i++) {
            String palavraLower = palavras[i].toLowerCase();
            if (siglas.containsKey(palavras[i])) {
                palavras[i] = siglas.get(palavras[i]);
            } else if (siglas.containsKey(palavraLower)) {
                palavras[i] = siglas.get(palavraLower);
            }
        }
        String resultado = String.join(" ", palavras);
        System.out.println(resultado);
        return;
    }
}
