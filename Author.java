
package testbook;

public class Author {
    // Private variables
    private String name;
    private String email;
    private char gender;
    
    //Constructors;
    
    public Author(String name, String email, char gender){
        this.name=name;
        this.email=email;
        this.gender=gender;
    }
    
    //Public getters and setters for private variables
    
    public String getName(String name){
        return name;
    }
    
    public char getGender(char gender){
        return gender;
    }
    
    public String getEmail(String email){
        return email;
    }
    
    public void setEmail(String email){
        this.email=email;
    }
    
    public String toString(){
        return name + " (" + gender + ") at " + email;
    }
}
