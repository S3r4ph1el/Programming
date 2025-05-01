import java.util.Scanner;

class Emergencia{  

    public int idEmergencia;
    public String nomeChamador;
    public String telefoneChamador;
    public String localEmergencia;
    public String dataHoraRelato;
    public String naturezaEmergencia;
    public String tipoResposta;
    public String statusReposta;
    public boolean chamadaMovel;
    public String coordenadasGPS;

    public void mostrarEmergencia() {
        System.out.println("Emergência #" + idEmergencia);
        System.out.println();
        System.out.println("--- Informações da Emergência ---");
        System.out.println();
        System.out.println("Nome do Chamador: " + nomeChamador);
        System.out.println("Telefone: " + telefoneChamador);
        System.out.println("Local da Emergência: " + localEmergencia);
        System.out.println("Data/Hora do Relato: " + dataHoraRelato);
        System.out.println("Natureza da Emergência: " + naturezaEmergencia);
        System.out.println("Tipo de Resposta: " + tipoResposta);
        System.out.println("Status da Resposta: " + statusReposta);
        if (chamadaMovel) {
            System.out.println("Chamada via celular: Sim");
            System.out.println("Coordenadas GPS: " + coordenadasGPS);
        } else {
            System.out.println("Chamada via celular: Não");
        }
    }

}

public class l2_e1{  //use modificador de acesso (public) apenas para a classe principal 

     public static void main(String[] args) {

        int num;
        
        Scanner scanner = new Scanner(System.in);

        num = scanner.nextInt();
        scanner.nextLine();

        Emergencia[] emergencias = new Emergencia[num];

        for (int i = 0; i < num; i++){
            emergencias[i] = new Emergencia();
            emergencias[i].idEmergencia = i + 1;
            emergencias[i].nomeChamador = scanner.nextLine();
            emergencias[i].telefoneChamador = scanner.nextLine();
            emergencias[i].localEmergencia = scanner.nextLine();
            emergencias[i].dataHoraRelato = scanner.nextLine();
            emergencias[i].naturezaEmergencia = scanner.nextLine();
            emergencias[i].tipoResposta = scanner.nextLine();
            emergencias[i].statusReposta = scanner.nextLine();
            String op = scanner.nextLine().toUpperCase();
            if (op.equals("SIM")) {
                emergencias[i].chamadaMovel = true;
                emergencias[i].coordenadasGPS = scanner.nextLine();
            } else {
                emergencias[i].chamadaMovel = false;
            }
            emergencias[i].mostrarEmergencia();
            if (i < num - 1) {
                System.out.println();
            }
        }
        scanner.close();
     }

}