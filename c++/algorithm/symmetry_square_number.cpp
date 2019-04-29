//打印所有不超过n（n<256）的，其平方具有对称性质的数。如11*11=121。
#include <stdio.h>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
	char str[10];
	for (int i = 1; i < 256; i++) {
		sprintf(str, "%d", i*i);
		string strTemp = str;
		reverse(strTemp.begin(), strTemp.end());
		if (str == strTemp) {
			printf("%d\n", i);
		}
	}
	char c = scanf("%d");
	return 0;
}

