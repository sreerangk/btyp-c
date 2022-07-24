import java.util.Scanner;

public class java_23{
public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);  
        System.out.println("Enter size of array: ");  
        int limit = sc.nextInt();
        int array[][]=new int[10][10];
        getArray(limit,array,sc);
        displayArray(limit,array,sc);
}
static void getArray(int a,int array[][],Scanner sc){
    int i,j;
    System.out.println("Enter the value of Array :");
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            array[i][j]=sc.nextInt();
        }
    }
    
}
static void displayArray(int a,int array[][],Scanner sc){
    int i,j;
    System.out.println("Array elements are:");
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            System.out.print(" "+array[i][j]);
        }
        System.out.println("");
    }
}
}