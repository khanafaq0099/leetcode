#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* addBinary(char* a, char* b) {
    int len1 = strlen(a);
    int len2 = strlen(b);

    int loop = (len1 > len2) ?  len1 : len2;
    int larg = loop + 1;
	
    char *ret = (char *)malloc(larg * sizeof(char) + 1);
    ret[larg--] = '\0';
    int carry = 0;

    int le1 = len1 - 1;
    int le2 = len2 - 1;
    
    int tmpa =0, tmpb =0;
    for(int i = 0; i < loop; i++)
    {
       if(i<= len1 -1)  tmpa  = a[le1--] - '0';
       else  tmpa = 0;
       if(i<= len2 -1)  tmpb  = b[le2--] - '0';
       else  tmpb = 0;

        if(tmpa + tmpb == 2){
            if(carry == 0)   ret[larg--] = '0';
            else             ret[larg--] = '1';
            carry = 1;
        } else if(tmpa + tmpb == 1){
            if(carry == 0)   ret[larg--] = '1';
            else             ret[larg--] = '0';
        }else if(tmpa + tmpb == 0){
            if(carry == 0)   ret[larg--] = '0';
            else             ret[larg--] = '1';
            carry = 0;
        }
    }

    if(carry) ret[larg--] = '1';
    else      memmove(ret, ret+1, loop+1);

    return ret;
}

int main(){
	char a[] = "11"; 
	char b[] = "1";

	char *res = addBinary(a,b);
	printf("res : %s\n", res);
	// free(res);


	return 0;
}
