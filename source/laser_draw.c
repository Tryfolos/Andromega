/////Drawing the players laser.

if (current_cutscene_part == -1) {

//Setting target bitmap.
al_set_target_bitmap(bitmap_gameplay_display);


//Drawing laser core. The middle of the laser that is not made of individual particles (aka the edge).
if (input_left() == 1 || input_right() == 1) {
al_draw_filled_rectangle((hitbox_laser.x1/64)+4, hitbox_laser.y1/64, (hitbox_laser.x2/64)-3, hitbox_laser.y2/64, al_map_rgb(180, 0, 0));
}
if (timer_laser_powerup > 0) {
if (input_left() == 1 || input_right() == 1) { //Laser 2 and 3. When upgrade is active.
al_draw_filled_rectangle((hitbox_laser_2.x1/64)+4, hitbox_laser_2.y1/64, (hitbox_laser_2.x2/64)-3, hitbox_laser_2.y2/64, al_map_rgb(180, 0, 0));
al_draw_filled_rectangle((hitbox_laser_3.x1/64)+4, hitbox_laser_3.y1/64, (hitbox_laser_3.x2/64)-3, hitbox_laser_3.y2/64, al_map_rgb(180, 0, 0));
}
}

if (input_left() == 1 || input_right() == 1) {
al_draw_filled_rectangle((hitbox_laser.x1/64)+4, hitbox_laser.y1/64, (hitbox_laser.x2/64)-3, hitbox_laser.y2/64, al_map_rgb(180, 0, 0));
}

//Drawing lasers hitbox.
if (draw_hitboxes == 1) {
al_draw_rectangle(hitbox_laser.x1/64, hitbox_laser.y1/64, hitbox_laser.x2/64, hitbox_laser.y2/64, al_map_rgb(255, 0, 255), 0);
}

//Drawing lasers hitbox.
if (draw_hitboxes == 1) {
al_draw_rectangle(hitbox_laser_2.x1/64, hitbox_laser_2.y1/64, hitbox_laser_2.x2/64, hitbox_laser_2.y2/64, al_map_rgb(255, 0, 255), 0);
}

//Drawing lasers hitbox.
if (draw_hitboxes == 1) {
al_draw_rectangle(hitbox_laser_3.x1/64, hitbox_laser_3.y1/64, hitbox_laser_3.x2/64, hitbox_laser_3.y2/64, al_map_rgb(255, 0, 255), 0);
}


} //Are we in game?