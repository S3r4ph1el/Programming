import java.util.Scanner;

class FolhaPagamento {
    public void mostrarPagamentos(String nome, String cidade, String mes, Funcionario[] funcionarios) {
        System.out.println("Nome da Empresa: " + nome);
        System.out.println("Endereço: " + cidade);
        System.out.println("Mês: " + mes);
        System.out.println();

        for (Funcionario f : funcionarios) {
            System.out.println("Nome: " + f.getNome());
            System.out.println("Data de Nascimento: " + f.getDataNascimento());

            if (f instanceof Chefe) {
                Chefe c = (Chefe) f;
                System.out.printf("Salário: R$%.1f%n", c.getSalario());
                System.out.println("Departamento: " + c.getDepartamento());
                System.out.println("Cargo: chefe");
            } else if (f instanceof Vendedor) {
                Vendedor v = (Vendedor) f;
                v.setSalario(v.getSalario() + (v.getComissaoVenda() * v.getNumeroVendas()));
                System.out.printf("Salário: R$%.1f%n", v.getSalario());
                System.out.println("Cargo: vendedor");
                System.out.printf("Comissão por Venda: R$%.1f%n", v.getComissaoVenda());
                System.out.println("Número de vendas: " + v.getNumeroVendas());
            } else if (f instanceof Operario) {
                Operario o = (Operario) f;
                o.setSalario(o.getSalario() + (o.getValorProducao() * o.getQuantidadeProduzida()));
                System.out.printf("Salário: R$%.1f%n", o.getSalario());
                System.out.println("Cargo: Operário");
                System.out.printf("Valor por Produção: R$%.1f%n", o.getValorProducao());
                System.out.println("Quantidade produzida: " + o.getQuantidadeProduzida());
            } else if (f instanceof Horista) {
                Horista h = (Horista) f;
                h.setSalario(h.getSalario() + (h.getValorHora() * h.getTotalTrabalhadas()));
                System.out.printf("Salário: R$%.1f%n", h.getSalario());
                System.out.println("Cargo: horista");
                System.out.printf("Valor por Hora: R$%.1f%n", h.getValorHora());
                System.out.println("Total de horas: " + h.getTotalTrabalhadas());
            }
            System.out.println();
        }
    }
}

class Funcionario {
    private String nome;
    private String dataNascimento;
    private float salario;

    public Funcionario() {
        this.nome = "";
        this.dataNascimento = "";
        this.salario = 0.0f;
    }

    public Funcionario(String nome, String dataNascimento, float salario) {
        this.nome = nome;
        this.dataNascimento = dataNascimento;
        this.salario = salario;
    }

    public String getNome() {
        return nome;
    }

    public String setNome(String nome) {
        this.nome = nome;
        return this.nome;
    }

    public String getDataNascimento() {
        return dataNascimento;
    }

    public String setDataNascimento(String dataNascimento) {
        this.dataNascimento = dataNascimento;
        return this.dataNascimento;
    }

    public float getSalario() {
        return salario;
    }

    public float setSalario(float salario) {
        this.salario = salario;
        return this.salario;
    }

}

class Chefe extends Funcionario {
    private String departamento;

    public Chefe() {
        super();
        this.departamento = "";
    }
    
    public Chefe(String nome, String dataNascimento, float salario, String departamento) {
        super(nome, dataNascimento, salario);
        this.departamento = departamento;
    }

    public String getDepartamento() {
        return departamento;
    }

    public String setDepartamento(String departamento) {
        this.departamento = departamento;
        return this.departamento;
    }
}

class Vendedor extends Funcionario {
    private float comissaoVenda;
    private int quantidadeVendas;

    public Vendedor() {
        super();
        this.comissaoVenda = 0.0f;
        this.quantidadeVendas = 0;
    }

    public Vendedor(String nome, String dataNascimento, float salario, float comissaoVenda, int quantidadeVendas) {
        super(nome, dataNascimento, salario);
        this.comissaoVenda = comissaoVenda;
        this.quantidadeVendas = quantidadeVendas;
    }

    public float getComissaoVenda() {
        return comissaoVenda;
    }

    public float setComissaoVenda(float comissaoVenda) {
        this.comissaoVenda = comissaoVenda;
        return this.comissaoVenda;
    }

    public int getNumeroVendas() {
        return quantidadeVendas;
    }

    public int setNumeroVendas(int quantidadeVendas) {
        this.quantidadeVendas = quantidadeVendas;
        return this.quantidadeVendas;
    }
}

class Operario extends Funcionario {
    private float valorProducao;
    private int quantidadeProduzida;
    
    public Operario() {
        super();
        this.valorProducao = 0.0f;
        this.quantidadeProduzida = 0;
    }

    public Operario(String nome, String dataNascimento, float salario, float valorProducao, int quantidadeProduzida) {
        super(nome, dataNascimento, salario);
        this.valorProducao = valorProducao;
        this.quantidadeProduzida = quantidadeProduzida;
    }

    public float getValorProducao() {
        return valorProducao;
    }

    public float setValorProducao(float valorProducao) {
        this.valorProducao = valorProducao;
        return this.valorProducao;
    }

    public int getQuantidadeProduzida() {
        return quantidadeProduzida;
    }

    public int setQuantidadeProduzida(int quantidadeProduzida) {
        this.quantidadeProduzida = quantidadeProduzida;
        return this.quantidadeProduzida;
    }
}

class Horista extends Funcionario {
    private float valorHora;
    private int totalTrabalhadas;

    public Horista() {
        super();
        this.valorHora = 0.0f;
        this.totalTrabalhadas = 0;
    }

    public Horista(String nome, String dataNascimento, float salario, float valorHora, int totalTrabalhadas) {
        super(nome, dataNascimento, salario);
        this.valorHora = valorHora;
        this.totalTrabalhadas = totalTrabalhadas;
    }

    public float getValorHora() {
        return valorHora;
    }

    public float setValorHora(float valorHora) {
        this.valorHora = valorHora;
        return this.valorHora;
    }

    public int getTotalTrabalhadas() {
        return totalTrabalhadas;
    }

    public int setTotalTrabalhadas(int totalTrabalhadas) {
        this.totalTrabalhadas = totalTrabalhadas;
        return this.totalTrabalhadas;
    }
}

public class l4_e2 {

    public static void main(String[] args) {
        
        Scanner entrada = new Scanner(System.in);
        
        Funcionario[] funcionarios = new Funcionario[4];
        
        String nome = entrada.next();
        String cidade = entrada.next();
        String mes = entrada.next();
        
        funcionarios[0] = new Chefe(entrada.next(), entrada.next(), entrada.nextFloat(), entrada.next());
        funcionarios[1] = new Vendedor(entrada.next(), entrada.next(), entrada.nextFloat(), entrada.nextFloat(), entrada.nextInt());
        funcionarios[2] = new Operario(entrada.next(), entrada.next(), entrada.nextFloat(), entrada.nextFloat(), entrada.nextInt());
        funcionarios[3] = new Horista(entrada.next(), entrada.next(), entrada.nextFloat(), entrada.nextFloat(), entrada.nextInt());
        
        FolhaPagamento folha = new FolhaPagamento();
        folha.mostrarPagamentos(nome, cidade, mes, funcionarios);
        
        entrada.close();
    }

}