#include <string>
#include <iostream>

using namespace std;
/*
顾名思义，可以从后往前找匹配的字符，并且，这个字符可以以字串的形式给出，也就是只要匹配参数中字串的任意字符就返回其位置，
这对于UNIX风格和Windows风格的文件夹路径处理很方便，例如：
*/

int main()
{
	std::string test = R"(H:\Glodon\Data\xinhangcheng_proj\xinhangcheng_max\EXPORT\xinhangcheng_road\\obj)";
	std::string sep = "/\\";
	cout << "find result:" << test.find(sep) << endl;
	cout << "find_last_of result:"<< test.find_last_of(sep) << endl;;

	return 0;
}
/*
find result:4294967295   表示没找到
find_last_of result:75  可以找到
*/