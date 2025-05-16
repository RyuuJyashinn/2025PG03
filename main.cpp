#include <stdio.h>
#include<iostream>

template <typename Type1, typename Type2>
class myCompare {
private:
	Type1 num1;
	Type2 num2;
public:
	myCompare(Type1 temp1, Type2 temp2) : num1(temp1), num2(temp2) {}

	Type1 Min(){
  if (num1 < num2)
			return static_cast<Type1>(num1);
		else
			return static_cast<Type1>(num2);

	}
};

int main() {
	myCompare<int, float> result1(100,50.0f);
	std::cout << "int(100)　と float(50.0f) を比べて小さい数字を返す：" << result1.Min() << std::endl;
	myCompare<int, double> result2(80, 20.0);
	std::cout << "int(80)　と double(20.0) を比べて小さい数字を返す：" << result2.Min() << std::endl;
	myCompare<float, int> result3(2.0f, 18);
    std::cout << "float(2.0f)　と int(18) を比べて小さい数字を返す：" << result3.Min() << std::endl;
	myCompare<float, double> result4(11.0f, 3.5);
	std::cout << "float(11.0f)　と double(3.5) を比べて小さい数字を返す：" << result4.Min() << std::endl;
	myCompare<double,int> result5(234.0, 123);
	std::cout << "double(234.0)　と int(123) を比べて小さい数字を返す：" << result5.Min() << std::endl;


	return 0;
}