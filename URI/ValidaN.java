import java.util.Scanner;

public class ValidaN{
  public static void main(String[] args) {
    
    float nt, media = 0;
    int ct = 0;
    
    Scanner sc = new Scanner(System.in);

    while(ct <= 1)
    {
      nt = sc.nextFloat();
      if(nt >= 0 & nt <= 10)
      {
        media += nt;
        ct++;
      }
      else
      {
        System.out.println("nota invalida");
      }
    }
    sc.close();
    media = media/2;
    System.out.println("media = " + String.format("%.2f", media));
  }
}
