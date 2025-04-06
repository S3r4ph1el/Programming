package coding;
import java.util.Scanner;

public class l1_e3{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int area = scanner.nextInt();
        float iptu;

        if (n != 1 && n != 2 || area <= 0) {
            System.out.println("Entrada inválida!");
            scanner.close();
            return;
        }

        if (n == 1) {
            
            if(area < 200){
                iptu = area * 1.0f;
            } else {
                iptu = area * 1.2f;
            }

        } else {
            
            if (area < 200){
                iptu = area * 1.1f;
            } else {
                iptu = area * 1.3f;
            }

        }

        System.out.printf("%.2f\n", iptu);
        scanner.close();

    }
}