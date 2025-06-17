import java.util.Scanner;

class Veiculo {
    protected String placa;
    protected int numeroPortas;
    protected float preco;

    public Veiculo() {
        this.placa = "";
        this.numeroPortas = 0;
        this.preco = 0.0f;
    }

    public Veiculo(String placa, int numeroPortas, float preco) {
        this.placa = placa;
        this.numeroPortas = numeroPortas;
        this.preco = preco;
    }

    public void setPlaca(String placa) {
        this.placa = placa;
    }

    public String getPlaca() {
        return placa;
    }

    public int getNumeroPortas() {
        return numeroPortas;
    }

    public void setNumeroPortas(int numeroPortas) {
        this.numeroPortas = numeroPortas;
    }

    public float getPreco() {
        return preco;
    }
    public void setPreco(float preco) {
        this.preco = preco;
    }

    @Override
    public String toString() {
        return "Placa: " + getPlaca() +
                " Número de portas: " + getNumeroPortas() +
                " Preço: R$" + getPreco();
    }
}
class Carro extends Veiculo {
    private String cor;

    public Carro() {
        super("", 0, 0.0f);
        this.cor = "";
    }

    public Carro(String placa, int numeroPortas, float preco, String cor) {
        super(placa, numeroPortas, preco);
        this.cor = cor;
    }

    public String getCor() {
        return cor;
    }

    @Override
    public String toString() {
        return "Placa: " + getPlaca() +
                " Número de portas: " + getNumeroPortas() +
                " Preço: R$" + getPreco() +
                " Cor: " + cor;
    }
}
class Moto extends Veiculo {
    private int qtdeCilindradas;

    public Moto() {
        super("", 0, 0.0f);
        this.qtdeCilindradas = 0;
    }

    public Moto(String placa, int numeroPortas, float preco, int qtdeCilindradas) {
        super(placa, numeroPortas, preco);
        this.qtdeCilindradas = qtdeCilindradas;
    }

    public int getQtdeCilindradas() {
        return qtdeCilindradas;
    }

    public void setQtdeCilindradas(int qtdeCilindradas) {
        this.qtdeCilindradas = qtdeCilindradas;
    }

    @Override
    public String toString() {
        return "Placa: " + getPlaca() +
                " Número de portas: " + getNumeroPortas() +
                " Preço: R$" + getPreco() +
                " Quantidade de cilindradas: " + qtdeCilindradas;
    }
}

public class l4_e1 {

    public static void main(String[] args) {
        
        Scanner entrada = new Scanner(System.in);
        
        Veiculo veiculo = new Veiculo();
        veiculo.setPlaca(entrada.next());
        veiculo.setNumeroPortas(entrada.nextInt());
        veiculo.setPreco(entrada.nextFloat());
        entrada.nextLine();

        Carro carro = new Carro(entrada.next(), entrada.nextInt(), entrada.nextFloat(), entrada.next());
        entrada.nextLine();

        Moto moto = new Moto(entrada.next(), entrada.nextInt(), entrada.nextFloat(), entrada.nextInt());
        entrada.nextLine();

        System.out.println(veiculo);
        System.out.println(carro);
        System.out.println(moto);
        
        entrada.close();
    }
    
}