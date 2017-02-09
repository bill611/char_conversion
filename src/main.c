#include <stdio.h>
#include <string.h>
#include <stdio.h>  
#include <string.h>  
#include <malloc.h>  
#include <memory.h> 
#include "char_conversion.h"

static char txt_src[] = "123你好abc";
static char txt_dir[32];

int main(int argc, char *argv[])
{
	printf("start\n");
	FILE *file;
	file = fopen("text.txt","w");

	utf8ToGb2312(txt_dir,sizeof(txt_dir),txt_src,strlen(txt_src));
	fwrite(txt_dir,strlen(txt_dir),1,file);

	// fwrite(txt_src,sizeof(txt_src),1,file);
	fflush(file);
	fclose(file);
	return 0;
}
