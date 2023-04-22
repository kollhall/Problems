import java.util.Scanner;

public class Restodiv{
  public static void main(String[] args) {
    int x, y, aux;

    Scanner input = new Scanner(System.in);

    x = input.nextInt();
    y = input.nextInt();

    if(x > y)
    {
      aux = x;
      x = y;
      y = aux;
    }

    for(int ct = x + 1; ct < y; ct++)
    {
      if(ct % 5 == 2 | ct % 5 == 3)
      {
        System.out.println(ct);
      }
    }
    input.close();
  }
}