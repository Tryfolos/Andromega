
//Checking if file exists.
if (access("user_data/video.txt", F_OK) != 0) {

//Creating file if it doesn't exist and putting default values in it.
FILE * file_video = fopen("user_data/video.txt", "w");

fputs("resolution: 1920x1080\n", file_video);
fputs("windowmode: windowed\n", file_video);
fputs("refresh: 60hz", file_video);

fclose(file_video);
} else {

FILE * file_video = fopen("user_data/video.txt", "r+");

//Reading each line in video settings file.
fgets(resolution, 32, file_video);
fgets(windowmode, 32, file_video);
fgets(refresh, 32, file_video);

//Make lowercase versions of string representation of video settings.
stringtolower(resolution);
stringtolower(windowmode);
stringtolower(refresh);

//printf("%s", refresh);

//Setting resolution based on file.
if (strstr(resolution, "480x270") != NULL) {
external_display_width = 480;
external_display_height = 270;
video_menu_option_0_option = 0;
}
if (strstr(resolution, "960x540") != NULL) {
external_display_width = 960;
external_display_height = 540;
video_menu_option_0_option = 1;
}
if (strstr(resolution, "1440x810") != NULL) {
external_display_width = 1440;
external_display_height = 810;
video_menu_option_0_option = 2;
}
if (strstr(resolution, "1920x1080") != NULL) {
external_display_width = 1920;
external_display_height = 1080;
video_menu_option_0_option = 3;
}
if (strstr(resolution, "2400x1350") != NULL) {
external_display_width = 2400;
external_display_height = 1350;
video_menu_option_0_option = 4;
}
if (strstr(resolution, "2880x1620") != NULL) {
external_display_width = 2880;
external_display_height = 1620;
video_menu_option_0_option = 5;
}
if (strstr(resolution, "3360x1890") != NULL) {
external_display_width = 3360;
external_display_height = 1890;
video_menu_option_0_option = 6;
}
if (strstr(resolution, "3840x2160") != NULL) {
external_display_width = 3840;
external_display_height = 2160;
video_menu_option_0_option = 7;
}
if (strstr(resolution, "4800x2700") != NULL) {
external_display_width = 4800;
external_display_height = 2700;
video_menu_option_0_option = 8;
}
if (strstr(resolution, "5760x3240") != NULL) {
external_display_width = 5760;
external_display_height = 3240;
video_menu_option_0_option = 9;
}
if (strstr(resolution, "6720x3780") != NULL) {
external_display_width = 6720;
external_display_height = 3780;
video_menu_option_0_option = 10;
}
if (strstr(resolution, "7680x4320") != NULL) {
external_display_width = 7680;
external_display_height = 4320;
video_menu_option_0_option = 11;
}

//Setting window mode based on file.
if (strstr(windowmode, "windowed") != NULL) {
window_mode = 0;
video_menu_option_1_option = 0;
}
if (strstr(windowmode, "borderless") != NULL) {
window_mode = 1;
video_menu_option_1_option = 1;
}
if (strstr(windowmode, "fullscreen") != NULL) {
window_mode = 2;
video_menu_option_1_option = 2;
}

//Loading refresh rates.
if (strstr(refresh, "30hz") != NULL) {
video_menu_option_2_option = 0;
target_framerate = 30;
}
if (strstr(refresh, "40hz") != NULL) {
video_menu_option_2_option = 1;
target_framerate = 40;
}
if (strstr(refresh, "50hz") != NULL) {
video_menu_option_2_option = 2;
target_framerate = 50;
}
if (strstr(refresh, "60hz") != NULL) {
video_menu_option_2_option = 3;
target_framerate = 60;
}
if (strstr(refresh, "75hz") != NULL) {
video_menu_option_2_option = 4;
target_framerate = 75;
}
if (strstr(refresh, "100hz") != NULL) {
video_menu_option_2_option = 5;
target_framerate = 100;
}
if (strstr(refresh, "120hz") != NULL) {
video_menu_option_2_option = 6;
target_framerate = 120;
}
if (strstr(refresh, "144hz") != NULL) {
video_menu_option_2_option = 7;
target_framerate = 144;
}
if (strstr(refresh, "165hz") != NULL) {
video_menu_option_2_option = 8;
target_framerate = 165;
}
if (strstr(refresh, "200hz") != NULL) {
video_menu_option_2_option = 9;
target_framerate = 200;
}
if (strstr(refresh, "240hz") != NULL) {
video_menu_option_2_option = 10;
target_framerate = 240;
}


//Closing video settings.
fclose(file_video);

}
