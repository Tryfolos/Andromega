//
if (current_cutscene_part == -1) {

//Setting target_bitmap.
al_set_target_bitmap(bitmap_gameplay_display);





if (game_paused == 0) {
f = 0;
while(f < 1000) {

if (array_enemy_bullet[f].enabled == 1) {

//Moving bullet on x axis.
array_enemy_bullet[f].x += array_enemy_bullet[f].x_speed;

//Moving bullet on y axis.
array_enemy_bullet[f].y += array_enemy_bullet[f].y_speed;


//Updating hitbox. (Depends on bullet type).
if (array_enemy_bullet[f].bullet_type == 0) {
array_enemy_bullet[f].hitbox.x1 = array_enemy_bullet[f].x;
array_enemy_bullet[f].hitbox.y1 = array_enemy_bullet[f].y;
array_enemy_bullet[f].hitbox.x2 = array_enemy_bullet[f].x+(5*64);
array_enemy_bullet[f].hitbox.y2 = array_enemy_bullet[f].y+(5*64);
}
if (array_enemy_bullet[f].bullet_type == 1) { //Tazer shot.
array_enemy_bullet[f].hitbox.x1 = array_enemy_bullet[f].x;
array_enemy_bullet[f].hitbox.y1 = array_enemy_bullet[f].y;
array_enemy_bullet[f].hitbox.x2 = array_enemy_bullet[f].x+(18*64);
array_enemy_bullet[f].hitbox.y2 = array_enemy_bullet[f].y+(2*64);
}


}



f += 1;
}//End of while loop.

}

//If bullet leaves screen. Despawn it. Disable it.
f = 0;
while (f < 1000) {
if (array_enemy_bullet[f].y > 270*64) {

array_enemy_bullet[f].enabled = 0;

}
f += 1;
}

//If bullet gets hit by player laser it will despawn. Disable.
f = 0;
while (f < 1000) {
if (hitbox_colliding(array_enemy_bullet[f].hitbox, hitbox_laser) == 1) {
array_enemy_bullet[f].enabled = 0;
}
f += 1;
}


//Drawing enemy bullet.
f = 0;
while (f < 1000) {


if (array_enemy_bullet[f].enabled == 1) {

if (array_enemy_bullet[f].bullet_type == 0) {
al_draw_bitmap(bitmap_enemy_bullet_red, array_enemy_bullet[f].x/64, array_enemy_bullet[f].y/64, 0);
if (draw_hitboxes == 1) {
al_draw_rectangle(array_enemy_bullet[f].hitbox.x1/64, array_enemy_bullet[f].hitbox.y1/64, array_enemy_bullet[f].hitbox.x2/64, array_enemy_bullet[f].hitbox.y2/64, al_map_rgb(255, 0, 255), 0);
}
}


if (array_enemy_bullet[f].bullet_type == 1) {
al_draw_bitmap(bitmap_enemy_bullet_tazer, array_enemy_bullet[f].x/64, array_enemy_bullet[f].y/64, 0);
al_draw_tinted_bitmap(bitmap_enemy_bullet_tazer, al_map_rgba(225, 225, 225, 225), array_enemy_bullet[f].x/64, (array_enemy_bullet[f].y/64)-2, 0);
al_draw_tinted_bitmap(bitmap_enemy_bullet_tazer, al_map_rgba(195, 195, 195, 195), array_enemy_bullet[f].x/64, (array_enemy_bullet[f].y/64)-4, 0);
al_draw_tinted_bitmap(bitmap_enemy_bullet_tazer, al_map_rgba(165, 165, 165, 165), array_enemy_bullet[f].x/64, (array_enemy_bullet[f].y/64)-6, 0);
al_draw_tinted_bitmap(bitmap_enemy_bullet_tazer, al_map_rgba(135, 135, 135, 135), array_enemy_bullet[f].x/64, (array_enemy_bullet[f].y/64)-8, 0);
al_draw_tinted_bitmap(bitmap_enemy_bullet_tazer, al_map_rgba(105, 105, 105, 105), array_enemy_bullet[f].x/64, (array_enemy_bullet[f].y/64)-10, 0);
al_draw_tinted_bitmap(bitmap_enemy_bullet_tazer, al_map_rgba(75, 75, 75, 75), array_enemy_bullet[f].x/64, (array_enemy_bullet[f].y/64)-12, 0);
al_draw_tinted_bitmap(bitmap_enemy_bullet_tazer, al_map_rgba(45, 45, 45, 45), array_enemy_bullet[f].x/64, (array_enemy_bullet[f].y/64)-14, 0);
al_draw_tinted_bitmap(bitmap_enemy_bullet_tazer, al_map_rgba(15, 15, 15, 15), array_enemy_bullet[f].x/64, (array_enemy_bullet[f].y/64)-16, 0);
}

//Bullet age incrementing.
array_enemy_bullet[f].age += 1;


}//Is bullet enabled?



f += 1;
}


}//Checking if this code should run.