//  Project Statement

// Develop a Supermarket Billing System in Java that allows a supermarket to generate bills 
// for different types of products.
// The system should:

// Create a base class Product containing common product details such as:
// Product ID
// Product name
// Price
// Quantity

// Create different product categories using inheritance, such as:
// GroceryProduct
// ElectronicProduct
// ClothingProduct
// Each subclass should have at least one additional attribute and should override a method such
//  as calculatePrice() to calculate the product cost according to its category.
// The system should calculate:
// Subtotal
// Discount
// Tax
// Final bill amount
// Implement exception handling for situations such as:
// Invalid quantity
// Invalid price
// Product not found
// Invalid menu choice
// Display a properly formatted supermarket bill.



import java.util.Scanner;

class Product {

    int productId;
    String ProductName;
    double price;
    int quantity;

    Product(int productId, String ProductName, double price, int quantity) {

        if (quantity < 0) {
            throw new IllegalArgumentException("Invalid quantity");
        }

        if (price < 0) {
            throw new IllegalArgumentException("Invalid price");
        }

        this.productId = productId;
        this.ProductName = ProductName;
        this.price = price;
        this.quantity = quantity;
    }
double calculatePrice() {
        return price * quantity;
    }
void displayProduct() {
        System.out.println("Product ID: " + productId);
        System.out.println("Product Name: " + ProductName);
        System.out.println("Price: " + price);
        System.out.println("Quantity: " + quantity);
    }}
class GroceryProduct extends Product {
    String category;
GroceryProduct(int productId, String ProductName, double price,
                   int quantity, String category) {

                    super(productId, ProductName, price, quantity);
this.category = category;
    }

    @Override
    double calculatePrice() {

        double subtotal = super.calculatePrice();
        double discount = subtotal * 0.1;
        return subtotal - discount;
    }

    @Override
    void displayProduct() {

        super.displayProduct();
        System.out.println("Category: " + category);
        System.out.println("Total Price after discount: " + calculatePrice());
    }}
class ElectronicProduct extends Product {
    String brand;

    ElectronicProduct(int productId, String ProductName, double price,
                      int quantity, String brand) {

        super(productId, ProductName, price, quantity);
        this.brand = brand;
    }

    @Override
    double calculatePrice() {

        double subtotal = super.calculatePrice();
        double tax = subtotal * 0.15;

        return subtotal + tax;
    }

    @Override
    void displayProduct() {

        super.displayProduct();
        System.out.println("Brand: " + brand);
        System.out.println("Total Price after tax: " + calculatePrice());
    }
}

class ClothingProduct extends Product {

    String size;

    ClothingProduct(int productId, String ProductName, double price,
                    int quantity, String size) {

        super(productId, ProductName, price, quantity);
        this.size = size;
    }
    @Override
    double calculatePrice() {

        double subtotal = super.calculatePrice();
        double discount = subtotal * 0.05;

        return subtotal - discount;
    }
@Override
    void displayProduct() {

        super.displayProduct();
        System.out.println("Size: " + size);
        System.out.println("Total Price after discount: " + calculatePrice());
    }}
public class project {
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
        System.out.println("Select Product Category: ");
        System.out.println("1. Grocery");
        System.out.println("2. Electronics");
        System.out.println("3. Clothing");
        int choice = sc.nextInt();
        Product product = null;
        switch (choice) {
            case 1:
                try {
                    System.out.println("Enter Product ID: ");
                    int prodId = sc.nextInt();
                    System.out.println("Enter Product Name: ");
                    String productName = sc.next();
                    System.out.println("Enter Price: ");
                    double prodPrice = sc.nextDouble();
                    System.out.println("Enter Quantity: ");
                    int prodQuantity = sc.nextInt();
                    System.out.println("Enter Date of Expiry: ");
                    String expiryDate = sc.next();
                    product = new GroceryProduct(
                            prodId,
                            productName,
                            prodPrice,
                            prodQuantity,
                            expiryDate
                    );
                } catch (IllegalArgumentException e) {
                    System.out.println(e.getMessage());
                }
                break;
            case 2:

                try {

                    System.out.println("Enter Product ID:");
                    int prodId = sc.nextInt();

                    System.out.println("Enter product name:");
                    String productName = sc.next();

                    System.out.println("Enter price:");
                    double prodPrice = sc.nextDouble();

                    System.out.println("Enter quantity:");
                    int prodQuantity = sc.nextInt();

                    System.out.println("Enter Warranty Period: ");
                    String warrantyPeriod = sc.next();

                    product = new ElectronicProduct(
                            prodId,
                            productName,
                            prodPrice,
                            prodQuantity,
                            warrantyPeriod
                    );

                } catch (IllegalArgumentException e) {

                    System.out.println(e.getMessage());
                }

                break;


            case 3:

                try {

                    System.out.println("Enter Product ID:");
                    int prodId = sc.nextInt();

                    System.out.println("Enter Product Name:");
                    String productName = sc.next();

                    System.out.println("Enter Price:");
                    double prodPrice = sc.nextDouble();

                    System.out.println("Enter Quantity:");
                    int prodQuantity = sc.nextInt();

                    System.out.println("Enter Size: ");
                    String size = sc.next();

                    product = new ClothingProduct(
                            prodId,
                            productName,
                            prodPrice,
                            prodQuantity,
                            size
                    );

                } catch (IllegalArgumentException e) {

                    System.out.println(e.getMessage());
                }

                break;


            default:

                System.out.println("Invalid menu choice");
                sc.close();
                return;
        }


        // Display Product
        if (product != null) {

            System.out.println("\n========== PRODUCT DETAILS ==========");

            product.displayProduct();

            System.out.println("=====================================");


            // Bill Calculation
            double subtotal = product.price * product.quantity;

            double discount = 0;
            double tax = 0;

            if (product instanceof GroceryProduct) {

                discount = subtotal * 0.10;

            } else if (product instanceof ElectronicProduct) {

                tax = subtotal * 0.15;

            } else if (product instanceof ClothingProduct) {

                discount = subtotal * 0.05;
            }


         double amountAfterDiscount = subtotal - discount;
         double finalAmount = amountAfterDiscount + tax;
         System.out.println("\n========== SUPERMARKET BILL ==========");
         System.out.println("Product ID      : " + product.productId);
         System.out.println("Product Name    : " + product.ProductName);
         System.out.println("Price           : " + product.price);
         System.out.println("Quantity        : " + product.quantity);
         System.out.println("--------------------------------------");
         System.out.println("Subtotal        : " + subtotal);
         System.out.println("Discount        : " + discount);
         System.out.println("Tax             : " + tax);
         System.out.println("--------------------------------------");
         System.out.println("Final Amount    : " + finalAmount);
         System.out.println("======================================");
         System.out.println("       THANK YOU FOR SHOPPING!");
        }
sc.close();
    }
}