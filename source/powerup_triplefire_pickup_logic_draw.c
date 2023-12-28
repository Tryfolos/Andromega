//Only run this logic if in gameplay mode and if game is not paused.
if (game_paused == 0) {
if (current_cutscene_part == -1) {

f = 0;
while (f < 1000) {



if (array_triplefire_pickup[f].enabled == 1) {


//Moving laser x and y positions based on x_direction and y_direction variables.
if (array_triplefire_pickup[f].x_direction == 0) {
array_triplefire_pickup[f].x -= 64;
}
if (array_triplefire_pickup[f].x_direction == 1) {
array_triplefire_pickup[f].x += 64;
}
if (array_triplefire_pickup[f].y_direction == 0) {
array_triplefire_pickup[f].y -= 64;
}
if (array_triplefire_pickup[f].y_direction == 1) {
array_triplefire_pickup[f].y += 64;
}


//Bouncing/changing direction when hitting corner of screen.
if (array_triplefire_pickup[f].bounces < 7) {
if (array_triplefire_pickup[f].x < 0) {
array_triplefire_pickup[f].x_direction = 1;
array_triplefire_pickup[f].bounces += 1;
}
if (array_triplefire_pickup[f].x > ((270-13)*64)) {
array_triplefire_pickup[f].x_direction = 0;
array_triplefire_pickup[f].bounces += 1;
}
if (array_triplefire_pickup[f].y < 0) {
array_triplefire_pickup[f].y_direction = 1;
array_triplefire_pickup[f].bounces += 1;
}
if (array_triplefire_pickup[f].y > ((270-13)*64)) {
array_triplefire_pickup[f].y_direction = 0;
array_triplefire_pickup[f].bounces += 1;
}
} //How many times have pickup bounced?



//Updating hitbox.
array_triplefire_pickup[f].hitbox.x1 = array_triplefire_pickup[f].x;
array_triplefire_pickup[f].hitbox.y1 = array_triplefire_pickup[f].y;
array_triplefire_pickup[f].hitbox.x2 = array_triplefire_pickup[f].x+(13*64);
array_triplefire_pickup[f].hitbox.y2 = array_triplefire_pickup[f].y+(13*64);


//Drawing laser pickup.
al_draw_bitmap(bitmap_triplefire_pickup, array_triplefire_pickup[f].x/64, array_triplefire_pickup[f].y/64, 0);


//Drawing hitbox.
if (draw_hitboxes == 1) {
al_draw_rectangle(array_triplefire_pickup[f].hitbox.x1/64, array_triplefire_pickup[f].hitbox.y1/64, array_triplefire_pickup[f].hitbox.x2/64, array_triplefire_pickup[f].hitbox.y2/64, al_map_rgb(255, 0, 255), 0);
}

} //Is it enabled?



f += 1;
}



} //Are we in gameplay mode?
} //Is game paused?

