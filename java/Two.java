import java.util.Scanner;
public class Two {

	private String name, tel;
	private static Scanner scanner;
	public Two(String name, String tel) {
		this.name = name;
		this.tel = tel;
	}
	public String getName() { return name; }
	public String getTel() { return tel; }
	
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		System.out.println("�̸��� ��ȭ��ȣ �Է� >>  ");
		Two a = new Two(scanner.next(), scanner.next());
		System.out.println("�̸��� ��ȭ��ȣ �Է� >>  ");
		Two b = new Two(scanner.next(), scanner.next());
		
		System.out.println( a.getName() + " �� ��ȣ " + a.getTel() );
		System.out.println( b.getName() + " �� ��ȣ " + b.getTel() );
		scanner.close();
		
		
		
	}

}
