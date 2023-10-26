import detail.java.*;
class student_detail
 {
    public String name;
    student_detail()
    {
        System.out.println("Constructor Called:");
        name = "Programiz";
    }
  public static void main(String[] args) {
    student_detail obj = new student_detail();
    System.out.println("The name is " + obj.name);
  }
}
