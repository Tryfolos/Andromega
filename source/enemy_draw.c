
if (current_cutscene_part == -1) {



f = 0; 
while (f < 1000) {

//If enemy (Red Horseshoe) is enabled. draw it, what sprite is drawn depends on frame variable (set in logic code).
if (array_enemy[f].enabled == 1) {


if (array_enemy[f].behaviour == 0) { //Enemy 0 draw.

if (array_enemy[f].frame == 0) {
al_draw_bitmap(bitmap_enemy_0, array_enemy[f].x/64, array_enemy[f].y/64, 0);
}
if (array_enemy[f].frame == 1) {
al_draw_bitmap(bitmap_enemy_0, array_enemy[f].x/64, array_enemy[f].y/64, 0);
}

//If enemy is shielded, draw shield.
if (array_enemy[f].shielded == 1) {
al_draw_filled_ellipse((array_enemy[f].x/64)+9, (array_enemy[f].y/64)+9, 10, 10, al_map_rgba(50, 180, 50, 70));
}

} //Enemy 0 draw.


if (array_enemy[f].behaviour == 1) { //Enemy 1 draw.


if (game_paused == 0) { //If game is not paused animate sprite. If game is paused, show the same frame all the time.
array_enemy[f].animate = 1;
} else {
array_enemy[f].animate = 0;
}
if (array_enemy[f].animate == 1) {
array_enemy[f].frame = randint(0, 3);
} 
switch (array_enemy[f].frame) { //Enemy 1 draw.

case 0:
al_draw_bitmap(bitmap_enemy_1_0, array_enemy[f].x/64, array_enemy[f].y/64, 0);
break;

case 1:
al_draw_bitmap(bitmap_enemy_1_1, array_enemy[f].x/64, array_enemy[f].y/64, 0);
break;

case 2:
al_draw_bitmap(bitmap_enemy_1_2, array_enemy[f].x/64, array_enemy[f].y/64, 0);
break;

case 3:
al_draw_bitmap(bitmap_enemy_1_3, array_enemy[f].x/64, array_enemy[f].y/64, 0);
break;

};


//If enemy is shielded, draw shield.
if (array_enemy[f].shielded == 1) {
al_draw_filled_ellipse((array_enemy[f].x/64)+11, (array_enemy[f].y/64)+18, 16, 20, al_map_rgba(50, 180, 50, 70));
}


} //Enemy 1 draw.



} //Is enemy enabled?

//devtest.
if (draw_hitboxes == 1) {
if (array_enemy[f].enabled == 1) {
al_draw_rectangle(array_enemy[f].hitbox.x1/64, array_enemy[f].hitbox.y1/64, array_enemy[f].hitbox.x2/64, array_enemy[f].hitbox.y2/64, al_map_rgb(255, 0, 255), 1);
}}




f += 1;
}


}
