//
if (current_cutscene_part == -1) {



//Setting current draw target.
al_set_target_bitmap(bitmap_gameplay_display);


if (game_paused == 0) {
f = 0;
while (f < 1000) {

//Checking if bullet exists or not.
if (array_player_bullet[f].enabled == 1) {

//Moving bullet up.
array_player_bullet[f].y -= 384;

//Moving player bullets to the left or the right depending on x_speed variable.
array_player_bullet[f].x += array_player_bullet[f].x_speed;


//Updating hitbox.
array_player_bullet[f].hitbox.x1 = array_player_bullet[f].x;
array_player_bullet[f].hitbox.y1 = array_player_bullet[f].y;
array_player_bullet[f].hitbox.x2 = array_player_bullet[f].x + 3*64;
array_player_bullet[f].hitbox.y2 = array_player_bullet[f].y + 5*64;

} //Check for if bullet exists.
f += 1;
}
}//Game pause check.


//Drawing.
f = 0;
while (f < 1000) {

if (array_player_bullet[f].enabled == 1) {


//Drawing bullet.
if (array_player_bullet[f].x_speed == -48) {
al_draw_bitmap(bitmap_player_bullet_slanted, array_player_bullet[f].x/64, array_player_bullet[f].y/64, ALLEGRO_FLIP_HORIZONTAL);
}
if (array_player_bullet[f].x_speed == 0) {
al_draw_bitmap(bitmap_player_bullet, array_player_bullet[f].x/64, array_player_bullet[f].y/64, 0);
}
if (array_player_bullet[f].x_speed == 48) {
al_draw_bitmap(bitmap_player_bullet_slanted, array_player_bullet[f].x/64, array_player_bullet[f].y/64, 0);
}

//Devtest.
if (draw_hitboxes == 1) {
al_draw_rectangle(array_player_bullet[f].hitbox.x1/64, array_player_bullet[f].hitbox.y1/64, array_player_bullet[f].hitbox.x2/64, array_player_bullet[f].hitbox.y2/64, al_map_rgb(255, 0, 255), 0);
}
}//Checking if enabled.

f += 1;
}//End of while loop.

}

