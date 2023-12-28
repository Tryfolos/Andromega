//Loading side panels.
ALLEGRO_BITMAP * bitmap_level_side_panel = al_load_bitmap("assets/level_panel.png");
ALLEGRO_BITMAP * bitmap_level_side_panel_2 = al_load_bitmap("assets/level_panel_2.png");

//Little clock that is besides time.
ALLEGRO_BITMAP * bitmap_clock = al_load_bitmap("assets/clock.png");

//Loading stat bars.
ALLEGRO_BITMAP * bitmap_durability = al_load_bitmap("assets/durability.png");
ALLEGRO_BITMAP * bitmap_shield = al_load_bitmap("assets/shield.png");
ALLEGRO_BITMAP * bitmap_laser = al_load_bitmap("assets/laser.png");
ALLEGRO_BITMAP * bitmap_firerate = al_load_bitmap("assets/firerate.png");

//Loading lightning/energy icon.
ALLEGRO_BITMAP * bitmap_lightning_icon = al_load_bitmap("assets/lightning_icon.png");

//Loading background panel.
ALLEGRO_BITMAP * bitmap_pause_background = al_load_bitmap("assets/pause_background.png");

//Selected stat blue background.
ALLEGRO_BITMAP * bitmap_pause_menu_selected_stat = al_load_bitmap("assets/pause_menu_selected_stat_background.png");

//Blue background for selected tab.
ALLEGRO_BITMAP * bitmap_pause_menu_selected_tab = al_load_bitmap("assets/pause_menu_selected_tab.png");

//Blue background for selected option in bottom menus.
ALLEGRO_BITMAP * bitmap_pause_menu_selected_option = al_load_bitmap("assets/pause_menu_selected_option.png");

//Warning icon for gun heat/gun overheating. Warning sign.
ALLEGRO_BITMAP * bitmap_gun_heat_warning = al_load_bitmap("assets/gun_heat_warning.png");

//Locked upgrade symbol.
ALLEGRO_BITMAP * bitmap_locked_upgrade = al_load_bitmap("assets/upgrade_locked.png");

//Unlocked upgrade sumbol.
ALLEGRO_BITMAP * bitmap_unlocked_upgrade = al_load_bitmap("assets/upgrade_unlocked.png");

//Supershield. This shows on top of shield bar when you have the shield powerup enabled.
ALLEGRO_BITMAP * bitmap_supershield = al_load_bitmap("assets/supershield.png");

//Setting selected_resolution in pause menu.
if (external_display_height == 270) {
pause_menu_selected_resolution = 270;
}
if (external_display_height == 540) {
pause_menu_selected_resolution = 540;
}
if (external_display_height == 810) {
pause_menu_selected_resolution = 810;
}
if (external_display_height == 1080) {
pause_menu_selected_resolution = 1080;
}
if (external_display_height == 1350) {
pause_menu_selected_resolution = 1350;
}
if (external_display_height == 1620) {
pause_menu_selected_resolution = 1620;
}
if (external_display_height == 1890) {
pause_menu_selected_resolution = 1890;
}
if (external_display_height == 2160) {
pause_menu_selected_resolution = 2160;
}
if (external_display_height == 2700) {
pause_menu_selected_resolution = 2700;
}
if (external_display_height == 3240) {
pause_menu_selected_resolution = 3240;
}
if (external_display_height == 3780) {
pause_menu_selected_resolution = 3780;
}
if (external_display_height == 4320) {
pause_menu_selected_resolution = 4320;
}

//Setting selected_window_mode in pause menu.
if (window_mode == 0) {
pause_menu_selected_window_mode = 0;
strcpy(text_window_mode_variable, "WINDOWED");
}
if (window_mode == 1) {
pause_menu_selected_window_mode = 1;
strcpy(text_window_mode_variable, "BORDERLESS");
}
if (window_mode == 2) {
pause_menu_selected_window_mode = 2;
strcpy(text_window_mode_variable, "FULLSCREEN");
}