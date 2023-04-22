import java.util.Scanner;

public class Grenais{
  public static void main(String[] args) {
    int inter, inter_tot = 0, grem, grem_tot = 0, empat = 0, repetir, cont = 0;
    Scanner input = new Scanner(System.in);

    while (true){

      System.out.println("Novo grenal (1-sim 2-nao)");
      
      inter = input.nextInt();
      grem = input.nextInt();

      repetir = input.nextInt();
  
      if (inter > grem){
        inter_tot++;
      }
      else if (grem > inter){
        grem_tot++;
      }
      else if (grem == inter){
        empat++;
      }
      cont++; 
      
      if (repetir == 2){
        break;
      }
    }
    System.out.println(cont + " grenais");
    System.out.println("Inter:" + inter_tot);
    System.out.println("Gremio:" + grem_tot);
    System.out.println("Empates:" + empat);
    

    if (inter_tot > grem_tot){
      System.out.println("Inter venceu mais");
    }
    else if (grem_tot > inter_tot){
      System.out.println("Gremio venceu mais");
    }
    else{
      System.out.println("Nao houve vencedor");
    }
    input.close();
  }
}