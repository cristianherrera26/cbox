/* cbox: src/cbox.h
 * Written by littlefly365 (cristianherrera26)
 * Last change: 12-08-2026
*/

/*
 * Copyright (c) 2026, littlefly365
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _CBOX_H
#define _CBOX_H	1

int basename_main(int argc, char  *argv[]);
int dirname_main(int argc, char  *argv[]);
int echo_main(int argc, char  *argv[]);
int false_main(int argc, char  *argv[]);
int logname_main(int argc, char  *argv[]);
int pwd_main(int argc, char  *argv[]);
int true_main(int argc, char  *argv[]);
int whoami_main(int argc, char  *argv[]);
int yes_main(int argc, char  *argv[]);

typedef struct {
	char  *progname;
	int ( *main)(int argc, char  *argv[]);
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
