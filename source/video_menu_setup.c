//Strings that will be drawn if selected as setting.
char text_video_menu_resolution[] = "RES:";
char text_video_menu_window[] = "WIN:";
char text_video_menu_refresh[] = "REF:";


//Strings to represent every possible option.
char text_video_menu_270[] = "480X270"; //0.
char text_video_menu_540[] = "960X540";//1.
char text_video_menu_810[] = "1440X810";//2.
char text_video_menu_1080[] = "1920X1080";//3.
char text_video_menu_1350[] = "2400X1350";//4.
char text_video_menu_1620[] = "2880X1620";//5.
char text_video_menu_1890[] = "3360X1890";//6.
char text_video_menu_2160[] = "3840X2160";//7.
char text_video_menu_2700[] = "4800X2700";//8.
char text_video_menu_3240[] = "5760X3240";//9.
char text_video_menu_3780[] = "6720X3780";//10.
char text_video_menu_4320[] = "7680X4320";//11.

//char text_video_menu_
char text_video_menu_windowed[] = "WINDOWED";
char text_video_menu_borderless[] = "BORDERLESS";
char text_video_menu_fullscreen[] = "FULLSCREEN";

//Refresh rates.
char text_video_menu_30[] = "30HZ";
char text_video_menu_40[] = "40HZ";
char text_video_menu_50[] = "50HZ";
char text_video_menu_60[] = "60HZ";
char text_video_menu_75[] = "75HZ";
char text_video_menu_100[] = "100HZ";
char text_video_menu_120[] = "120HZ";
char text_video_menu_144[] = "144HZ";
char text_video_menu_165[] = "165HZ";
char text_video_menu_200[] = "200HZ";
char text_video_menu_240[] = "240HZ";

//Offsets.
char text_video_menu_x[] = "X-OFFSET";
char text_video_menu_y[] = "Y-OFFSET";


//Bitmaps.
ALLEGRO_BITMAP * bitmap_video_menu_arrow = al_load_bitmap("assets/video_menu_arrow.png");

//Function that saves video config file with current in game settings.
void save_video() {
FILE * file_video = fopen("user_data/video.txt", "w");
fprintf(file_video, "resolution: %s\n", text_video_menu_option_0_option);
fprintf(file_video, "windowmode: %s\n", text_video_menu_option_1_option);
fprintf(file_video, "refresh: %s\n", text_video_menu_option_2_option);
fclose(file_video);
}