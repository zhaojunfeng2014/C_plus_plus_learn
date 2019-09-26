#include <string>
#include <iostream>

using namespace std;

int main()
{
	string src = "abcdefg";
	string it = "x";
	if (src.find(it) >= 0)
	{
		printf("find it!\n");
	}
	size_t pos = src.find(it);
	printf("find result:%d\n", src.find(it));//-1,这是假象，因为返回值不能用%d输出
	printf("find result:%u\n", src.find(it)); //这是真实的，一般用string::npos表示此值，
	if (src.find(it) != string::npos)
	{
		printf("find it again");
	}
	cout << it.max_size() << endl; //为什么不定义为静态方法， 输出为2^32-1，为int的最大值，

	return 0;
}

/*
find it!
find result:-1
find result:4294967295
2147483647
*/

