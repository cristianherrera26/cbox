#ifndef _CBOX_H
#define _CBOX_H	1

int basename_main(int argc, char *argv[]);
int dirname_main(int argc, char *argv[]);
int echo_main(int argc, char *argv[]);
int false_main(int argc, char *argv[]);
int logname_main(int argc, char *argv[]);
int pwd_main(int argc, char *argv[]);
int true_main(int argc, char *argv[]);
int whoami_main(int argc, char *argv[]);
int yes_main(int argc, char *argv[]);

typedef struct {
	char *progname;
	int (*main)(int argc, char *argv[]);
} prog_t;

static prog_t programs[] = {
	{ "basename", basename_main },
	{ "dirname", dirname_main },
	{ "echo", echo_main },
	{ "false", false_main },
	{ "logname", logname_main },
	{ "pwd", pwd_main },
	{ "whoami", whoami_main },
	{ "true", true_main },
	{ "yes", yes_main },
	{ NULL, NULL }
};

#endif
