import java.util.ArrayList;
import java.util.List;

class Cliente {
    private String cpf;
    private String nome;

    public Cliente(String cpf, String nome) {
        this.cpf = cpf;
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }

    public String getCpf() {
        return cpf;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }


}

class Motorista {
    
    private String nome;
    private String cnh;

    public Motorista(String nome, String cnh) {
        this.nome = nome;
        this.cnh = cnh;
    }

    public String getNome() {
        return nome;
    }

    public String getCnh() {
        return cnh;
    }
    
}

class Veiculo {
    
    private String modelo;
    private String placa;

    public Veiculo(String modelo, String placa) {
        this.modelo = modelo;
        this.placa = placa;
    }

    public String getModelo() {
        return modelo;
    }

    public String getPlaca() {
        return placa;
    }

    public String toString() {
        return "Modelo: " + modelo + ", Placa: " + placa;
    }
    
}

enum TipoChamado {
    
    CORRIDA,
    VIAGEM
    
}

class Chamado {
    
    private static int contadorChamado = 100;
    private int codigoChamado;
    private String data;
    private TipoChamado tipo;
    private String origem;
    private String destino;
    private String horaPartida;
    private String horaChegada;
    private double kmInicial;
    private double kmFinal;
    private double valorTotal;
    private Veiculo veiculo;
    private Motorista motorista;
    private Cliente cliente;

    public Chamado(TipoChamado tipo, String data, String origem, String destino, String horaPartida, String horaChegada, double kmInicial, double kmFinal, Veiculo veiculo, Motorista motorista, Cliente cliente) {
        this.codigoChamado = contadorChamado++;
        this.data = data;
        this.tipo = tipo;
        this.origem = origem;
        this.destino = destino;
        this.horaPartida = horaPartida;
        this.horaChegada = horaChegada;
        this.kmInicial = kmInicial;
        this.kmFinal = kmFinal;
        this.veiculo = veiculo;
        this.motorista = motorista;
        this.cliente = cliente;
    }

    public Chamado(TipoChamado tipo, String data, String origem, String destino, String horaPartida, double kmInicial, Veiculo veiculo, Motorista motorista, Cliente cliente) {
        this.codigoChamado = contadorChamado++;
        this.data = data;
        this.tipo = tipo;
        this.origem = origem;
        this.destino = destino;
        this.horaPartida = horaPartida;
        this.kmInicial = kmInicial;
        this.veiculo = veiculo;
        this.motorista = motorista;
        this.cliente = cliente;
    }

    void setMotorista(Motorista motorista) {
        this.motorista = motorista;
    }

    void finalizarChamado(String horaChegada, double kmFinal) {
        this.horaChegada = horaChegada;
        this.kmFinal = kmFinal;
    }

    boolean isFinalizado() {
        return horaChegada != null && kmFinal != 0;
    }

    double calcularDistancia() {
        return kmFinal - kmInicial;
    }

    double calcularValorTotal() {

        if (isFinalizado()) {
            double distancia = calcularDistancia();
            if (tipo == TipoChamado.CORRIDA) {
                this.valorTotal = distancia * 3.59;
                valorTotal = Math.floor(valorTotal * 100.0) / 100.0;
                return valorTotal;
            } else if (tipo == TipoChamado.VIAGEM) {
                this.valorTotal = distancia * 6.51;
                valorTotal = Math.floor(valorTotal * 100.0) / 100.0;
                return valorTotal;
            }
        }
        return 0.0;
    }

    void mostrarChamado() {
        System.out.println("Chamado: " + codigoChamado);
        System.out.println("Data: " + data);
        System.out.println("Tipo: " + tipo);
        System.out.println("Cliente: " + cliente.getNome() + " (CPF: " + cliente.getCpf() + ")");
        System.out.println("Motorista: " + motorista.getNome() + " (CNH: " + motorista.getCnh() + ")");
        System.out.println("Veículo: " + veiculo.getModelo() + " (Placa: " + veiculo.getPlaca() + ")");
        System.out.println("Origem: " + origem);
        System.out.println("Destino: " + destino);
        System.out.println("Partida: " + horaPartida);
        if (isFinalizado()) {
            System.out.println("Chegada: " + horaChegada);
            System.out.println("Distância: " + calcularDistancia() + " km");
            System.out.println("Valor total: R$ " + calcularValorTotal());
        } else {
            System.out.println("Chegada: Aguardando finalização...");
        }
    }

}

public class SistemaTaxi {

    public static void main(String[] args) {
        
        Cliente cliente1 = new Cliente("12345678901", "João");
        Cliente cliente2 = new Cliente("98765432100", "Maria");
        Cliente cliente3 = new Cliente("55544433322", "Carlos");

        Motorista motorista1 = new Motorista("Carlos Silva", "1234567890");
        Motorista motorista2 = new Motorista("José Souza", "0987654321");
        Motorista motorista3 = new Motorista("Ana Costa", "1122334455");

        Veiculo veiculo1 = new Veiculo("Fiat Uno", "ABC1D23");
        Veiculo veiculo2 = new Veiculo("Volkswagen Gol", "XYZ9A87");
        Veiculo veiculo3 = new Veiculo("Chevrolet Onix", "LMN5P32");

        //Alterações no cliente1:
        cliente1.setNome("João da Silva Santos");
        
        //Informações sobre o nome do motorista2
        System.out.println("Motorista 2: " + motorista2.getNome() + "\n");
        
        //Informações sobre o veículo3
        System.out.println("Veículo 3: " + veiculo3 + "\n");
        
        List<Chamado> chamados = new ArrayList<>();
        
        // Corrida - finalizada
        Chamado chamado1 = new Chamado(TipoChamado.CORRIDA, "01/05/2025", "Setor Comercial Sul", "Asa Norte", "14:00", "14:30", 1234, 1241, veiculo3, motorista3, cliente3);
        chamados.add(chamado1);
        
        //Corrida - não finalizada
        Chamado chamado2 = new Chamado(TipoChamado.CORRIDA, "01/05/2025", "Asa Norte", "Praça dos Três Poderes", "15:00", "15:20", 1242, 1251, veiculo3, motorista3, cliente1);
        chamados.add(chamado2);

        //Viagem - finalizada
        Chamado chamado3 = new Chamado(TipoChamado.VIAGEM, "01/05/2025", "Asa Sul", "Formosa", "15:30", "17:00", 2000, 2075, veiculo1, motorista1, cliente2);
        chamados.add(chamado3);

        //Corrida - não finalizada
        Chamado chamado4 = new Chamado(TipoChamado.CORRIDA, "05/05/2025", "Taguatinga", "Shopping Conjunto Nacional", "13:00", 3050, veiculo1, motorista1, cliente2);
        chamados.add(chamado4);

        //Corrida - não finalizada
        Chamado chamado5 = new Chamado(TipoChamado.CORRIDA, "05/05/2025", "Estádio Mané Garrincha", "Shopping ParkShopping", "12:00", 1000, veiculo2, motorista1, cliente1);
        chamados.add(chamado5);
        
        //Alteração do chamado5
        chamado5.setMotorista(motorista3);
        
        // Viagem - não finalizada
        Chamado chamado6 = new Chamado(TipoChamado.VIAGEM, "05/05/2025", "Cruzeiro", "Planaltina", "11:00", 1270, veiculo3, motorista2, cliente3);
        chamados.add(chamado6);
         
        // Finalizando o chamado6
        chamado6.finalizarChamado("12:10", 1315);  

        for (Chamado chamado : chamados) {
            chamado.mostrarChamado();
            System.out.println();
        } 
    }
}


