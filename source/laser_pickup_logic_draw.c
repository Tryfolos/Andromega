//Checking if we are in gameplay mode or in the main menu.
if (current_cutscene_part == -1) {
if (game_paused == 0) {

//Setting target bitmap for drawing.
al_set_target_bitmap(bitmap_gameplay_display);


f = 0;
while (f < 1000) {

if (array_laser_pickup[f].enabled == 1) {


//Moving laser x and y positions based on x_direction and y_direction variables.
if (array_laser_pickup[f].x_direction == 0) {
array_laser_pickup[f].x -= 64;
}
if (array_laser_pickup[f].x_direction == 1) {
array_laser_pickup[f].x += 64;
}
if (array_laser_pickup[f].y_direction == 0) {
array_laser_pickup[f].y -= 64;
}
if (array_laser_pickup[f].y_direction == 1) {
array_laser_pickup[f].y += 64;
}


//Bouncing/changing direction when hitting corner of screen.
if (array_laser_pickup[f].bounces < 7) {
if (array_laser_pickup[f].x < 0) {
array_laser_pickup[f].x_direction = 1;
array_laser_pickup[f].bounces += 1;
}
if (array_laser_pickup[f].x > ((270-13)*64)) {
array_laser_pickup[f].x_direction = 0;
array_laser_pickup[f].bounces += 1;
}
if (array_laser_pickup[f].y < 0) {
array_laser_pickup[f].y_direction = 1;
array_laser_pickup[f].bounces += 1;
}
if (array_laser_pickup[f].y > ((270-13)*64)) {
array_laser_pickup[f].y_direction = 0;
array_laser_pickup[f].bounces += 1;
}
} //How many times have pickup bounced?



//Updating hitbox.
array_laser_pickup[f].hitbox.x1 = array_laser_pickup[f].x;
array_laser_pickup[f].hitbox.y1 = array_laser_pickup[f].y;
array_laser_pickup[f].hitbox.x2 = array_laser_pickup[f].x+(13*64);
array_laser_pickup[f].hitbox.y2 = array_laser_pickup[f].y+(13*64);


//Drawing laser pickup.
al_draw_bitmap(bitmap_laser_pickup, array_laser_pickup[f].x/64, array_laser_pickup[f].y/64, 0);


//Drawing hitbox.
if (draw_hitboxes == 1) {
al_draw_rectangle(array_laser_pickup[f].hitbox.x1/64, array_laser_pickup[f].hitbox.y1/64, array_laser_pickup[f].hitbox.x2/64, array_laser_pickup[f].hitbox.y2/64, al_map_rgb(255, 0, 255), 0);
}


} //Is laser pickup enabled.


f += 1;
}
} //Is game paused.
}
