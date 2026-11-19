//create a class shape with methods display shape then create a class circle and rectangle 
//and calculate area
class shape {
    void display_shape() {
        System.out.println("This is a shape");
    }
}
class circle extends shape {
    double radius;
    circle(double r) {
        radius = r;
    }
    void calculate_area() {
        System.out.println("Area of circle: " +(3.14 * radius * radius));
    }
}
class rectangle extends shape {
    double length, width;
    rectangle(double l, double w) {
        length = l;
        width = w;
    }
    void calculate_area() {
        System.out.println("Area of rectangle: " + (length * width));
    }
}
public class Qn3 {
    public static void main(String[] args) {
        circle c1 = new circle(5);
        rectangle r1 = new rectangle(10, 5);

        c1.display_shape();
        c1.calculate_area();

        r1.display_shape();
        r1.calculate_area();
    }
}