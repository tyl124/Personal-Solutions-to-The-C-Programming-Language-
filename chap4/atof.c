#include <ctype.h>

/* atof: 把字符串s转换为相应的浮点数 */
double atof(char s[]){
	double val, power;
	int i, sign;

	for(i = 0; isspace(s[i]); i++)
		;  /* 跳过空白符 */
	sign = (s[i] == '-') ? -1 : 1;
	if(s[i] == '+' || s[i] == '-')        /* 跳过符号标志 */
		i++;
	for(val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if(s[i] == '.')
		i++;
	for(power = 1.0; isdigit(s[i]); i++){ /* 记录小数位数，最后除 */
		val = 10.0 * val + (s[i] - '0');
		power *= 10;
	}
	
	return sign * val / power;
}


