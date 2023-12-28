#include "include_headers.c"

//Drawing on screen keyboard.
if (chosen_option == 0) { 
if (title_alpha == 0) { 

//Setting draw location.
al_set_target_bitmap(internal_display);

//Drawing question. What is your name pilot?
draw_text(text_what_is_your_name_pilot, 115, 65, 1, 1, 1, 1);

//Drawing line that text will be displayed on top of.
al_draw_line(130, 115, 350, 115, al_map_rgb(255, 255, 255), 2);

//Drawing text cursor on top of line. 
if (text_cursor_visible == 1) {
al_draw_line(text_cursor_position, 103, text_cursor_position, 113, al_map_rgb(255, 255, 255), 1);
}

//Drawing blue box behind selected key.
switch (selected_key_horizontal) {

case 0:
if (selected_key_vertical == 0) {
al_draw_filled_rectangle(143, 130, 155, 142, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 1) {
al_draw_filled_rectangle(148, 147, 160, 159, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 2) {
al_draw_filled_rectangle(153, 164, 165, 176, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 3) {
al_draw_filled_rectangle(158, 181, 170, 193, al_map_rgb(117, 150, 221)); 
}
break;

case 1:
if (selected_key_vertical == 0) {
al_draw_filled_rectangle(160, 130, 172, 142, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 1) {
al_draw_filled_rectangle(165, 147, 177, 159, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 2) {
al_draw_filled_rectangle(170, 164, 182, 176, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 3) {
al_draw_filled_rectangle(175, 181, 187, 193, al_map_rgb(117, 150, 221)); 
}
break;

case 2:
if (selected_key_vertical == 0) {
al_draw_filled_rectangle(177, 130, 189, 142, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 1) {
al_draw_filled_rectangle(182, 147, 194, 159, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 2) {
al_draw_filled_rectangle(187, 164, 199, 176, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 3) {
al_draw_filled_rectangle(192, 181, 204, 193, al_map_rgb(117, 150, 221)); 
}
break;

case 3:
if (selected_key_vertical == 0) {
al_draw_filled_rectangle(194, 130, 206, 142, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 1) {
al_draw_filled_rectangle(199, 147, 211, 159, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 2) {
al_draw_filled_rectangle(204, 164, 216, 176, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 3) {
al_draw_filled_rectangle(209, 181, 221, 193, al_map_rgb(117, 150, 221)); 
}
break;

case 4:
if (selected_key_vertical == 0) {
al_draw_filled_rectangle(211, 130, 223, 142, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 1) {
al_draw_filled_rectangle(216, 147, 228, 159, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 2) {
al_draw_filled_rectangle(221, 164, 233, 176, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 3) {
al_draw_filled_rectangle(226, 181, 238, 193, al_map_rgb(117, 150, 221)); 
}
break;

case 5:
if (selected_key_vertical == 0) {
al_draw_filled_rectangle(228, 130, 240, 142, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 1) {
al_draw_filled_rectangle(233, 147, 245, 159, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 2) {
al_draw_filled_rectangle(238, 164, 250, 176, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 3) {
al_draw_filled_rectangle(243, 181, 255, 193, al_map_rgb(117, 150, 221)); 
}
break;

case 6:
if (selected_key_vertical == 0) {
al_draw_filled_rectangle(245, 130, 257, 142, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 1) {
al_draw_filled_rectangle(250, 147, 262, 159, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 2) {
al_draw_filled_rectangle(255, 164, 267, 176, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 3) {
al_draw_filled_rectangle(260, 181, 272, 193, al_map_rgb(117, 150, 221)); 
}
break;

case 7:
if (selected_key_vertical == 0) {
al_draw_filled_rectangle(262, 130, 274, 142, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 1) {
al_draw_filled_rectangle(267, 147, 279, 159, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 2) {
al_draw_filled_rectangle(272, 164, 284, 176, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 3) {
al_draw_filled_rectangle(277, 181, 323, 193, al_map_rgb(117, 150, 221)); 
}
break;

case 8:
if (selected_key_vertical == 0) {
al_draw_filled_rectangle(279, 130, 291, 142, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 1) {
al_draw_filled_rectangle(284, 147, 296, 159, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 2) {
al_draw_filled_rectangle(289, 164, 301, 176, al_map_rgb(117, 150, 221)); 
}
break;

case 9:
if (selected_key_vertical == 0) {
al_draw_filled_rectangle(296, 130, 308, 142, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 1) {
al_draw_filled_rectangle(301, 147, 313, 159, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 2) {
al_draw_filled_rectangle(318, 147, 330, 176, al_map_rgb(117, 150, 221)); 
al_draw_filled_rectangle(306, 163, 318, 176, al_map_rgb(117, 150, 221));  
}
break;

case 10:
if (selected_key_vertical == 0) {
al_draw_filled_rectangle(313, 130, 337, 142, al_map_rgb(117, 150, 221)); 
}
if (selected_key_vertical == 1) {
al_draw_filled_rectangle(318, 147, 330, 176, al_map_rgb(117, 150, 221)); 
al_draw_filled_rectangle(306, 163, 318, 176, al_map_rgb(117, 150, 221)); 
}
break;


};

//Drawing keyboard on screen.
al_draw_bitmap(bitmap_on_screen_keyboard, 0, 0, 0);

//Drawing player name on line.
draw_text(text_playername, 130, 103, 1, 1, 1, 1);


//Drawing enter name error.
if (timer_enter_name_error > 0) {
draw_text(text_enter_name, 147, 80, 1, 0, 0, 1);
}

//Drawing too many saves error.
if (timer_too_many_saves_error > 0) {
if (timer_enter_name_error == 0) {
draw_text(text_max_number_of_saves_reached, 97, 80, 1, 0, 0, 1);
}}

}}