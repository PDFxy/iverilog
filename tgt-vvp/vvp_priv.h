#ifndef __vvp_priv_H
#define __vvp_priv_H
/*
 * Copyright (c) 2001 Stephen Williams (steve@icarus.com)
 *
 *    This source code is free software; you can redistribute it
 *    and/or modify it in source code form under the terms of the GNU
 *    General Public License as published by the Free Software
 *    Foundation; either version 2 of the License, or (at your option)
 *    any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */
#if !defined(WINNT)
#ident "$Id: vvp_priv.h,v 1.1 2001/03/19 01:20:46 steve Exp $"
#endif

# include  "ivl_target.h"
# include  <stdio.h>

/*
 * The target_design entry opens the output file that receives the
 * compiled design, and sets the vvp_out to the descripter.
 */
extern FILE* vvp_out;

/*
 * This function draws a process (initial or always) into the output
 * file.
 */
extern int draw_process(ivl_process_t net, void*x);

/*
 * $Log: vvp_priv.h,v $
 * Revision 1.1  2001/03/19 01:20:46  steve
 *  Add the tgt-vvp code generator target.
 *
 */
#endif
