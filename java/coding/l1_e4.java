package coding;
import java.util.Scanner;

public class l1_e4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        char sex;
        float total, valor_h = 0.00f, valor_m = 0.00f;
        int count_h = 0, count_m = 0;

        while(true){
            
            sex = scanner.next().charAt(0);

            if(sex == 'q'){
                break;
            }

            if(sex == 'h'){
                valor_h += 12.50f;
                count_h++;
            } else if (sex == 'm') {
                valor_m += 7.40f;
                count_m++;
            }
        }

        total = valor_h + valor_m;
        System.out.printf("%d %d\n", count_h, count_m);
        System.out.printf("%.2f %.2f %.2f\n", valor_h, valor_m, total);
        scanner.close();

    }
}
