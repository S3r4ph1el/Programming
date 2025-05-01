import java.util.Scanner;

public class l1_e2 {
    public static void main(String[] args) {
        
        float energia, custo = 0f, total = 0f;
        float fixo = 5.0f;
        
        Scanner scanner = new Scanner(System.in);

        energia = scanner.nextFloat();

        if(energia <= 500.0){

            custo = energia * 0.02f;
            total = custo + fixo;

        } else if (energia >= 500.0f && energia <= 1000.0f){

            custo = (energia - 500.0f) * 0.05f + (500.0f * 0.10f);
            total = custo + fixo;

        } else if (energia > 1000.0f) {

            custo = (energia - 1000.f) * 0.10f + (1000.0f * 0.35f);
            total = custo + fixo;

        }

        System.out.printf("%.2f %.2f %.2f\n", custo, fixo, total);

        scanner.close();        
    }
}
