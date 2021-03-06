#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* main */
int main(void) {
    FILE *fp;
    char *filename = "tosho1.txt";
    int ch;

    /* ファイルのオープン */
    if ((fp = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "%sのオープンに失敗しました.\n", filename);
        exit(EXIT_FAILURE);
    }

    /* ファイルの終端まで文字を読み取り表示する */
    while (( ch = fgetc(fp)) != EOF ) {
       if(isalpha(ch)!=0){
		printf("%c",ch);
	}
	else if(ch == '\n'){
		printf(" \n");
	}
	else	printf(" ");
    }

    /* ファイルのクローズ */
    fclose(fp);

    return EXIT_SUCCESS;
}
