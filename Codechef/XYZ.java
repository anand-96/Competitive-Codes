/*Create a program that helps banks to maintain records. It should have
following facilities.
o Anybody can create current or saving account with following initial information:
account number, name, balance, and branch.
o display account detail for a particular accounts.
o display total money deposited in bank.
o allow deposit and withdrawal in an account .
o for saving account opening balance and minimum balance must be 5000.
o for current account opening balance and minimum balance must be 1000.
o can not withdraw the amount from the account that makes balance less than
the minimum balance. */
import java.util.Scanner;
class savingCreate
{
	int accountNo;
	String name;
	float balance;
	String branch;
	 savingCreate()
	 {
	 }
	 savingCreate(int accNo,String nm,float bal,String brnch)
	{
		if(bal<5000f)
System.out.println("Not possible to open an account\nAccount opennig balance must be 5000 or more");
		else{
			accountNo=accNo;
			 name=nm;
			 balance=bal;
			branch=brnch;	
	                  }
	}
	void Display()
	{
		 System.out.println("Your account number is : "+accountNo);
		 System.out.println("User name : "+name);
		 System.out.println("Balance Available : "+balance);
		 System.out.println("Branch name : "+branch);
	}
}
class currentCreate
{
	int accountNo;
	String name;
	float balance;
	String branch;
	currentCreate()
	{
	}
	currentCreate(int accNo,String nm,float bal,String brnch)
	{
		if(bal<1000f)
System.out.println("Not possible to open an account\nAccount opennig balance must be 5000 or more");
		else{
			accountNo=accNo;
			 name=nm;
			 balance=bal;
			branch=brnch;	
	                  }
	}
	void Display()
	{
		 System.out.println("Your account number is : "+accountNo);
		 System.out.println("User name : "+name);
		 System.out.println("Balance Available : "+balance);
		 System.out.println("Branch name : "+branch);
	}
	void DisplayTotal()
	{
		 System.out.print("Your account number is : "+accountNo);
		 System.out.print("   User name : "+name);
		 System.out.print("   Balance Available : "+balance);
		 System.out.println("   Branch name : "+branch);
	}
}

class Deposit extends savingCreate
{
	float deposit;
	Deposit(float amount)
	{
		deposit=amount;
		balance+=amount;
	}
}
class savingWithdrawl extends savingCreate
{
	float withdrawl;
	savingWithdrawl(float amount)
	{
		if(balance<5000f)
			System.out.println("Withdrawl not possible due to insufficient balance");
		else
		{
			withdrawl=amount;
			balance-=amount;
		}
	}
}
class currentWithdrawl extends currentCreate
{
	float withdrawl;
	currentWithdrawl(float amount)
	{
		if(balance<1000f)
			System.out.println("Withdrawl not possible due to insufficient balance");
		else
		{
			withdrawl=amount;
			balance-=amount;
		}
	}
}

class XYZ
{
	public static void main(String arg[])
	{
		Scanner sc=new Scanner(System.in);
		currentCreate ob[]=new currentCreate [3];                     483 Sajan 5000 jsdks
		savingCreate obj[]=new savingCreate [3];					
																		231 akshay 5000 ajks
																	345 Aditya 7000 asjh
																	122 Burhan 1000 sahg
																	123 Anand 5000 sgsits

while(true)
{
		for(int i=0,j=0;i<3;i++,j++)
		{
		System.out.println("Enter your choice\n");
		System.out.println("1: To create current or saving account.\n2: To display account details for a particular accounts.\n3: To allow deposit in an account.\n4: To allow Withdrawl in an account.\n5: List of accounts to be created");
		int ch=sc.nextInt();
		switch(ch)
		{
			case 1:
			System.out.println("1:For saving\n2:current ");
			if(sc.nextInt()==1)
			{
			System.out.println("Enter Acc No,name,opening balance,branch");
		obj[i]=new savingCreate(sc.nextInt(),sc.next(),sc.nextFloat(),sc.next());
		System.out.println("\n To show account details (Y/N)");
		if(sc.next().charAt(0)=='Y')
		obj[i].Display();
		else 
		break;
		}
		else{
			System.out.println("Enter Acc No,name,opening balance,branch");
	ob[j]=new currentCreate(sc.nextInt(),sc.next(),sc.nextFloat(),sc.next());
		System.out.println("\n To show account details (Y/N)");
		if(sc.next().charAt(0)=='Y')
		ob[j].Display();
		break;
		}
		break;
		case 2:
		case 2:
			System.out.println("Your account details .......:");
			System.out.println("\nCurrent Accounts Created");
			for(int k=0;k<ob.length;k++)
			{
			System.out.println("User "+(k+1));
			ob[k].DisplayTotal();
			}
			System.out.println("\nSaving Accounts Created");
			for(int k=0;k<ob.length;i++)
			{
			System.out.println("User "+(k+1));
			ob[k].DisplayTotal();
			}
			break;
		case 3:
			System.out.println("Enter amount to be deposited\n");
			Deposit(sc.nextFloat());
		}
		}
}
	}
}
