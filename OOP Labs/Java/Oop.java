import java.util.Scanner;
class Shape{
	double x,y;
	
	void get_data() {
		Scanner S= new Scanner(System.in);
		System.out.print("Enter base and height: ");
		x=S.nextDouble();
		y= S.nextDouble();
				
	}
}

class Triangle extends Shape{
	void display_area() {
		double area;
		area=0.5*x*y;
		System.out.println("Area = "+area);
	}
}

class Rectangle extends Shape{
	void display_area() {
		double area;
		area=x*y;
		System.out.println("Area = "+area);
	}
	
}
public class Oop {

	public static void main(String args[]) {
		int choice;

		while(true){
        System.out.println("\tMENU"+"\n1. Triangle"+"\n2.Rectangle"+"\n3. Exit");
        System.out.println("Enter your choice:");
        Scanner S=new Scanner(System.in);

		choice=S.nextInt();

		switch(choice){
        case 1:Triangle tri=new Triangle();

		tri.get_data();
		tri.display_area();

		break;

		case 2: Rectangle rect = new Rectangle();

		rect.get_data();
		rect.display_area();

		break;

		case 3: System.exit(0);

		default: System.out.println("Invalid Choice Entered");		
		

}
		}
	}
}