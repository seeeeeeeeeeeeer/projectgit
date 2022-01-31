#include<iostream>
#include<vector>
#include<string>

using namespace std;



class point
{

	// Поля
private:
	int x;
	int y;

	//Методи
public:
	// методи аксесори

	// методи модифікатори
	// set
	// методи
	//get

	void set_x(int x_value)
	{
		x = x_value;
	}

	void set_y(int y_value)
	{
		y = y_value;
	}

	int get_x()
	{
		return x;
	}

	int get_y()
	{
		return y;
	}

	void set()
	{
		cout << "Enter X - ";
		cin >> x;
		cout << "Enter Y - ";
		cin >> y;
	}

	void set(int x_value, int y_value)
	{
		x = x_value;
		y = y_value;
	}

	void print()
	{
		cout << "X: " << x  << "\n";
		cout << "Y: " << y << "\n";
	}
};




int main()
{
	point p1;
		p1.set(30, 50);
		p1.print();

		point p2;
		p2.set();
		p2.print();

		point p3;
		p3.set_x(700);
		p3.set_y(200);
		p3.print();



	return 504;
}