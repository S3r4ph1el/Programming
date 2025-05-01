import java.util.Scanner;

class Circulo{  

    private int x, y, raio;
    public static final double PI = 3.14159;

    public Circulo(int x, int y, int raio){ //construtor
        this.x = x;
        this.y = y;
        this.raio = raio;
    }

    public int getX(){
        return x;
    }

    public int getY(){
        return y;
    }

    public int getRaio(){
        return raio;
    }

    public void setRaio(int raio){
        this.raio = raio;
    }

    public double circunferencia(){
        return 2 * PI * raio;
    }

}

public class l2_e5{  //use modificador de acesso (public) apenas para a classe principal 

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        Circulo[] circulos1 = new Circulo[3];

        for (int i = 0; i < circulos1.length; i++) {
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            int raio = scanner.nextInt();
            circulos1[i] = new Circulo(x, y, raio);
        }

        Circulo[] circulos2 = circulos1;
        Circulo[] circulos3 = new Circulo[3];

        for (int i = 0; i < 3; i++) {
            circulos3[i] = new Circulo(circulos1[i].getX(), circulos1[i].getY(), circulos1[i].getRaio());
        }

        for (int i = 0; i < 3; i++){
            int input = scanner.nextInt();
            circulos1[i].setRaio(input);
        }

        System.out.println("vetor1:");
        for (int i = 0; i < 3; i++){
            System.out.println(circulos1[i].getX() + " " + circulos1[i].getY() + " " + circulos1[i].getRaio());
        }

        System.out.println("vetor2:");
        for (int i = 0; i < 3; i++){
            System.out.println(circulos2[i].getX() + " " + circulos2[i].getY() + " " + circulos2[i].getRaio());
        }

        System.out.println("vetor3:");
        for (int i = 0; i < 3; i++){
            System.out.println(circulos3[i].getX() + " " + circulos3[i].getY() + " " + circulos3[i].getRaio());
        }
        
        scanner.close();

    }

}