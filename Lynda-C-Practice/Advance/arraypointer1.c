/*
 * arraypointer1.c
 * 
 * Copyright 2016 Sam <sam>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int array[] = {11,13,17,19};
	int x;
	int *aptr;
	
	
	aptr = array;
	aptr =aptr+2;//*(aptr+2) =0;
	*aptr =0;
	for(x = 0;x<4;x++)
	{
		printf("Element %d: %d\n",x+1,array[x]);
	}
	
	return 0;
}

