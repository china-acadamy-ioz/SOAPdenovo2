/*
 * main.c
 *
 * Copyright (c) 2008-2012 BGI-Shenzhen <soap at genomics dot org dot cn>.
 *
 * This file is part of SOAPdenovo.
 *
 * SOAPdenovo is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * SOAPdenovo is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with SOAPdenovo.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "stdinc.h"
#include "newhash.h"
#include "kmerhash.h"
#include "extfunc.h"
#include "global.h"

extern int call_scaffold ( int arc, char ** argv );

/*************************************************
Function:
    main
Description:
    The main function. It includes four modules:
    1.pregraph
    2.contig
    3.map
    4.scaffold
Input:
    @see display_all_usage ()
Output:
    Below files:
    1. *.contig
    2. *.scafSeq
    etc.
Return:
    None.
*************************************************/
int main ( int argc, char ** argv )
{
	crc32c_Init();
	fprintf ( stderr, "\nVersion 2.04: released on July 13th, 2012\nCompile %s\t%s\n", __DATE__, __TIME__ );
	argc--;
	argv++;

	call_scaffold ( argc, argv );
	return 0;
}
