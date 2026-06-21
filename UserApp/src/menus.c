/*---------------------------------------------------------------------------*
 * menus.c                                                               *
 * Copyright (C) 2025 Jacques Pelletier                                     *
 *                                                                           *
 * This program is free software; you can redistribute it and *or            *
 * modify it under the terms of the GNU General Public License               *
 * as published by the Free Software Foundation; either version 2            *
 * of the License, or (at your option) any later version.                    *
 *                                                                           *
 * This program is distributed in the hope that it will be useful,           *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of            *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
 * GNU General Public License for more details.                              *
 *                                                                           *
 * You should have received a copy of the GNU General Public License         *
 * along with this program; if not, write to the Free Software Foundation,   *
 * Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.           *
 *---------------------------------------------------------------------------*/
#include <target_probe.h>

void mainMenu(void)
{
	char c;
	uint16_t port[6];

	//Turns on software flow control
	Uart_sendstring("\021\033[2J\033[?25lGeneric Alien probe\r\n\n");

	AnsiSaveCursorPosition();

	do
	{
		AnsiRestoreCursorPosition();

		// Read ports
		port[0] = GPIOB->IDR;
		port[1] = GPIOC->IDR;
		port[2] = GPIOD->IDR;
		port[3] = GPIOE->IDR;
		port[4] = GPIOF->IDR;
		port[5] = GPIOG->IDR;

		serial_printf("PB: %04X, PC: %04X, PD: %04X, PE: %04X, PF: %04X, PG: %04X\r\n\n",
				port[0],port[1],port[2],port[3],port[4],port[5]);

		Uart_sendstring("PB: FEDC BA98 7654 3210 PC: FEDC BA98 7654 3210 PD: FEDC BA98 7654 3210\r\n    ");
		SerialPutBinaryWord(port[0]);
		Uart_sendstring("     ");
		SerialPutBinaryWord(port[1]);
		Uart_sendstring("     ");
		SerialPutBinaryWord(port[2]);
		Uart_sendstring("     \r\n\n");

		Uart_sendstring("PE: FEDC BA98 7654 3210 PF: FEDC BA98 7654 3210 PG: FEDC BA98 7654 3210\r\n    ");
		SerialPutBinaryWord(port[3]);
		Uart_sendstring("     ");
		SerialPutBinaryWord(port[4]);
		Uart_sendstring("     ");
		SerialPutBinaryWord(port[5]);
		Uart_sendstring("     \r\n\n");

		if (IsDataAvailable())
		{
			c = toupper(serial_getchar());

			switch(c)
			{
				case '0':
					GPIOG->ODR ^= 0x0001;
					break;
				case '1':
					GPIOG->ODR ^= 0x0002;
					break;
				case '2':
					GPIOG->ODR ^= 0x0004;
					break;
				case '3':
					GPIOG->ODR ^= 0x0008;
					break;
				case '4':
					GPIOG->ODR ^= 0x0010;
					break;
				case '5':
					GPIOG->ODR ^= 0x0020;
					break;
				case '6':
					GPIOG->ODR ^= 0x0040;
					break;
				case '7':
					GPIOG->ODR ^= 0x0080;
					break;
				case '8':
					GPIOG->ODR ^= 0x0100;
					break;
				case '9':
					GPIOG->ODR ^= 0x0200;
					break;
				case 'A':
					GPIOG->ODR ^= 0x0400;
					break;
				case 'B':
					GPIOG->ODR ^= 0x0800;
					break;
				case 'C':
					GPIOG->ODR ^= 0x1000;
					break;
				case 'D':
					GPIOG->ODR ^= 0x2000;
					break;
				case 'E':
					GPIOG->ODR ^= 0x4000;
					break;
				case 'F':
					GPIOG->ODR ^= 0x8000;
					break;
				default:
					;
			}
		}
		HAL_Delay(300);
	} while (true);
}
