/*
Copyright (c) 2013 yvt

This file is part of OpenSpades.

OpenSpades is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

OpenSpades is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with OpenSpades.  If not, see <http://www.gnu.org/licenses/>.
*/

namespace spades {
	namespace client {

		// 32-color 24-bit RGB color palette shared throughout the spades::client namespace
		int palette[32][3] = {
			{ 0,0,0 },			//0  Black			#000000	
			{ 255,255,255 },	//1  White			#FFFFFF
			{ 128,128,128 },	//2  Dark Grey		#808080
			{ 255,255,0 },		//3  Yellow			#FFFF00
			{ 0,255,255 },		//4  Cyan			#00FFFF
			{ 255,0,255 },		//5  Magenta		#FF00FF	
			{ 255,0,0 },		//6  Red			#FF0000
			{ 0,255,0 },		//7  Bright Green	#00FF00
			{ 0,0,255 },		//8  Blue			#0000FF
			{ 128,0,0 },		//9  Dark Red		#800000
			{ 0,128,0 },		//10 Green			#008000
			{ 0,0,128 },		//11 Navy Blue		#000080
			{ 128,128,0 },      //12 Olive			#808000
			{ 128,0,128 },      //13 Purple			#800080
			{ 0,128,128 },      //14 Teal			#008080
			{ 255,128,0 },		//15 Orange			#FF8000
			{ 255,0,128 },		//16 Pink			#FF0080
			{ 128,0,255 },		//17 Violet			#8000FF
			{ 0,128,255 },		//18 Bluette		#0080FF
			{ 128,255,0 },		//19 Lime Green		#80FF00
			{ 0,255,128 },		//20 Spring Green	#00FF80
			{ 255,128,128 },	//21 Salmon			#FF8080
			{ 128,255,128 },	//22 Light Green	#80FF80
			{ 128,128,255 },	//23 light Blue		#8080FF
			{ 128,255,255 },	//24 Light Cyan		#80FFFF
			{ 255,255,128 },	//25 Light Yellow	#FFFF80
			{ 255,128,255 },	//26 Light Magenta	#FF80FF
			{ 165,42,42 },		//27 Maroon			#A52A2A
			{ 255,69,0 },		//28 Scarlet		#FF4500
			{ 255,165,0 },		//29 Orange			#FFA500
			{ 139,69,19 },		//30 Brown			#8B4513
			{ 210,105,30 },		//31 Chocolate		#D2691E		
		};
	}
}