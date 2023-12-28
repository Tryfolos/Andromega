void draw_text(char array[], int x, int y, float r, float g, float b, float a) {

int f = 0; //Will be used in loops.
int length = 0; //How long is the array.
int p = x; //How far along is the string/How many pixels ahead of the starting point should the next symbol be drawn.

//First, we count how long the array is.
while (1 == 1) {

if (array[f] == '\0') {
length = f;
break;
}   

f += 1;
}


f = 0; //Resetting iterator for next loop.
while (f < length+1) {

if (array[f] == ' ') {
p = p + 10;
}

if (array[f] == 'A') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 1, 1, 10, 10, p, y, 0);
p = p + 11;
}

if (array[f] == 'B') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 12, 1, 10, 10, p, y, 0);
p = p + 11;
}

if (array[f] == 'C') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 23, 1, 10, 10, p, y, 0);
p = p + 11;
}

if (array[f] == 'D') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 34, 1, 10, 10, p, y, 0);
p = p + 11;
}

if (array[f] == 'E') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 45, 1, 10, 10, p, y, 0);
p = p + 10;
}

if (array[f] == 'F') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 56, 1, 10, 10, p, y, 0);
p = p + 10;
}

if (array[f] == 'G') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 67, 1, 10, 10, p, y, 0);
p = p + 11;
}

if (array[f] == 'H') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 78, 1, 10, 10, p, y, 0);
p = p + 11;
}

if (array[f] == 'I') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 89, 1, 10, 10, p, y, 0);
p = p + 9;
}

if (array[f] == 'J') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 100, 1, 10, 10, p, y, 0);
p = p + 10;
}

if (array[f] == 'K') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 111, 1, 10, 10, p, y, 0);
p = p + 10;
}

if (array[f] == 'L') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 122, 1, 10, 10, p, y, 0);
p = p + 10;
}

if (array[f] == 'M') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 133, 1, 10, 10, p, y, 0);
p = p + 11;
}

if (array[f] == 'N') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 144, 1, 10, 10, p, y, 0);
p = p + 11;
}

if (array[f] == 'O') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 155, 1, 10, 10, p, y, 0);
p = p + 11;
}

if (array[f] == 'P') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 166, 1, 10, 10, p, y, 0);
p = p + 10;
}

if (array[f] == 'Q') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 177, 1, 10, 10, p, y, 0);
p = p + 11;
}

if (array[f] == 'R') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 188, 1, 10, 10, p, y, 0);
p = p + 11;
}

if (array[f] == 'S') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 199, 1, 10, 10, p, y, 0);
p = p + 11;
}

if (array[f] == 'T') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 210, 1, 10, 10,  p, y, 0);
p = p + 11;
}

if (array[f] == 'U') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 221, 1, 10, 10, p, y, 0);
p = p + 11;
}

if (array[f] == 'V') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 232, 1, 10, 10, p, y, 0);
p = p + 11;
}

if (array[f] == 'W') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 243, 1, 10, 10, p, y, 0);
p = p + 11;
}

if (array[f] == 'X') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 254, 1, 10, 10, p, y, 0);
p = p + 11;
}

if (array[f] == 'Y') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 265, 1, 10, 10, p, y, 0);
p = p + 11;
}

if (array[f] == 'Z') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 276, 1, 10, 10, p, y, 0);
p = p + 11;
}

if (array[f] == '1') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 1, 12, 10, 10, p, y, 0);
p = p + 9;
}

if (array[f] == '2') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 12, 12, 10, 10, p, y, 0);
p = p + 9;
}

if (array[f] == '3') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 23, 12, 10, 10, p, y, 0);
p = p + 9;
}

if (array[f] == '4') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 34, 12, 10, 10, p, y, 0);
p = p + 9;
}

if (array[f] == '5') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 45, 12, 10, 10, p, y, 0);
p = p + 9;
}

if (array[f] == '6') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 56, 12, 10, 10, p, y, 0);
p = p + 9;
}

if (array[f] == '7') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 67, 12, 10, 10, p, y, 0);
p = p + 9;
}

if (array[f] == '8') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 78, 12, 10, 10, p, y, 0);
p = p + 9;
}

if (array[f] == '9') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 89, 12, 10, 10, p, y, 0);
p = p + 9;
}

if (array[f] == '0') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 100, 12, 10, 10, p, y, 0);
p = p + 9;
}

if (array[f] == '-') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 111, 12, 10, 10, p, y, 0);
p = p + 9;
}

if (array[f] == '=') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 122, 12, 10, 10, p, y, 0);
p = p + 9;
}

if (array[f] == '?') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 133, 12, 10, 10, p, y, 0);
p = p + 7;
}

if (array[f] == '!') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 144, 12, 10, 10, p, y, 0);
p = p + 3;
}

if (array[f] == '.') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 155, 12, 10, 10, p, y, 0);
p = p + 3;
}

if (array[f] == ':') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 166, 12, 10, 10, p, y, 0);
p = p + 3;
}

if (array[f] == '+') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 177, 12, 10, 10, p, y, 0);
p = p + 9;
}

if (array[f] == '\'') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 188, 12, 10, 10, p, y, 0);
p = p + 3;
}

if (array[f] == '/') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 199, 12, 10, 10, p, y, 0);
p = p + 7;
}

if (array[f] == '_') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 210, 12, 10, 10, p, y, 0);
p = p + 11;
}

if (array[f] == ',') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 221, 12, 10, 10, p, y, 0);
p = p + 3;
}

f += 1;
}

}








void draw_text_small(char array[], int x, int y, float r, float g, float b, float a) {

int f = 0; //Will be used in loops.
int length = 0; //How long is the array.
int p = x; //How far along is the string/How many pixels ahead of the starting point should the next symbol be drawn.

//First, we count how long the array is.
while (1 == 1) {

if (array[f] == '\0') {
length = f;
break;
}   

f += 1;
}


f = 0; //Resetting iterator for next loop.
while (f < length+1) {

if (array[f] == ' ') {
p = p + 8;
}

if (array[f] == 'A') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 1, 23, small_font_size, small_font_size, p, y, 0);
p = p + 8;
}

if (array[f] == 'B') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 9, 23, small_font_size, small_font_size, p, y, 0);
p = p + 7;
}

if (array[f] == 'C') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 17, 23, small_font_size, small_font_size, p, y, 0);
p = p + 8;
}

if (array[f] == 'D') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 25, 23, small_font_size, small_font_size, p, y, 0);
p = p + 8;
}

if (array[f] == 'E') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 33, 23, small_font_size, small_font_size, p, y, 0);
p = p + 7;
}

if (array[f] == 'F') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 41, 23, small_font_size, small_font_size, p, y, 0);
p = p + 7;
}

if (array[f] == 'G') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 49, 23, small_font_size, small_font_size, p, y, 0);
p = p + 8;
}

if (array[f] == 'H') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 57, 23, small_font_size, small_font_size, p, y, 0);
p = p + 8;
}

if (array[f] == 'I') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 65, 23, small_font_size, small_font_size, p, y, 0);
p = p + 6;
}

if (array[f] == 'J') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 73, 23, small_font_size, small_font_size, p, y, 0);
p = p + 7;
}

if (array[f] == 'K') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 81, 23, small_font_size, small_font_size, p, y, 0);
p = p + 7;
}

if (array[f] == 'L') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 89, 23, small_font_size, small_font_size, p, y, 0);
p = p + 6;
}

if (array[f] == 'M') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 97, 23, small_font_size, small_font_size, p, y, 0);
p = p + 8;
}

if (array[f] == 'N') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 105, 23, small_font_size, small_font_size, p, y, 0);
p = p + 8;
}

if (array[f] == 'O') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 113, 23, small_font_size, small_font_size, p, y, 0);
p = p + 8;
}

if (array[f] == 'P') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 121, 23, small_font_size, small_font_size, p, y, 0);
p = p + 7;
}

if (array[f] == 'Q') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 129, 23, small_font_size, small_font_size, p, y, 0);
p = p + 8;
}

if (array[f] == 'R') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 137, 23, small_font_size, small_font_size, p, y, 0);
p = p + 7;
}

if (array[f] == 'S') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 145, 23, small_font_size, small_font_size, p, y, 0);
p = p + 8;
}

if (array[f] == 'T') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 153, 23, small_font_size, small_font_size,  p, y, 0);
p = p + 8;
}

if (array[f] == 'U') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 161, 23, small_font_size, small_font_size, p, y, 0);
p = p + 8;
}

if (array[f] == 'V') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 169, 23, small_font_size, small_font_size, p, y, 0);
p = p + 8;
}

if (array[f] == 'W') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 177, 23, small_font_size, small_font_size, p, y, 0);
p = p + 8;
}

if (array[f] == 'X') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 185, 23, small_font_size, small_font_size, p, y, 0);
p = p + 8;
}

if (array[f] == 'Y') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 193, 23, small_font_size, small_font_size, p, y, 0);
p = p + 8;
}

if (array[f] == 'Z') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 201, 23, small_font_size, small_font_size, p, y, 0);
p = p + 8;
}

if (array[f] == '1') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 1, 31, small_font_size, small_font_size, p, y, 0);
p = p + 7;
}

if (array[f] == '2') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 9, 31, small_font_size, small_font_size, p, y, 0);
p = p + 7;
}

if (array[f] == '3') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 17, 31, small_font_size, small_font_size, p, y, 0);
p = p + 7;
}

if (array[f] == '4') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 25, 31, small_font_size, small_font_size, p, y, 0);
p = p + 7;
}

if (array[f] == '5') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 33, 31, small_font_size, small_font_size, p, y, 0);
p = p + 7;
}

if (array[f] == '6') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 41, 31, small_font_size, small_font_size, p, y, 0);
p = p + 7;
}

if (array[f] == '7') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 49, 31, small_font_size, small_font_size, p, y, 0);
p = p + 7;
}

if (array[f] == '8') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 57, 31, small_font_size, small_font_size, p, y, 0);
p = p + 7;
}

if (array[f] == '9') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 65, 31, small_font_size, small_font_size, p, y, 0);
p = p + 7;
}

if (array[f] == '0') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 73, 31, small_font_size, small_font_size, p, y, 0);
p = p + 7;
}

if (array[f] == '-') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 81, 31, small_font_size, small_font_size, p, y, 0);
p = p + 6;
}

if (array[f] == '=') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 89, 31, small_font_size, small_font_size, p, y, 0);
p = p + 6;
}

if (array[f] == '?') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 97, 31, small_font_size, small_font_size, p, y, 0);
p = p + 6;
}

if (array[f] == '!') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 105, 31, small_font_size, small_font_size, p, y, 0);
p = p + 2;
}

if (array[f] == '.') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 113, 31, small_font_size, small_font_size, p, y, 0);
p = p + 2;
}

if (array[f] == ':') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 121, 31, small_font_size, small_font_size, p, y, 0);
p = p + 3;
}

if (array[f] == '+') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 129, 31, small_font_size, small_font_size, p, y, 0);
p = p + 6;
}

if (array[f] == '\'') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 137, 31, small_font_size, small_font_size, p, y, 0);
p = p + 2;
}

if (array[f] == '/') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 145, 31, small_font_size, small_font_size, p, y, 0);
p = p + 5;
}

if (array[f] == '_') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 153, 31, small_font_size, small_font_size, p, y, 0);
p = p + 8;
}

if (array[f] == ',') {
al_draw_tinted_bitmap_region(bitmap_font, al_map_rgba_f(r, g, b, a), 161, 31, small_font_size, small_font_size, p, y, 0);
p = p + 3;
}

f += 1;
}

}