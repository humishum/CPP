public class Book {
    public static final int SIZE =10;
	public static void main(String[] args) {
         drawLine1();
		 drawSteps();
		 drawLine2();
		 drawBJP();
		 drawLine3();
	}
	public static void drawLine1()
	{
		for(inti=0; i<COLUMN-M;i++)
		{
			System.out.println(" ");
		}
		System.out.print("+");
		for (int i=0;i<COlUMN-M;i++)
		{
	System.out.println("-");
		}
	System.out.println("+");
	}
	public static void drawSteps ()
	{
		int n=33;
		int m=16;
		for(int i=0;i<STEPS;i++)
		{
	for (int j=0; j<COLUMN-n;j++)
	{
		System.out.println(" ");
	}
	System.out.println("/");
		for (int j=0;j<COLUMN-m;j++)
		{
			System.out.println(" ");
		}
		System.out.println("_");
		for (int j=0;j<=i;j++){
      System.out.println("_/");
    }
    for(int j =0; j<1;j++){
      System.out.println("/");
    }
    System.out.println();
    n=n+1;
    m=m+3;

	}
public static void drawLine2(){
  System.out.print("+");
  for (int i=0; i <COLUMN -M; i++){
    System.out.print("-");
  }
  System.out.print("+");
  for(int i = 0; i<COLUMN-33;i++)
  {
    System.out.print("/");
  }
  System.out.println();
}
public static void drawBJP(){
  int n=33;
  for(int i =0; i<LINE;i++){
    System.out.print("|    BUILDING JAVA PROGRAMS    |");
    for (int j=0;j<COLUMN-n;j++)
    {System.out.print("/");
  }
  n=n+2;
  System.out.println();
  }
}
public static void drawLine3(){
  System.out.print("+");
  for(int i-1; i<COLUMN-M;i++)
  {System.our.print("-");
}
System.out.println("+");
}
}
