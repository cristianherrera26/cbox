/* cbox: src/main.c
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

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libbox.h"
#include "cbox.h"

int
exec_main(int argc, char *argv[], char *prog_name)
{
	for (int i = 0; programs[i].progname; i++) {
		if (!strcmp(prog_name, programs[i].progname)) {
			exit(programs[i].main(argc - 1, argv + 1));
		}
	}

	return 1;
}

int
main(int argc, char *argv[])
{
	set_progname(argv[0]);
	exec_main(argc, argv, get_progname());
	/* if argv[0] it's correct the next code shouldn't execute */

	if (argc > 1) exec_main(argc - 1, argv + 1, argv[1]);
	/* Then we try with the first argument (we increase and dicrease (argc, argv) to remove the progname for the main function) */

	/* Otherwhise we print the name of the available commands and return with error (bad usage) */
	for (int i = 0; programs[i].progname; i++) {
		fputs(programs[i].progname, stderr);
		fputc('\n', stderr);
	}

	return 1;
}
