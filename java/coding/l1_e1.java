import java.util.Scanner;

public class l1_e1 {
    public static void main(String[] args) {

        float peso_ideal = 0f;

        Scanner scanner = new Scanner(System.in);

        float A = scanner.nextFloat();
        char S = scanner.next().charAt(0);

        if (A <= 0 || S != 'f' && S != 'm') {
            System.out.println("Entrada inválida!");
            scanner.close();
            return;
        }
        
        if(S == 'f'){
            peso_ideal = (62.1f * A) - 44.7f;
        } else if (S == 'm'){
            peso_ideal = (72.7f * A) - 58f;
        }

        System.out.printf("%.1f kg\n", peso_ideal);
        scanner.close();
    }
}