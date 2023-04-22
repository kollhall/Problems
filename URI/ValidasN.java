import java.util.Scanner;

public class ValidasN{
  public static void main(String[] args) {
    float nt, media = 0;
    int ct = 0, n_calc;
    
    Scanner sc = new Scanner(System.in);

    do
    {
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
      n_calc = sc.nextInt();
      media = media/2;
      System.out.println("media = " + String.format("%.2f", media));
    }
    while(n_calc == 1);
    sc.close();
  }
}