#ifndef _CBOX_H
#define _CBOX_H	1

int basename_main(int argc, char *argv[]);
int dirname_main(int argc, char *argv[]);

typedef struct {
	char *progname;
	int (*main)(int argc, char *argv[]);
} prog_t;

static prog_t programs[] = {
	{ "basename", basename_main },
	{ "dirname", dirname_main },
	{ NULL, NULL }
};

#endif
