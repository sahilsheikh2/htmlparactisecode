import java.util.*;
class sum
 {
    public String name;
    sum()
    {
        System.out.println("Constructor Called:");
        name = "Programiz";
    }
  public static void main(String[] args) {
    sum obj = new sum();
    System.out.println("The name is " + obj.name);
  }
}
