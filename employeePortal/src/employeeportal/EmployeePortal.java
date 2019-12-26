/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package employeeportal;
import java.io.*;
import java.util.*;
import javax.xml.parsers.*;
/**
 *
 * @author Admin
 */
public class EmployeePortal {

    /**
     * @param args the command line arguments
     */
    static ArrayList<Employee> eList = new ArrayList<Employee>();
    public static void main(String[] args) {
        // TODO code application logic here
        int choice;
        Scanner s = new Scanner(System.in);
        boolean con = true;
        System.out.println("Welcome to employee portal!!");
        while(true){
        System.out.println("Choose from the given option");
        System.out.println("1.create account");
        System.out.println("2.view all details(privilege required)");
        System.out.println("3.parse xml document");
        System.out.println("4.view personal details");
        System.out.println("5.exit");
        System.out.println("Enter your choice: ");
        choice = s.nextInt();
        switch(choice){
            case 1:
                createAcc();
                break;
            case 2:
                allDetails();
                break;
            case 5:
                System.exit(0);
        }
        }
    }
    public static void createAcc(){
        Employee e;
        Scanner s= new Scanner(System.in);
        try{
        System.out.println("Enter your name: ");
        String name = s.nextLine();
        System.out.println("Enter your Employee ID: ");
        String empId= s.nextLine();
        System.out.println("Enter your department: ");
        String department=s.nextLine();
        System.out.println("Enter your salary: ");
        int salary = s.nextInt();
        System.out.println("Enter your age: ");
        int age = s.nextInt();
        File file = new File("Emp.txt");
        if(!file.exists()){
            file.createNewFile();
        }
        RandomAccessFile ras = new RandomAccessFile(file,"rw");
       /* while(ras.getFilePointer() < ras.length()){
            String line = ras.readLine();
            int index = line.indexOf('!');
            String newName = line.substring(0,index);
            int num = Integer.parseInt(line.substring(index+1));
            if(name == newName && num == number){
                System.out.println("Entry already exist!!");
                return;
            }
        }*/
        ras.writeBytes(name+","+empId+","+department+","+salary+","+age);
        ras.writeBytes(System.lineSeparator());
        e = new Employee(name,empId,department,salary,age);
        eList.add(e);
        System.out.println("Account created!!");
        ras.close();
        }
        catch(Exception ex){
            System.out.println(ex.getMessage());
        }
        
    }
    public static void allDetails(){
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the password: ");
        String password = s.next();
        if(password.equals("root")){
            for(Employee e:eList){
                System.out.println(e.name+" "+e.empId+" "+e.department+" "+e.salary+" "+e.age);
            }
        }
        else{
            System.out.println("wrong password!!");
        }
    }
}
