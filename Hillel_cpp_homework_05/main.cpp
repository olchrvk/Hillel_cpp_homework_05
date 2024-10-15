#include<iostream>

using namespace std;

class Numbers
{
	private:
		int var1;
		int var2;
	public:
		void set(int var1, int var2);
		void print();
};

class Ball
{
	private:
		string m_color = "Red";
		float m_radius = 20.0f;
	public:
		Ball();
		Ball(string color);
		Ball(float radius);
		Ball(string color, float radius);
		void Show();
};

int main()
{
	int number1 = 5;
	int number2 = 3;

	Numbers numbers;

	cout << "###TASK 1####" << "\n";
	numbers.set(number1, number2);
	numbers.print();

	cout << "###TASK 2####" << "\n";
	Ball ball_1;
	ball_1.Show();

	string sTmp = "Blue";
	Ball ball_2(sTmp);
	ball_2.Show();

	float fTmp = 3.14f;
	Ball ball_3(fTmp);
	ball_3.Show();

	sTmp = "Green";
	fTmp = 4.15f;
	Ball ball_4(sTmp, fTmp);
	ball_4.Show();

	return 0;
}


void Numbers::set(int var1, int var2) 
{
	this->var1 = var1;
	this->var2 = var2;
}

void Numbers::print()
{
	cout << "number 1: " << var1 << "\n";
	cout << "number 2: " << var2 << "\n";
}

Ball::Ball()
{
	m_color = "White";
	m_radius = 0;
}

Ball::Ball(string color)
{
	m_color = color;
}

Ball::Ball(float radius)
{
	m_radius = radius;
}

Ball::Ball(string color, float radius)
{
	m_color = color;
	m_radius = radius;
}

void Ball::Show() 
{
	cout << "Color: " << m_color << "\n";
	cout << "Radius: " << m_radius << "\n";
}