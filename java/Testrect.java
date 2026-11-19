 class rect {
    double length,bredth,area;
    String color;

    void set_length(double l){
        length=l;
    }

     void set_bredth(double b){
        bredth=b;
    }

     void set_color(String c){
        color=c;
    }

    void get_area()
{
    area = length * bredth;
}
}
   public class Testrect{
    public static void main(String[] args) {
        
        rect r1 = new rect();
        rect r2 = new rect();

        r1.set_length(12);
        r1.set_bredth(14);
        r1.set_color("Yellow");
        r1.get_area();

        r2.set_length(10);
        r2.set_bredth(19);
        r2.set_color("Cyan");
        r2.get_area();

        if ( r1.area == r2.area  &&  r1.color.equals(r2.color)){
            System.out.println("Rectangle matched");
        }
            else{
             System.out.println("Rectangle did not match");
            }

    }
   }

