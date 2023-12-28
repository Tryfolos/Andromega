//Only if in gameplay mode.
if (current_cutscene_part == -1) {

f = 0;
while (f < 100) {


//Setting target bitmap.
al_set_target_bitmap(bitmap_gameplay_display);

if (array_enemy_shielder[f].enabled == 1) {

//Drawing shielder enemy. 
al_draw_bitmap(bitmap_enemy_shielder, array_enemy_shielder[f].x/64, array_enemy_shielder[f].y/64, 0);



if (game_paused == 0) { //Is game paused?

//Drawing "energy stream"/"shield line" that is sent to enemy when it is close. 
i = 0;
while (i < 100) {
if (array_enemy[i].enabled == 1) {
if (hitbox_colliding(array_enemy[i].hitbox, array_enemy_shielder[f].area) == 1) {
if (array_enemy[i].behaviour == 1) {
al_draw_line(((array_enemy_shielder[f].x/64)+10)+randint(-1, 1), ((array_enemy_shielder[f].y/64)+7)+randint(-1, 1), (array_enemy[i].x/64)+randint(3, 19), (array_enemy[i].y/64)+randint(3, 28), al_map_rgba(50, 180, 50, 70), 1);
} //Enemy type 1. Tazer enemy.
if (array_enemy[i].behaviour == 0) {
al_draw_line(((array_enemy_shielder[f].x/64)+10)+randint(-1, 1), ((array_enemy_shielder[f].y/64)+7)+randint(-1, 1), (array_enemy[i].x/64)+randint(3, 15), (array_enemy[i].y/64)+randint(3, 15), al_map_rgba(50, 180, 50, 70), 1);
} //Enemy type 0.
}
} //Is enemy enabled.
i += 1;
}



//Drawing "energy stream"/"shield line" that is sent to invader enemy when it is close. 
i = 0;
while (i < 10) {
if (array_invader[i].enabled == 1) {
if (hitbox_colliding(array_invader[i].hitbox, array_enemy_shielder[f].area) == 1) {
al_draw_line(((array_enemy_shielder[f].x/64)+10)+randint(-1, 1), ((array_enemy_shielder[f].y/64)+7)+randint(-1, 1), (array_invader[i].x/64)+randint(3, 45), (array_invader[i].y/64)+randint(3, 18), al_map_rgba(50, 180, 50, 70), 1);
}
} //Is enemy enabled.
i += 1;
}


//Drawing "energy stream"/"shield line" that is sent to small enemy when it is close. 
i = 0;
while (i < 100) {
if (array_small_enemy[i].enabled == 1) {
if (hitbox_colliding(array_small_enemy[i].hitbox, array_enemy_shielder[f].area) == 1) {
al_draw_line(((array_enemy_shielder[f].x/64)+10)+randint(-1, 1), ((array_enemy_shielder[f].y/64)+7)+randint(-1, 1), (array_small_enemy[i].x/64)+randint(3, 13), (array_small_enemy[i].y/64)+randint(3, 13), al_map_rgba(50, 180, 50, 70), 1);
}
} //Is enemy enabled.
i += 1;
}

} //Is game paused?


//Drawing hitbox.
if (draw_hitboxes == 1) {
al_draw_rectangle(array_enemy_shielder[f].hitbox.x1/64, array_enemy_shielder[f].hitbox.y1/64, array_enemy_shielder[f].hitbox.x2/64, array_enemy_shielder[f].hitbox.y2/64, al_map_rgb(255, 0, 255), 1);
}
//Drawing area.
if (draw_hitboxes == 1) {
al_draw_rectangle(array_enemy_shielder[f].area.x1/64, array_enemy_shielder[f].area.y1/64, array_enemy_shielder[f].area.x2/64, array_enemy_shielder[f].area.y2/64, al_map_rgb(255, 0, 255), 1);
}

} //Is shielder enemy enabled? 



f += 1;
}

}