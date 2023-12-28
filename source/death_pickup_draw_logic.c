//Code only runs when game is not paused and if we are in gameplay mode.
if (current_cutscene_part == -1) {
if (game_paused == 0) {


//Setting the target bitmap.
al_set_target_bitmap(bitmap_gameplay_display);


f = 0;
while (f < 100) {

//Only run this code if the pickup is enabled/exists.
if (array_death_pickup[f].enabled == 1) {



//Moving laser x and y positions based on x_direction and y_direction variables.
if (array_death_pickup[f].x_direction == 0) {
array_death_pickup[f].x -= 64;
}
if (array_death_pickup[f].x_direction == 1) {
array_death_pickup[f].x += 64;
}
if (array_death_pickup[f].y_direction == 0) {
array_death_pickup[f].y -= 64;
}
if (array_death_pickup[f].y_direction == 1) {
array_death_pickup[f].y += 64;
}


//Bouncing/changing direction when hitting corner of screen.
if (array_death_pickup[f].bounces < 7) {
if (array_death_pickup[f].x < 0) {
array_death_pickup[f].x_direction = 1;
array_death_pickup[f].bounces += 1;
}
if (array_death_pickup[f].x > ((270-11)*64)) {
array_death_pickup[f].x_direction = 0;
array_death_pickup[f].bounces += 1;
}
if (array_death_pickup[f].y < 0) {
array_death_pickup[f].y_direction = 1;
array_death_pickup[f].bounces += 1;
}
if (array_death_pickup[f].y > ((270-13)*64)) {
array_death_pickup[f].y_direction = 0;
array_death_pickup[f].bounces += 1;
}
} //How many times have pickup bounced?



//Updating hitbox.
array_death_pickup[f].hitbox.x1 = array_death_pickup[f].x;
array_death_pickup[f].hitbox.y1 = array_death_pickup[f].y;
array_death_pickup[f].hitbox.x2 = array_death_pickup[f].x+(11*64);
array_death_pickup[f].hitbox.y2 = array_death_pickup[f].y+(13*64);


//Drawing bitmap.
al_draw_bitmap(bitmap_death_pickup, array_death_pickup[f].x/64, array_death_pickup[f].y/64, 0);

//Drawing hitbox.
if (draw_hitboxes == 1) {


}



} //Is the pickup enabled.

f += 1;
} //End of the loop.



} //Is game paused?
} //Are we in gameplay mode (not in the main menu)?