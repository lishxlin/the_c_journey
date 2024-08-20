#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define DEBUGGING_ENABLE 1
#define DEBUGGING_DISABLE 0
#define ORIGIN_MODE 0
#define UPPER_MODE 1
#define LOWER_MODE 2
#define NORMAL 0
#define ERR 1
#define WARN 2

typedef int convert_mode;
typedef int debugging_switch;
typedef int info_flag;

void debugging_info(debugging_switch, info_flag, const char *);
convert_mode mode_parser(const char);
void convert_machine(convert_mode, const char *);

int main(int argc, const char *argv[])
{
	convert_mode mode = ORIGIN_MODE; // default mode is origin mode.
	debugging_switch debugging_flag = DEBUGGING_DISABLE;
	
	if (argc < 2) {
		fprintf(stderr, "\033[0;31mERROR: You need at least give an option or a text!\033[0m\n");
		puts("Usage: [OPTIONS] TEXTS");
		puts("\nOptions are:");
		puts("    -p\tOriginally showing texts.");
		puts("    -u\tUpper case your texts.");
		puts("    -l\tLower case your texts.");
		return 1;
	}

	for (int i = 1; i < argc; i++) {
		if (argv[i][0] == '-' && argv[i][1] == 'd' && (strlen(argv[i]) < 3)) {
			debugging_flag = DEBUGGING_ENABLE;
			debugging_info(debugging_flag, WARN, "Debug Flag is setted!");
		}
	}

	for (int i = 1; i < argc; i++) {
		if (argv[i][0] == '-' && (strlen(argv[i]) < 3)) {
			switch (argv[i][1]) {
			case 'd':
				continue;
			case 'p':
				debugging_info(debugging_flag, NORMAL, "Setting to showing original texts.");
				mode = mode_parser('p');
				break;
			case 'u':
				debugging_info(debugging_flag, NORMAL, "Setting to showing Upper cased texts.");
				mode = mode_parser('u');
				break;
			case 'l':
				debugging_info(debugging_flag, NORMAL, "Setting to showing Lower cased texts.");
				mode = mode_parser('l');
				break;
			default:
				fprintf(stderr, "\033[0;31mERROR: \"%s\" can not be parsered!\033[0m\n", argv[i]);
				return 1;
			}
		} else if (argv[i][0] == '-' && (strlen(argv[i]) > 2)) {
			fprintf(stderr, "\033[0;31mERROR: \"%s\" can not be parsered!\033[0m\n", argv[i]);
			return 1;
		} else {
			convert_machine(mode, argv[i]);
			printf(" \n");
		}
	}
	printf("\n");
	return 0;
}

void debugging_info(debugging_switch debugging_flag, info_flag flag, const char *debug_messages)
{
	if (debugging_flag == DEBUGGING_ENABLE) {
		switch (flag) {
		case NORMAL:
			fprintf(stdout, "[INFO] %s\n", debug_messages);
			break;
		case ERR:
			fprintf(stderr, "[ERROR] %s\n", debug_messages);
			break;
		case WARN:
			fprintf(stdout, "[WARN] %s\n", debug_messages);
		default:
			break;
		}
	}
}

convert_mode mode_parser(const char mode)
{
	switch (mode) {
	case 'p':
		return ORIGIN_MODE;
	case 'u':
		return UPPER_MODE;
	case 'l':
		return LOWER_MODE;
	default:
		return ORIGIN_MODE;
	}
}

void convert_machine(convert_mode mode, const char *texts)
{
	switch (mode) {
	case ORIGIN_MODE:
		printf("%s", texts);
		break;
	case UPPER_MODE:
		for (int i = 0; i < strlen(texts); i++)
			printf("%c", toupper(texts[i]));
		break;
	case LOWER_MODE:
		for (int i = 0; i < strlen(texts); i++)
			printf("%c", tolower(texts[i]));
	default:
		break;
	}
}
