

#ifndef _AUDIO_H_

#define _AUDIO_H_

extern Music *music_current;
extern Music sound_drive;
extern Sound sound_hit;
extern Sound sound_countdown_0;
extern Sound sound_countdown_1;
extern Sound sound_boost;

void audio_load();
void audio_set_track(unsigned track);
void audio_unload();
void audio_set_path(unsigned track, const char *path);

#endif
