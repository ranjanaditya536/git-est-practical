interface Students{
    void display();
    void getattendence();
}

 class PG_Students implements Students{
    public void  display(){
        System.out.println("The grade of PG_Student is:  A+");
    
    }
    public void getattendence(){
        System.out.println("The attendence of UG_Student is:  85%");
    }
}
 class UG_Students implements Students{
   public  void display(){
        System.out.println("the grade of UG_Students is:  B+");
    }
  public   void getattendence(){
        System.out.println("The attendence of PG_Students is: 93%");
    }
 }

 public class practicalmst{
    public static void main(String[]args){
        UG_Students u = new UG_Students();
        PG_Students p = new PG_Students();

        u.display();
        u.getattendence();
        p.display();
        p.getattendence();
    }
 }

