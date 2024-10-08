# include "stock_17-1.h"

// 사용자 정의 생성자
Stock::Stock(string NAME, int num, float VALUE)
{
	name = NAME;
	shares = num;
	share_val = VALUE;
	cal(shares, share_val);
}

// new 디폴트 생성자 by 오버로딩
Stock::Stock()
{
	name = "";
	shares = 0;
	share_val = 0;
	cal(shares, share_val);
}

// 파괴자
Stock::~Stock()
{
	cout << name << "클래스가 소멸되었습니다.\n";
	cout << "-------------------------------------\n";
}

void Stock::buy(int num, float VALUE)
{
	shares += num;
	share_val = VALUE;
	cal(shares, share_val);
}

void Stock::sell(int num, float VALUE)
{
	shares -= num;
	share_val = VALUE;
	cal(shares, share_val);
}

void Stock::update(float VALUE)
{
	share_val = VALUE;
	cal(shares, share_val);
}

void Stock::show()
{
	cout << "회사명: " << name << endl;
	cout << "주식 수: " << shares << endl;
	cout << "주가: " << share_val << endl;
	cout << "주식 총 가치: " << total_val << endl;
	cout << "===============================" << endl;
}
