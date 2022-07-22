import java.util.Scanner;
public class prime{
  public static void main(String ar[]) {
    Scanner sc=new Scanner(System.in);
    System.out.println("enter the number \n");
    int a=sc.nextInt();
    for(int i=2;i<a/2;i++){
        if(a%i==0){
            System.out.println("numbr",a);
            
        }
    }
    
    System.out.println("");
  }
}