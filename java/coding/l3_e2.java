import java.util.List;
import java.util.ArrayList;

class Engenheiro {
    
    private String nome;
    private String crea;

    public Engenheiro(String nome, String crea) {
        this.nome = nome;
        this.crea = crea;
    }

    public String getNome() {
        return nome;
    }

    public String getCrea() {
        return crea;
    }
    
}

class Funcionario {
    
    private String nome;
    private String cargo;

    public Funcionario(String nome, String cargo) {
        this.nome = nome;
        this.cargo = cargo;
    }

    public String getNome() {
        return nome;
    }

    public String getCargo() {
        return cargo;
    }

}

class Tarefa {
    
    private String descricao;
    private String data;
    private int qtdeHoras;
    private Funcionario funcionario;

    public Tarefa(String descricao, String data, int qtdeHoras, Funcionario funcionario) {
        this.qtdeHoras = qtdeHoras;
        this.descricao = descricao;
        this.data = data;
        this.funcionario = funcionario;
    }

    public int getQtdeHoras() {
        return qtdeHoras;
    }

    public String getDescricao() {
        return descricao;
    }

    public String getData() {
        return data;
    }

    public Funcionario getFuncionario() {
        return funcionario;
    }

}

class Projeto {
    
    private int contadorTarefas = 0;
    private String nome;
    private String status;
    private String dataInicio;
    private String dataFim;
    private int total;
    private Engenheiro engenheiro;
    private List<Tarefa> tarefas;

    public Projeto(String nome, String status, String dataInicio, String dataFim, Engenheiro engenheiro) {
        this.nome = nome;
        this.status = status;
        this.dataInicio = dataInicio;
        this.dataFim = dataFim;
        this.engenheiro = engenheiro;
        this.tarefas = new ArrayList<>();
    }

    public String getNome() {
        return nome;
    }

    public void adicionarTarefa(String descricao, String data, int qtdeHoras, Funcionario funcionario) {
        Tarefa tarefa = new Tarefa(descricao, data, qtdeHoras, funcionario);
        tarefas.add(tarefa);
        this.contadorTarefas++;
    }

    public List<Tarefa> getTarefasPorFuncionario(Funcionario funcionario) {
        List<Tarefa> tarefasFuncionario = new ArrayList<>();
        for (Tarefa tarefa : tarefas) {
            if (tarefa.getFuncionario().equals(funcionario)) {
                tarefasFuncionario.add(tarefa);
            }
        }
        return tarefasFuncionario;
    }

    public List<Tarefa> getTarefasPorData(String data) {
        List<Tarefa> tarefasData = new ArrayList<>();
        for (Tarefa tarefa : tarefas) {
            if (tarefa.getData().equals(data)) {
                tarefasData.add(tarefa);
            }
        }
        return tarefasData;
    }

    public int calcularHorasTotal() {
        this.total = 0;
        for (Tarefa tarefa : tarefas) {
            this.total += tarefa.getQtdeHoras();
        }
        return total;
    }

    public void mostrarProjeto() {
        System.out.println("------ PROJETO ------");
        System.out.println("Nome: " + nome);
        System.out.println("Status: " + status);
        System.out.println("Início: " + dataInicio);
        if (dataFim != null) {
            System.out.println("Término: " + dataFim);
        } else {
            System.out.println("Término: em aberto");
        }
        System.out.println("Engenheiro Responsável: " + engenheiro.getNome());
        System.out.println("Total de Tarefas: " + contadorTarefas);
        System.out.println("Horas Totais: " + calcularHorasTotal());

    }
    
}

public class l3_e2{

    public static void main(String[] args) {
        
        // Engenheiros
        Engenheiro eng1 = new Engenheiro("Mariana Lopes", "DF001122");
        Engenheiro eng2 = new Engenheiro("Roberto Silva", "SP334455");
        Engenheiro eng3 = new Engenheiro("Fernanda Alves", "RJ556677"); 

        // Funcionários
        Funcionario func1 = new Funcionario("Lucas", "Desenvolvedor");
        Funcionario func2 = new Funcionario("Juliana", "Analista de Sistemas");
        Funcionario func3 = new Funcionario("Paulo", "Engenheiro de Software");
        Funcionario func4 = new Funcionario("Renata", "Testadora");

        // Lista geral de projetos
        List<Projeto> projetos = new ArrayList<>();

        // Projetos
        Projeto projeto1 = new Projeto("Sistema de Controle Acadêmico", "Em desenvolvimento", "01/05/2025", null, eng1);
        projeto1.adicionarTarefa("Modelagem de dados", "02/05/2025", 5, func2);
        projeto1.adicionarTarefa("Backend", "03/05/2025", 8, func1);
        projeto1.adicionarTarefa("Integração", "04/05/2025", 6, func2);
        projetos.add(projeto1);

        Projeto projeto2 = new Projeto("Aplicativo de Saúde", "Planejamento", "05/05/2025", null, eng2);
        projeto2.adicionarTarefa("Requisitos", "05/05/2025", 4, func3);
        projeto2.adicionarTarefa("Protótipo", "06/05/2025", 7, func4);
        projetos.add(projeto2);

        Projeto projeto3 = new Projeto("Plataforma de E-commerce", "Finalizado", "01/04/2025", "30/04/2025", eng3);
        projeto3.adicionarTarefa("API de produtos", "10/04/2025", 6, func1);
        projeto3.adicionarTarefa("Testes automatizados", "15/04/2025", 5, func4);
        projetos.add(projeto3);

        // Exibir todos os projetos
        for (Projeto projeto : projetos) {
            projeto.mostrarProjeto();
            System.out.println();
        }

        // Buscar tarefas de Juliana
        System.out.println("Tarefas de " + func2.getNome());
        for (Projeto projeto : projetos) {
            for (Tarefa tarefa : projeto.getTarefasPorFuncionario(func2)) {
                System.out.println("Projeto: " + projeto.getNome());
                System.out.println("Nome da Tarefa: " + tarefa.getDescricao() + ", Data: " + tarefa.getData());
                System.out.println();
            }
        }

        // Buscar tarefas por data
        String dataBusca = "06/05/2025";
        System.out.println("Tarefas na data " + dataBusca);
        for (Projeto projeto : projetos) {
            for (Tarefa tarefa : projeto.getTarefasPorData(dataBusca)) {
                System.out.println("Projeto: " + projeto.getNome());
                System.out.println("Nome da Tarefa: " + tarefa.getDescricao() + ", Funcionário: " + tarefa.getFuncionario().getNome());
                System.out.println();
            }
        }
        
    }

}


