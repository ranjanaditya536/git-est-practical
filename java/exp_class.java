// class MyThread extends Thread {

//     public void run() {
//         System.out.println("Hello from Thread");
//     }
// }
// public class exp_class {
//   public static void main(String[] args) {
//         MyThread t = new MyThread();
//         t.start();
//     }
// }


// class Mythread extends Thread{
//     public void run(){
//        for(int i=1;i<=5;i++){
//         System.out.println(i);

//        }
//     }
// }

// public class exp_class {
//     public static void main(String[] args) {
//         Mythread t1 = new Mythread();
       
//         t1.start();
       
//     }
// }


// class NumberThread extends Thread {

//     public void run() {

//         for (int i = 1; i <= 5; i++) {
//             System.out.println("Number: " + i);
//         }
//     }
// }
// class LetterThread extends Thread {
//     public void run() {
//         for (char ch = 'A'; ch <= 'E'; ch++) {
//             System.out.println("Letter: " + ch);
//         }}}
// public class exp_class {
//     public static void main(String[] args) {
// NumberThread t1 = new NumberThread();
// LetterThread t2 = new LetterThread();
//         t1.start();
//         t2.start();
//     }
// }


// class MyThread extends Thread {

//     public void run() {

//         for (int i = 1; i <= 5; i++) {
//             System.out.println("Thread: " + i);
//         }
//     }
// }

// public class exp_class {

//     public static void main(String[] args) {

//         MyThread t = new MyThread();

//         t.run();

//         System.out.println("Main Thread");
//     }
// }


// class MyThread extends Thread{
//     public void run(){
//         for(int i=1;i<=5;i++){
//             System.out.println(i);

//             try{
//                 Thread.sleep(1000);
//             }
//             catch(InterruptedException e){
//                 e.printStackTrace();
//             }
//         }
//     }
// }

// public class exp_class{
//     public static void main(String[] args) {
//         MyThread t1  = new MyThread();
//         t1.start();
//     }
// }

class MyThread extends Thread{
int n;
   MyThread(int n){
    this.n=n;
   }


public void run(){
    for (int i=1;i<=10;i++){
        System.out.println(n*i);
        }
}}

public class exp_class{
    public static void main(String[] args) {
        MyThread t1 = new MyThread(5);
        MyThread t2 = new MyThread(10);

        t1.start();
        t2.start();
    }
}

