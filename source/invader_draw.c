if (current_cutscene_part == -1) {

//Setting draw target.
al_set_target_bitmap(bitmap_gameplay_display);

f = 0;
while (f < 5) {

if (array_invader[f].enabled == 1) {


//Drawing invader.
al_draw_bitmap(bitmap_invader, array_invader[f].x/64, array_invader[f].y/64, 0);


//Drawing hitbox.
if (draw_hitboxes == 1) {
al_draw_rectangle(array_invader[f].x/64, array_invader[f].y/64, array_invader[f].hitbox.x2/64, array_invader[f].hitbox.y2/64, al_map_rgb(255, 0, 255),0);
}

//Drawing shield if near shielder enemy.
if (array_invader[f].shielded == 1) {
al_draw_filled_ellipse((array_invader[f].x/64)+24, (array_invader[f].y/64)+12, 27, 17, al_map_rgba(50, 180, 50, 70));
}

} //Checking if enabled.


f += 1;
} //End of while loop.

}