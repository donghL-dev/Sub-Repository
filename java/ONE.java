
public class ONE {

	private String title;
	public ONE(String title) {
		this.title = title;
	}
	public String getTitle() {
		return title;
	}
	
	public static void main(String[] args) {
		ONE mysong = new ONE("Let it go");
		ONE yoursong = new ONE("������Ÿ��");
		System.out.println("�� �뷡�� " + mysong.getTitle());
		System.out.println("�� �뷡�� " + yoursong.getTitle());
		

	}

}
