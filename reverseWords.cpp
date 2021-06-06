#include <stdio.h>
#include <string.h>
#include <iostream>
int main(void){
	char str[300][210], temp[200];
	int n=0, len=0, i, j=0;
	memset(str, 0, sizeof(str));

	while(fgets(temp, sizeof(temp), stdin)){
		len = strlen(temp);
		std::cout << len << std::endl;
		for(i=0;i<len;i++){
			if ((temp[i] >= 'a' && temp[i] <= 'z')||(temp[i] >= 'A' && temp[i] <= 'Z')){
				str[n][j] = temp[i];
				j++;

			}else if(j > 0){
				j=0;
				n++;
				std::cout << "@@" <<std::endl;

			}
				
		}

		for(i=n;i>0;i--){
			printf("%s ", str[i]);

		}
		printf("%s \n", str[0]);

		n=0; j=0;i=0;len=0;
		memset(str, 0, sizeof(str));
		memset(temp, 0, sizeof(temp));

	}

	return 0;
}
