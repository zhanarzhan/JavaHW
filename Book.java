
package testbook;

public class Book {
    private String name;
    private Author author;
    private double price;
    private int qtyInStock;
    
    //Constructors for private variables
    public Book(String name, Author author, double price){
        this.name=name;
        this.author=author;
        this.price=price;
        this.qtyInStock=0;
    }
    
    public String getName(){
        return name;
    }
    
    public Author getAuthor(){
        return author;
    }
    
    public double getPrice(){
        return price;
    }
    
    public void setPrice(double price){
        this.price=price;
    }
    
    public int getQtyInStock(){
        return qtyInStock;
    }
    
    public void setQtyInStock(){
        this.qtyInStock=qtyInStock;
    }
    
    public String toString(){
        return "'" + name + "' by " + author;
    }
}
