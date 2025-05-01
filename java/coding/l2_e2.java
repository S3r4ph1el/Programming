import java.util.Scanner;

class Retangulo{  

    private int comprimento = 1;
    private int largura = 1;

    public int perimetro() {
        return 2 * (comprimento + largura);
    }
    public int area() {
        return comprimento * largura;
    }
    public void setComprimento(int comprimento) {
        if (comprimento > 0 && comprimento < 20) {
            this.comprimento = comprimento;
            return;
        }
    }
    public void setLargura(int largura) {
        if (largura > 0 && largura < 20) {
            this.largura = largura;
            return;
        }
    }
    public int getComprimento() {
        return comprimento;
    }
    public int getLargura() {
        return largura;
    }


}

public class l2_e2{  //use modificador de acesso (public) apenas para a classe principal 

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        Retangulo[] retangulo = new Retangulo[2];

        for (int i = 0; i < 2; i++){
            retangulo[i] = new Retangulo();
            retangulo[i].setComprimento(scanner.nextInt());
            retangulo[i].setLargura(scanner.nextInt());
            System.out.print(retangulo[i].getComprimento());
            System.out.print(" ");
            System.out.print(retangulo[i].getLargura());
            System.out.print(" ");
            System.out.print(retangulo[i].perimetro());
            System.out.print(" ");
            System.out.println(retangulo[i].area());
        }

        scanner.close();
    }

}