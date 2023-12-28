//////Drawing the background for the story menu.

//Only run this code when in the correct menu.
if (current_cutscene_part != -1) {
if (chosen_option == -2) {


//Setting the target bitmap for drawing.
al_set_target_bitmap(internal_display);


//Drawing background.
al_draw_bitmap(bitmap_story_background, story_background_x, 0, 0);


//Drawing text (actual story).
draw_text(text_story, story_background_x+213, 21, 0, 1, 0, 1);
draw_text_small(text_story_line_0, story_background_x+38, 50, 1, 1, 1, 1);
draw_text_small(text_story_line_1, story_background_x+38, 61, 1, 1, 1, 1);
draw_text_small(text_story_line_2, story_background_x+38, 72, 1, 1, 1, 1);
draw_text_small(text_story_line_3, story_background_x+38, 83, 1, 1, 1, 1);
draw_text_small(text_story_line_4, story_background_x+38, 94, 1, 1, 1, 1);
draw_text_small(text_story_line_5, story_background_x+38, 105, 1, 1, 1, 1);
draw_text_small(text_story_line_6, story_background_x+38, 116, 1, 1, 1, 1);
draw_text_small(text_story_line_7, story_background_x+38, 127, 1, 1, 1, 1);
draw_text_small(text_story_line_8, story_background_x+38, 138, 1, 1, 1, 1);
draw_text_small(text_story_line_9, story_background_x+38, 149, 1, 1, 1, 1);
draw_text_small(text_story_line_10, story_background_x+38, 160, 1, 1, 1, 1);
draw_text_small(text_story_line_11, story_background_x+38, 171, 1, 1, 1, 1);
draw_text_small(text_story_line_12, story_background_x+38, 182, 1, 1, 1, 1);
draw_text_small(text_story_line_13, story_background_x+38, 193, 1, 1, 1, 1);
draw_text_small(text_story_line_14, story_background_x+38, 204, 1, 1, 1, 1);

draw_text_small(text_copyr, story_background_x+123, 260, 0, 1, 0, 1);


//Moving menu to the left.
story_background_x -= 16;

//Clamping/limiting horizontal/x movement of background.
if (story_background_x < 0) {
story_background_x = 0;
}

}} //Checking that we are in the right menu. 


if (chosen_option == -1) { //If the menu is not ative move background back to the right. 

//Setting the target bitmap for drawing.
al_set_target_bitmap(internal_display);

//Drawing background.
al_draw_bitmap(bitmap_story_background, story_background_x, 0, 0);
story_background_x += 16;

//Clamping/limiting horizontal/x movement of background.
if (story_background_x > 480) {
story_background_x = 480;
}

}