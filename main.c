#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
	char *mode = argv[1];
	char *values = argv[2]; 
	
	if (!strcmp(mode, "SET")){
		char *file = "text.txt";
		//printf("%s", values);
		FILE *f = fopen(file, "w");
		fprintf(f, "%s", values);
		fclose(f);
	
	}
	else if(!strcmp(mode, "GET")){
			const int line_size = 65000;
			char line[line_size];
			char *file = "text.txt";
			FILE *f = fopen(file, "r");
			fgets(line, line_size, f);
			char *newline = line;
			printf("The state of LEDS is following: %s", newline);
			fclose(f);

	}
	
	else if(!strcmp(mode, "SOR")){
		int zero_amount = 0;
		const int line_size = 65000;
		char line[line_size];
		char *file = "text.txt";
		FILE *f = fopen(file, "r");
		fgets(line, line_size, f);
		fclose(f);
		

		
	
		char output_arr[strlen(line)];
		for (int i = 0; i < strlen(line); i++){
			if (line[i] == '0'){
				zero_amount = zero_amount + 1;
				
			}
		}
		
		FILE *fw = fopen(file, "w");
		
		for (int i = 0; i < strlen(line); i++){
			if (zero_amount > 0){
				output_arr[i] = '1';
				zero_amount = zero_amount - 1;
				fprintf(fw, "0");
				
			}
			else {
				output_arr[i] = '0';
				//printf("line num: %c\n", line[i]);
				fprintf(fw, "1");
				
			}
			
		}
		
		fclose(f);
		
		
	
	}
	
	

	
	
	
	
	
	
	return 0;


}
