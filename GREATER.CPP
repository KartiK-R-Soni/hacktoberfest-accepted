 #include<iostream.h>
 #include<conio.h>

 void main()
 {
     clrscr();
		int a, b, c;
		cout<<"Enter two nos. ";
		cin>>a>>b;

		if(a>b)
		{
			c=a;
		}
		else if(b>a)
		{
			c=b;
		}

		cout<<"The greater result is "<<c;
     getch();
 }