
if (current_cutscene_part == -1) {

//Setting target bitmap.
al_set_target_bitmap(bitmap_gameplay_display);

if (game_paused == 0) {
f = 0;
while (f < 1024) {

if (array_energy_cell_pickup[f].enabled == 1) {

//Moving energy cell on x axis dependant on direction variables.
if (array_energy_cell_pickup[f].x_direction == 0) {
array_energy_cell_pickup[f].x -= 64;
}
if (array_energy_cell_pickup[f].x_direction == 1) {
array_energy_cell_pickup[f].x += 64;
}

//Moving energy cell on y axis dependant on direction variables.
if (array_energy_cell_pickup[f].y_direction == 0) {
array_energy_cell_pickup[f].y -= 64;
}
if (array_energy_cell_pickup[f].y_direction == 1) {
array_energy_cell_pickup[f].y += 64;
}

//Bouncing energy cell on walls of screen like the ball in ping pong.
if (array_energy_cell_pickup[f].bounces < 7) {
if (array_energy_cell_pickup[f].x+(13*64) > 270*64) {
array_energy_cell_pickup[f].x_direction = 0;
array_energy_cell_pickup[f].bounces += 1;
}
if (array_energy_cell_pickup[f].x < 0) {
array_energy_cell_pickup[f].x_direction = 1;
array_energy_cell_pickup[f].bounces += 1;
}

if (array_energy_cell_pickup[f].y+(12*64) > 270*64) {
array_energy_cell_pickup[f].y_direction = 0;
array_energy_cell_pickup[f].bounces += 1;
}
if (array_energy_cell_pickup[f].y < 0) {
array_energy_cell_pickup[f].y_direction = 1;
array_energy_cell_pickup[f].bounces += 1;
}
} //If the powerup has bounced more than 7 times it will no longer bounce and instead leave the screen.

//If powerup has left screen and has bounced at least 7 times it will be disabled.
if (array_energy_cell_pickup[f].x > 300*64) {
array_energy_cell_pickup[f].enabled = 0;
}
if (array_energy_cell_pickup[f].x < (-30*64)) {
array_energy_cell_pickup[f].enabled = 0;
}
if (array_energy_cell_pickup[f].y > 300*64) {
array_energy_cell_pickup[f].enabled = 0;
}
if (array_energy_cell_pickup[f].x < (-30*64)) {
array_energy_cell_pickup[f].enabled = 0;
}

//Updating hitbox.
array_energy_cell_pickup[f].hitbox.x1 = array_energy_cell_pickup[f].x;
array_energy_cell_pickup[f].hitbox.y1 = array_energy_cell_pickup[f].y;
array_energy_cell_pickup[f].hitbox.x2 = array_energy_cell_pickup[f].x+(13*64);
array_energy_cell_pickup[f].hitbox.y2 = array_energy_cell_pickup[f].y+(12*64);

} //Is the energy cell enabled.


f += 1;
} //End of while loop. 

}//Checking if paused.

//Drawing part.
f = 0;
while (f < 1024) {

if (array_energy_cell_pickup[f].enabled == 1) {

//Drawing energy cell.
al_draw_bitmap(bitmap_energy_cell_pickup, array_energy_cell_pickup[f].x/64, array_energy_cell_pickup[f].y/64, 0);

//Drawing hitbox.
if (draw_hitboxes == 1) {
al_draw_rectangle(array_energy_cell_pickup[f].hitbox.x1/64, array_energy_cell_pickup[f].hitbox.y1/64, array_energy_cell_pickup[f].hitbox.x2/64, array_energy_cell_pickup[f].hitbox.y2/64, al_map_rgb(255, 0, 255), 0);
}


}


f += 1;
}


} //Checking if current cutscene part is -1.