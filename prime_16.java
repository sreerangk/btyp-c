import java.util.Scanner;   
  
public class prime_16{  
  
   public static void main(String[] args) {  
        Scanner sc = new Scanner(System.in);  
        System.out.println("Enter a number : ");  
        int pm = sc.nextInt();
        int flag=0;
        if(pm==0||pm==1){
            flag=1;        
        }
        for(int i=2;i<pm;i++){
        if(pm%i==0){
            flag=1;
            break;
        }
        
        }
        
        if(flag==0){
            System.out.println("its prime number");
        }
        else{
        System.out.println("its not prime number");
        }
        sc.close();
   }  
}  