import java.util.Scanner;
public class dude_0
{

public static void main(String[] args)
{
    String a, b, c;
    Scanner s = new Scanner(System.in);

    // First, Accept input from console
    // Nothing should be printed out for an input
    a = s.nextLine();
    b = s.nextLine();

    // Then process
    dude_0 obj = new  dude_0();
    c = obj.concat(a, b);

    // Lastly, print only the result to console
    System.out.println(c);
}

String concat(String x, String y)
{
    String z;
    z = x + " " + y;
    return z;
}

}
