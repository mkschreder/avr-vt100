/**
	This file is part of FORTMAX kernel.

	FORTMAX kernel is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	FORTMAX kernel is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with FORTMAX kernel.  If not, see <http://www.gnu.org/licenses/>.

	Copyright: Martin K. Schröder (info@fortmax.se) 2014
*/

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#define VT100_SCREEN_WIDTH ili9340_width()
#define VT100_SCREEN_HEIGHT ili9340_height()
#define VT100_CHAR_WIDTH 6
#define VT100_CHAR_HEIGHT 8
#define VT100_HEIGHT (VT100_SCREEN_HEIGHT / VT100_CHAR_HEIGHT)
#define VT100_WIDTH (VT100_SCREEN_WIDTH / VT100_CHAR_WIDTH)

void vt100_init(void (*send_response)(char *str)); 
void vt100_putc(uint8_t ch);
void vt100_puts(const char *str);

#ifdef __cplusplus
}
#endif
