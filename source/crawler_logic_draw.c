if (title_fade_back == 1) {

//Setting target bitmap.
al_set_target_bitmap(internal_display);


//
f = 0;
while (f < 500) {

if (array_crawler_point[f].enabled == 1) {

//Reducing alpha every frame.
array_crawler_point[f].alpha -= 4;

//If we have pressed the play button make sure the crawlers disappear quickly.
if (chosen_option == 0) {
array_crawler_point[f].alpha -= 8;
}

//Disabling crawler when alpha is below 0.
if (array_crawler_point[f].alpha < 0) {
array_crawler_point[f].enabled = 0;
continue;
}

//What to multiply color values with. 
a = array_crawler_point[f].alpha/255;



//Drawing point at x and y position.
al_draw_pixel(array_crawler_point[f].x, array_crawler_point[f].y, al_map_rgba(117*a, 150*a, 221 * a, array_crawler_point[f].alpha));
}

f += 1;
}




//Moving parent crawler.
if (crawler_direction == 0) {
crawler_position_x -= 1;
}

if (crawler_direction == 1) {
crawler_position_y -= 1;
}

if (crawler_direction == 2) {
crawler_position_x += 1;
}

if (crawler_direction == 3) {
crawler_position_y += 1;
}

//Mouncing off walls.
if (crawler_position_x < 0) {
crawler_direction = 2;
}
if (crawler_position_x > 480) {
crawler_direction = 0;
}
if (crawler_position_y < 0) {
crawler_direction = 3;
}
if (crawler_position_y > 270) {
crawler_direction = 1;
}


//Randomly changing direction.
if (randint(0, 120) == 0) {
crawler_direction = randint(0, 3);
}


//Randomly teleporting on screen.
if (randint(0, 360) == 0) {
crawler_position_x = randint(0, 480);
crawler_position_y = randint(0, 270);
}


//Creating crawler points.
f = 0;
while (f < 500) {

if (array_crawler_point[f].enabled == 0) {
if (chosen_option != 0) {

array_crawler_point[f].enabled = 1;
array_crawler_point[f].x = crawler_position_x;
array_crawler_point[f].y = crawler_position_y;
array_crawler_point[f].alpha = 200;
break;

}
}

f += 1;
}

































//Moving parent crawler.
if (crawler_direction_2 == 0) {
crawler_position_x_2 -= 1;
}

if (crawler_direction_2 == 1) {
crawler_position_y_2 -= 1;
}

if (crawler_direction_2 == 2) {
crawler_position_x_2 += 1;
}

if (crawler_direction_2 == 3) {
crawler_position_y_2 += 1;
}

//Mouncing off walls.
if (crawler_position_x_2 < 0) {
crawler_direction_2 = 2;
}
if (crawler_position_x_2 > 480) {
crawler_direction_2 = 0;
}
if (crawler_position_y_2 < 0) {
crawler_direction_2 = 3;
}
if (crawler_position_y_2 > 270) {
crawler_direction_2 = 1;
}


//Randomly changing direction.
if (randint(0, 120) == 0) {
crawler_direction_2 = randint(0, 3);
}


//Randomly teleporting on screen.
if (randint(0, 360) == 0) {
crawler_position_x_2 = randint(0, 480);
crawler_position_y_2 = randint(0, 270);
}


//Creating crawler points.
f = 0;
while (f < 500) {

if (array_crawler_point[f].enabled == 0) {
if (chosen_option != 0) {

array_crawler_point[f].enabled = 1;
array_crawler_point[f].x = crawler_position_x_2;
array_crawler_point[f].y = crawler_position_y_2;
array_crawler_point[f].alpha = 200;
break;

}
}
f += 1;
}























//Moving parent crawler.
if (crawler_direction_3 == 0) {
crawler_position_x_3 -= 1;
}

if (crawler_direction_3 == 1) {
crawler_position_y_3 -= 1;
}

if (crawler_direction_3 == 2) {
crawler_position_x_3 += 1;
}

if (crawler_direction_3 == 3) {
crawler_position_y_3 += 1;
}

//Mouncing off walls.
if (crawler_position_x_3 < 0) {
crawler_direction_3 = 2;
}
if (crawler_position_x_3 > 480) {
crawler_direction_3 = 0;
}
if (crawler_position_y_3 < 0) {
crawler_direction_3 = 3;
}
if (crawler_position_y_3 > 270) {
crawler_direction_3 = 1;
}


//Randomly changing direction.
if (randint(0, 120) == 0) {
crawler_direction_3 = randint(0, 3);
}


//Randomly teleporting on screen.
if (randint(0, 360) == 0) {
crawler_position_x_3 = randint(0, 480);
crawler_position_y_3 = randint(0, 270);
}


//Creating crawler points.
f = 0;
while (f < 500) {

if (array_crawler_point[f].enabled == 0) {
if (chosen_option != 0) {
array_crawler_point[f].enabled = 1;
array_crawler_point[f].x = crawler_position_x_3;
array_crawler_point[f].y = crawler_position_y_3;
array_crawler_point[f].alpha = 200;
break;
}
}

f += 1;
}

























//Moving parent crawler.
if (crawler_direction_4 == 0) {
crawler_position_x_4 -= 1;
}

if (crawler_direction_4 == 1) {
crawler_position_y_4 -= 1;
}

if (crawler_direction_4 == 2) {
crawler_position_x_4 += 1;
}

if (crawler_direction_4 == 3) {
crawler_position_y_4 += 1;
}

//Mouncing off walls.
if (crawler_position_x_4 < 0) {
crawler_direction_4 = 2;
}
if (crawler_position_x_4 > 480) {
crawler_direction_4 = 0;
}
if (crawler_position_y_4 < 0) {
crawler_direction_4 = 3;
}
if (crawler_position_y_4 > 270) {
crawler_direction_4 = 1;
}


//Randomly changing direction.
if (randint(0, 120) == 0) {
crawler_direction_4 = randint(0, 3);
}


//Randomly teleporting on screen.
if (randint(0, 360) == 0) {
crawler_position_x_4 = randint(0, 480);
crawler_position_y_4 = randint(0, 270);
}


//Creating crawler points.
f = 0;
while (f < 500) {

if (array_crawler_point[f].enabled == 0) {
if (chosen_option != 0) {
array_crawler_point[f].enabled = 1;
array_crawler_point[f].x = crawler_position_x_4;
array_crawler_point[f].y = crawler_position_y_4;
array_crawler_point[f].alpha = 200;
break;
}
}

f += 1;
}







}