#ifndef LOCAL_H_INCLUDED
#define LOCAL_H_INCLUDED
/*
 * $Id: local.h.macos,v 1.3 2005/05/25 14:13:53 geoff Exp $
 */

/*
 * Copyright 2005, Geoff Kuenning, Claremont, CA
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All modifications to the source code must be clearly marked as
 *    such.  Binary redistributions based on modified source code
 *    must be clearly marked as modified versions in the documentation
 *    and/or other materials provided with the distribution.
 * 4. The code that causes the 'ispell -v' command to display a prominent
 *    link to the official ispell Web site may not be removed.
 * 5. The name of Geoff Kuenning may not be used to endorse or promote
 *    products derived from this software without specific prior
 *    written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY GEOFF KUENNING AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL GEOFF KUENNING OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*
 * This file is a sample local.h file.  It shows what I believe nearly every
 * site will want to include in their local.h.  You will probably want to
 * expand this file;  see "config.X" to learn of #defines that you might
 * like to add to.
 */

/*
 * WARNING WARNING WARNING
 *
 * This file is *NOT* a normal C header file!  Although it uses C
 * syntax and is included in C programs, it is also processed by shell
 * scripts that are very stupid about format.
 *
 * Do not try to use #if constructs to configure this file for more
 * than one configuration.  Do not place whitespace after the "#" in
 * "#define".  Do not attempt to disable lines by commenting them out.
 * Do not use backslashes to reduce the length of long lines.
 * None of these things will work the way you expect them to.
 *
 * WARNING WARNING WARNING
 */

#define MINIMENU	/* Display a mini-menu at the bottom of the screen */
#define	HAS_RENAME
#define TERMLIB "-lcurses"

/*
 * Important directory paths.  If you change MAN45DIR from man5 to
 * something else, you probably also want to set MAN45SECT and
 * MAN45EXT (but not if you keep the man pages in section 5 and just
 * store them in a different place).
 */
#define BINDIR	"/Users/kojikusumi/dev/136sec/lab5/bin"
#define LIBDIR	"/Users/kojikusumi/dev/136sec/lab5/lib"
#define MAN1DIR	"/Users/kojikusumi/dev/136sec/lab5/man/man1"
#define	MAN45DIR "/Users/kojikusumi/dev/136sec/lab5/man/man4"
#define	MAN45EXT ".4"

/*
 * Place any locally-required #include statements here
 */

#endif /* LOCAL_H_INCLUDED */
