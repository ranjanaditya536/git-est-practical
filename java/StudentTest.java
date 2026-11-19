interface Student{
    void display_Grade();
    void attendence();
} 
class PG_Student implements Student{
    public void display_Grade(){
        System.out.println("PG student grade is A");
    }
    public void attendence(){
        System.out.println("PG student attendence is 90%");
    }
}
class UG_Students implements Student{
    public void display_Grade(){
        System.out.println("UG student grade is B");

    }
    public void attendence (){
        System.out.println("UG Student attendence is 84%");
    }
}
public class StudentTest {
    public static void main(String[] args) {
        
        PG_Student pg = new PG_Student();
        UG_Students ug = new UG_Students();

        pg.display_Grade();
        pg.attendence();

        ug.display_Grade();
        ug.attendence();
    }
}