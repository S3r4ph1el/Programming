import java.util.Scanner;

class Temperatura{  

    private double temperatura;
    boolean convert;

    public Temperatura(double temperatura) {
        this.temperatura = temperatura;
        this.convert = false;
    }

    public void celsiusToFahrenheit(double temperatura) {
        this.temperatura = (this.temperatura * 9.0/5.0) + 32;
        this.convert = true;
    }

    public void fahrenheitToCelsius(double temperatura) {
        this.temperatura = (this.temperatura - 32) * 5.0/9.0;
        this.convert = false;
    }

    public String toString() {
        if (this.convert) {
            this.convert = false;
            return String.format(java.util.Locale.US, "temperatura: %.1f graus fahrenheit", this.temperatura);
        }
        return String.format(java.util.Locale.US, "temperatura: %.1f graus celsius", this.temperatura);
    }

}

public class l2_e3{  //use modificador de acesso (public) apenas para a classe principal 

    public static void main(String[] args) {

        double graus;
        Scanner scanner = new Scanner(System.in);
        graus = scanner.nextDouble();
        Temperatura temperatura = new Temperatura(graus);

        temperatura.celsiusToFahrenheit(graus);
        System.out.println(temperatura.toString());

        temperatura.fahrenheitToCelsius(graus);
        System.out.println(temperatura.toString());

        scanner.close();

    }

}