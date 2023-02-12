public class Main{
	public abstract class Shape{
		String color;
		public abstract double area();
	}
	public class Circle extends Shape{
		double radius;
		public double area(){
			return 3.14*radius*radius;
		}
	}
	public class Rectangle extends Shape{
		double length;
		double width;
		public double area(){
			return length*width;
		}
	}
	public static void main(String[] args){
		Rectangle r = new Rectangle();
		Circle c = new Circle();
		r.length = 10;
		r.width = 20;
		c.radius = 5;
		System.out.println("Area of rectangle is "+r.area());
		System.out.println("Area of circle is "+c.area());
	}
}
