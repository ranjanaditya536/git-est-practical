class test {
int a, b;
 void display() {
        System.out.println("a = " + a);
        System.out.println("b = " + b);
    }
}
class testing extends test {
    int c;
    void display() {
        System.out.println("a = " + a);
        System.out.println("b = " + b);
        System.out.println("c = " + c);
    }
}
public class SimpleInherit {
    public static void main(String[] args) {
        test t1 = new test();
        t1.a = 10;
        t1.b = 20;
        t1.display();

        testing t2 = new testing();
        t2.a = 30;
        t2.b = 40;
        t2.c = 50;
        t2.display();
    }
}

