//Arrays that are used for moving slices of the hailstorm background back and forth creating a wavey pattern/animation. 
int * array_hailstorm_background_y = malloc(sizeof(int)*91);

//Setting up default/starting values for hailstorm background animation.
f = -3;
i = 50;
p = 10;
e = 0;
while (f < 91) {


array_hailstorm_background_y[f] = f*3;
//array_timer_hailstorm_movement_direction[f] = i/32;
f += 1;
}



//Array of bitmaps that are just 3 pixels tall. Horizontal line. They are all 3 pixels tall.
ALLEGRO_BITMAP * array_bitmap_horizontal_line[91];

f = 0;
while (f < 91) {

array_bitmap_horizontal_line[f] = al_create_bitmap(270, 3);

f += 1;
}


//Coloring bitmaps, using a loop and setting colors to create a shade effect.
f = 0;
i = 0;
p = 0;

h = 10;
e = 0;
d = 65;

a = 80.0;
b = 50.0;
c = 100.0;
while (f < 91) { //What bitmap are we in atm.


if (h > 0) { //Increasing a number and decreasing it repeatedly to create a wavey effect.
h -= 1;
} else {
e = !e;
h = 10;
}

if (e == 0) {
d += 4;
} else {
d -= 4;
}



al_set_target_bitmap(array_bitmap_horizontal_line[f]); //Setting target bitmap.
i = 0;
while (i < 3) { //What vertical row are we within the array at the moment.
p = 0;
a = 80.0+d;
b = 30.0;
c = 100.0+d;
while (p < 270) { //What horizontal pixel are we in within the bitmap.

if (p < 135) {
a += 0.5;
b -= 0.2;
c -= 0.5;
}
if (p > 135) {
a -= 0.5;
b += 0.2;
c += 0.5;
}

al_put_pixel(p, i, al_map_rgb((int)a, (int)b, (int)c));

p += 1;
}
i += 1;
}
f += 1;
}














