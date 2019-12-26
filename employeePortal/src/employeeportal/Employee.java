/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package employeeportal;
import java.io.*;
/**
 *
 * @author Admin
 */
public class Employee {
  public String name;
  public String empId;
  public String department;
  public int salary;
  public int age;
  Employee(String name,String empId,String department,int salary,int age){
      this.name=name;
      this.empId=empId;
      this.department=department;
      this.salary=salary;
      this.age=age;
  }
}
