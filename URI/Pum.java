import java.util.Scanner;

public class Pum{
  public static void main(String[] args) {
    int n, p = 0;

    Scanner input = new Scanner(System.in);
    n = input.nextInt();

    for(int ct = 0; ct < n; ct++)
    {
      System.out.println((p + 1) + " " + (p + 2) + " " + (p + 3) + " PUM");
      p+= 4;
    }
    input.close();
  }
}