import java.util.Scanner;
import java.util.ArrayList;

abstract class Contato {
    protected String nome;
    protected String apelido;
    protected String email;
    protected String aniversario;

    public Contato(String nome, String apelido, String email, String aniversario) {
        this.nome = nome;
        this.apelido = apelido;
        this.email = email;
        this.aniversario = aniversario;
    }

    public String imprimirBasico() {
        return "Nome: " + nome + ", Apelido: " + apelido + ", Email: " + email;
    }
    public abstract String imprimirContato();
}

class Amigo extends Contato {
    private int grau;

    public Amigo(String nome, String apelido, String email, String aniversario, int grau) {
        super(nome, apelido, email, aniversario);
        this.grau = grau;
    }

    public String imprimirContato() {
        String grauStr;
        switch (grau) {
            case 1: grauStr = "Melhor Amigo"; break;
            case 2: grauStr = "Amigo"; break;
            case 3: grauStr = "Conhecido"; break;
            default: grauStr = "Desconhecido"; break;
        }
        return "Nome: " + nome + "\n" +
            "Apelido: " + apelido + "\n" +
            "Email: " + email + "\n" +
            "Aniversário: " + aniversario + "\n" +
            "Grau: " + grauStr;
    }

    public int getGrau() {
        return grau;
    }
}

class Familia extends Contato {
    private String parentesco;

    public Familia(String nome, String apelido, String email, String aniversario, String parentesco) {
        super(nome, apelido, email, aniversario);
        this.parentesco = parentesco;
    }

    public String imprimirContato() {
        return "Nome: " + nome + "\n" +
               "Apelido: " + apelido + "\n" +
               "Email: " + email + "\n" +
               "Aniversário: " + aniversario + "\n" +
               "Parentesco: " + parentesco;
    }

    public String getParentesco() {
        return parentesco;
    }
}

class ColegasDeTrabalho extends Contato {
    private String tipo;

    public ColegasDeTrabalho(String nome, String apelido, String email, String aniversario, String tipo) {
        super(nome, apelido, email, aniversario);
        this.tipo = tipo;
    }

    public String imprimirContato() {
        return "Nome: " + nome + "\n" +
               "Apelido: " + apelido + "\n" +
               "Email: " + email + "\n" +
               "Aniversário: " + aniversario + "\n" +
               "Relacionamento de trabalho: " + tipo;
    }

    public String getTipo() {
        return tipo;
    }
}

public class l4_e3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Contato> contatos = new ArrayList<>();

        while (true) {
            int op = sc.nextInt();
            if (op == 8) break;

            switch (op) {
                case 1:
                    int subtipo = sc.nextInt();
                    sc.nextLine();
                    String linha = sc.nextLine();
                    String[] campos = linha.split(" ");
                    if (subtipo == 1) { 
                        String nome = campos[0];
                        String apelido = campos[1];
                        String email = campos[2];
                        String aniversario = campos[3];
                        int grau = Integer.parseInt(campos[4]);
                        contatos.add(new Amigo(nome, apelido, email, aniversario, grau));
                    } else if (subtipo == 2) { 
                        String nome = campos[0];
                        String apelido = campos[1];
                        String email = campos[2];
                        String aniversario = campos[3];
                        String parentesco = campos[4];
                        contatos.add(new Familia(nome, apelido, email, aniversario, parentesco));
                    } else if (subtipo == 3) { 
                        String nome = campos[0];
                        String apelido = campos[1];
                        String email = campos[2];
                        String aniversario = campos[3];
                        String tipo = campos[4];
                        contatos.add(new ColegasDeTrabalho(nome, apelido, email, aniversario, tipo));
                    }
                    break;
                case 2: 
                    for (Contato c : contatos) {
                        System.out.println(c.imprimirContato());
                    }
                    break;
                case 3: 
                    for (Contato c : contatos) {
                        if (c instanceof Familia) {
                            System.out.println(c.imprimirContato());
                        }
                    }
                    break;
                case 4: 
                    for (Contato c : contatos) {
                        if (c instanceof Amigo) {
                            System.out.println(c.imprimirContato());
                        }
                    }
                    break;
                case 5: 
                    for (Contato c : contatos) {
                        if (c instanceof ColegasDeTrabalho) {
                            System.out.println(c.imprimirContato());
                        }
                    }
                    break;
                case 6: 
                    for (Contato c : contatos) {
                        if (c instanceof Amigo && ((Amigo) c).getGrau() == 1) {
                            System.out.println(c.imprimirContato());
                        } else if (c instanceof Familia && ((Familia) c).getParentesco().equalsIgnoreCase("irmão")) {
                            System.out.println(c.imprimirContato());
                        } else if (c instanceof ColegasDeTrabalho && ((ColegasDeTrabalho) c).getTipo().equalsIgnoreCase("colega")) {
                            System.out.println(c.imprimirContato());
                        }
                    }
                    break;
                case 7:
                    int idx = sc.nextInt();
                    sc.nextLine();
                    idx--;
                    System.out.println(contatos.get(idx).imprimirContato());
                    break;
                default:
                    break;
            }
        }
        sc.close();
    }
}