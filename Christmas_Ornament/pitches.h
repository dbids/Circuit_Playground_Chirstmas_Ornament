#ifndef PITCHES_H    // Put these two lines at the top of your file.
#define PITCHES_H    // (Use a suitable name, usually based on the file name.)
/********************************************************************
 * Musical Notes via https://www.arduino.cc/en/Tutorial/ToneMelody  *
 ********************************************************************/

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

/********************************************************************
 * PLAY SONG FUNCTION *
 ********************************************************************/

void playSong(uint16_t* melody, char* noteDuration, uint8_t len, float speed, uint8_t color_choice);

/********************************************************************
 * JINGLE BELLS *
 ********************************************************************/

uint16_t m_jinglebells[]= {NOTE_B4, NOTE_B4, NOTE_B4, 
  NOTE_B4, NOTE_B4, NOTE_B4,
  NOTE_B4, NOTE_D5, NOTE_G4, NOTE_A4,
  NOTE_B4, 0,
  NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, 
  NOTE_C5, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, 
  NOTE_D5, NOTE_D5, NOTE_C5, NOTE_A4, 
  NOTE_G4};

char nd_jinglebells[] = {    
  'q', 'q', 'h', 
  'q', 'q', 'h', 
  'q', 'q', 'p', 'e',
  'w', 'q',
  'q', 'q', 'p', 'e', 
  'q', 'q', 'q', 'e', 'e',
  'q', 'q', 'q', 'q', 
  'w'};

uint8_t len_jinglebells = 26;

float speed_jinglebells = 2;

/********************************************************************
 * RUDOLPH THE RED NOSED REINDEER *
 ********************************************************************/

uint16_t m_rudolph[]= {NOTE_G4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_C5, NOTE_A4, NOTE_G4,
                  NOTE_G4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_C5, NOTE_B4,
                  NOTE_F4, NOTE_G4, NOTE_F4, NOTE_D4, NOTE_B4, NOTE_A4, NOTE_G4,
                  NOTE_G4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_E4};

char nd_rudolph[] = {'q', 'e', 'e', 'q', 'q', 'q', 'o',
                      'e', 'e', 'e', 'e', 'q', 'q', 'w',
                      'q', 'e', 'e', 'q', 'q', 'q', 'o',
                      'e', 'e', 'e', 'e', 'q', 'q', 'w'};

uint8_t len_rudolph = 28;

float speed_rudolph = 1.5;

/********************************************************************
 * WONDERFUL_TIME *
 ********************************************************************/

uint16_t m_wonderfultime[]= {NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_C5, NOTE_A4, NOTE_G4, 0,
                        NOTE_F4, NOTE_D4, NOTE_C4,
                        NOTE_E4, NOTE_F4, NOTE_G4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_D4, NOTE_D4, NOTE_D4,
                        NOTE_E4, NOTE_F4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_F4, NOTE_A4, NOTE_C5,
                        NOTE_A4, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_C5, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_D4, NOTE_C4, NOTE_C5,
                        NOTE_E4, NOTE_F4, NOTE_G4, NOTE_C4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_C5,
                        NOTE_A4, NOTE_G4, 0, NOTE_F4, NOTE_D4, NOTE_C4};

char nd_wonderfultime[] = {'e', 'e', 'p', 'e', 'e', 'e', 'p', 'e',
                            'e', 'e', 'o',
                            'q', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e',
                            'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'e', 'o',
                            'e', 'e', 'e', 'p', 'e', 'e', 'e', 'h', 'e', 'e', 'e',
                            'e', 'e', 'e', 'e', 'e', 'h', 'e', 'e', 'p', 'e', 'e',
                            'e', 'p', 'e', 'e', 'e', 'o'};

uint8_t len_wonderfultime = 60;

float speed_wonderfultime = 1;

/********************************************************************
 * HOLY_NIGHT *
 ********************************************************************/

uint16_t m_holynight[]= {NOTE_E4, NOTE_E4, NOTE_E4, NOTE_G4,
                    NOTE_G4, NOTE_A4, NOTE_A4, NOTE_F4, NOTE_A4, NOTE_C5, 
                    NOTE_G4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_E4, NOTE_F4,
                    NOTE_G4, NOTE_F4, NOTE_D4, NOTE_C4};

char nd_holynight[] = {'p', 'q', 'e', 'i',
                        'e', 'q', 'e', 'q', 'e', 'o', 
                        'q', 'e', 'q', 'e', 'p', 'q', 'e',
                        'p', 'q', 'e', 'u'};

uint8_t len_holynight = 22;

float speed_holynight = 1;

/********************************************************************
 * JOY_TO_THE_WORLD *
 ********************************************************************/

uint16_t m_joy[]= {NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_AS4, 
              NOTE_A3, NOTE_G3, NOTE_F3, NOTE_C4, NOTE_D4,
              NOTE_D4, NOTE_E4, NOTE_E4, NOTE_F4, NOTE_F4,
              NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_C4,
              NOTE_AS4, NOTE_A4, NOTE_F4, NOTE_F4, NOTE_E4,
              NOTE_D4, NOTE_C4, NOTE_B4, NOTE_B4, NOTE_AS4,
              NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4,
              NOTE_A4, NOTE_AS4, NOTE_C4, NOTE_AS4, NOTE_A4,
              NOTE_G3, NOTE_G3, NOTE_G3, NOTE_G3, NOTE_A4,
              NOTE_AS4, NOTE_A4, NOTE_G3, NOTE_F3, NOTE_F4,
              NOTE_D4, NOTE_C4, NOTE_AS4, NOTE_A4, NOTE_B4,
              NOTE_A4, NOTE_G3, NOTE_F3};

char nd_joy[] = {'h', 'p', 'e', 'o', 'q',
                  'h', 'h', 'o', 'q', 'o',
                  'q', 'o', 'q', 'y', 'q',
                  'q', 'q', 'q', 'q', 'p',
                  'e', 'q', 'q', 'q', 'q',
                  'q', 'q', 'q', 'p', 'e',
                  'q', 'q', 'q', 'q', 'q',
                  'e', 'e', 'o', 'e', 'e',
                  'q', 'q', 'q', 'e', 'e',
                  'o', 'e', 'e', 'q', 'h',
                  'q', 'p', 'e', 'q', 'q',
                  'h', 'h', 'w'};

uint8_t len_joy = 58;

float speed_joy = 2;

/********************************************************************
 * SLEIGH RIDE *
 ********************************************************************/

uint8_t len_sleighride = 33;

uint16_t m_sleighride[]= {NOTE_AS5, NOTE_AS5, NOTE_AS5,
                     NOTE_AS5, NOTE_C6, NOTE_AS5, NOTE_G5, NOTE_DS5,
                     NOTE_F5, NOTE_G5, NOTE_F5, NOTE_DS5, NOTE_C5,
                     NOTE_AS4, NOTE_AS4,
                     NOTE_C5, NOTE_D5, NOTE_DS5, NOTE_F5, NOTE_G5,
                     NOTE_AS5, NOTE_C6, NOTE_AS5, NOTE_G5, NOTE_F5, NOTE_DS5,
                     NOTE_F5, NOTE_F5, NOTE_G5, NOTE_F5, NOTE_DS5, NOTE_C5,
                     NOTE_DS5};
                                                                                                                                   
char nd_sleighride[] = {'e', 'e', 'e',
                         'e', 'e', 's', 's', 'e',
                         'e', 'e', 's', 's', 'e',
                         't', 's',
                         's', 's', 's', 's', 's',
                         'e', 'e', 's', 's', 's', 's',
                         'e', 's', 's', 's', 's', 'e', 
                         'h'};


float speed_sleighride = 1.1;

#endif // PITCHES_H
