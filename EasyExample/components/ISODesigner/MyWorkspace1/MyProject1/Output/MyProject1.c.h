// ISO-Designer ISO 11783   Version 5.5.1.4367 Jetter AG
// Do not change!

#define WorkingSet_0_Offset                                     1
#define Macro_1_Offset                                         21
#define Macro_2_Offset                                         42
#define Macro_3_Offset                                         63
#define Macro_4_Offset                                         76
#define Macro_5_Offset                                         89
#define Macro_6_Offset                                        102
#define Macro_7_Offset                                        115
#define DataMask_Home_Offset                                  128
#define DataMask2_Offset                                      196
#define Container_Gesamtzaehler_Offset                        210
#define Container_Tageszaehler_Offset                         268
#define SoftKeyMask_Home_Offset                               326
#define SoftKey_PlusPlus_Offset                               344
#define SoftKey_Reset_Gesamtzaehler_Offset                    357
#define SoftKey_Reset_Tageszaehler_Offset                     370
#define SoftKey_MinusMinus_Offset                             383
#define Button_PlusPlus_Offset                                396
#define Button_Reset_Gesamtzaehler_Offset                     415
#define Button_Reset_Tageszaehler_Offset                      434
#define Button_MinusMinus_Offset                              453
#define Button_S2_Offset                                      472
#define Button_S3_Offset                                      493
#define Button_S4_Offset                                      514
#define Button_S5_Offset                                      537
#define InputNumber_Gesamtziel_Offset                         558
#define InputNumber_Tagesziel_Offset                          596
#define OutputString_S2_Offset                                634
#define OutputString_Fasszaehler_Offset                       658
#define OutputString_Reset_Gesamtzaehler_Offset               687
#define OutputString_Gesamtzaehler_Offset                     717
#define OutputString_Tageszaehler_Offset                      746
#define OutputString_Reset_Tageszaehler_Offset                774
#define OutputString_S3_Offset                                803
#define OutputString_S4_Offset                                826
#define OutputString_S5_Offset                                848
#define OutputString_SoftKey_Reset_Gesamtzaehler_Offset       871
#define OutputString_SoftKey_Reset_Tageszaehler_Offset        901
#define OutputString_Ziel_Offset                              930
#define OutputString_ZielErreicht_Offset                      951
#define OutputNumber_Tageszaehler_Offset                      981
#define OutputNumber_Gesamtzaehler_Offset                    1010
#define Rectangle_Box_Offset                                 1039
#define Meter_Gesamtzaehler_Offset                           1052
#define Meter_Tageszaehler_Offset                            1073
#define LinearBargraph_Gesamtzaehler_Offset                  1094
#define LinearBargraph_Tageszaehler_Offset                   1118
#define Icon_Button_MinusMinus_Offset                        1142
#define Icon_Button_PlusPlus_Offset                          1381
#define Icon_SoftKey_MinusMinus_Offset                       1730
#define IconSoftKey_PlusPlus_Offset                          1969
#define NumberVariable_Tageszaehler_Offset                   2318
#define NumberVariable_Gesamtzaehler_Offset                  2325
#define NumberVariable_Gesamtziel_Offset                     2332
#define NumberVariable_Tagesziel_Offset                      2339
#define FontAttributes_23000_Offset                          2346
#define FontAttributes_Default_Offset                        2354
#define FontAttributes_Button_Offset                         2362
#define LineAttributes_Border_Offset                         2370
#define FillAttributes_DarkerBG_Offset                       2378
#define ObjectPointer_Null2_Offset                           2386
#define ObjectPointer_Tagesziel_Offset                       2391
#define ObjectPointer_Null1_Offset                           2396
#define ObjectPointer_Gesamtziel_Offset                      2401
#define AuxFunction2_PlusPlus_Offset                         2406
#define AuxFunction2_MinusMinus_Offset                       2418
#define ExternalObjectDefinition_38000_Offset                2430

#define ISO_OP_MEMORY_CLASS

#define ISO_OP_MyProject1_Size   2443
extern const unsigned char ISO_OP_MEMORY_CLASS isoOP_MyProject1[];

#define ISO_OP_MyProject1_ObjectNumber     67
extern const unsigned long ISO_OP_MEMORY_CLASS isoOP_MyProject1_Offset[];
extern const unsigned long ISO_OP_MEMORY_CLASS isoOP_MyProject1_Offset_Id[];
#define ISO_OP_MyProject1_Scale_Offset      1

#define ID_NULL  0xFFFF

#define TYPEID_WORKSET        0
#define TYPEID_DATAMASK       1
#define TYPEID_ALARMMASK      2
#define TYPEID_CONTAINER      3
#define TYPEID_SKEYMASK       4
#define TYPEID_SOFTKEY        5
#define TYPEID_BUTTON         6
#define TYPEID_INBOOL         7
#define TYPEID_INSTR          8
#define TYPEID_INNUM          9
#define TYPEID_INLIST        10
#define TYPEID_OUTSTR        11
#define TYPEID_OUTNUM        12
#define TYPEID_OUTLINE       13
#define TYPEID_OUTRECT       14
#define TYPEID_OUTELLIPSE    15
#define TYPEID_OUTPOLY       16
#define TYPEID_OUTMETER      17
#define TYPEID_OUTLINBAR     18
#define TYPEID_OUTARCBAR     19
#define TYPEID_OUTPICT       20
#define TYPEID_VARNUM        21
#define TYPEID_VARSTR        22
#define TYPEID_FONTATTR      23
#define TYPEID_LINEATTR      24
#define TYPEID_FILLATTR      25
#define TYPEID_INPATTR       26
#define TYPEID_OBJPTR        27
#define TYPEID_MACRO         28
#define TYPEID_AUXFUNC       29
#define TYPEID_AUXINP        30
#define TYPEID_AUXFUNC2      31
#define TYPEID_AUXINP2       32
#define TYPEID_AUXPTR        33
#define TYPEID_WINMASK       34
#define TYPEID_KEYGROUP      35
#define TYPEID_GRPHCTXT      36
#define TYPEID_OUTLIST       37
#define TYPEID_EXTINPATTR    38
#define TYPEID_COLMAP        39
#define TYPEID_OBJLBLREF     40
#define TYPEID_EXTOBJDEF     41
#define TYPEID_EXTREFNAME    42
#define TYPEID_EXTOBJPTR     43
#define TYPEID_ANIMATION     44
#define TYPEID_PNG           46

#define EV_REFRESH            0
#define EV_ACT                1
#define EV_DEACT              2
#define EV_SHOW               3
#define EV_HIDE               4
#define EV_ENABLE             5
#define EV_DISABLE            6
#define EV_CHGACTMASK         7
#define EV_CHGSKEYMASK        8
#define EV_CHGATTR            9
#define EV_CHGBKCOLOR        10
#define EV_CHGFONTATTR       11
#define EV_CHGLINEATTR       12
#define EV_CHGFILLATTR       13
#define EV_CHGCHILDLOC       14
#define EV_CHGSIZE           15
#define EV_CHGVAL            16
#define EV_CHGPRIOR          17
#define EV_CHGENDPNT         18
#define EV_SELINPUT          19
#define EV_DESELINPUT        20
#define EV_ESC               21
#define EV_ENTERVAL          22
#define EV_ENTERCHGVAL       23
#define EV_KEYPRESS          24
#define EV_KEYRELEASE        25
#define EV_CHGCHILDPOS       26

#define CMD_HIDE_SHOW               160
#define CMD_ENABLE_DISABLE          161
#define CMD_SELECT_INPUT_OBJECT     162
#define CMD_CONTROL_AUDIO_DEVICE    163
#define CMD_SET_AUDIO_VOLUME        164
#define CMD_CHANGE_CHILD_LOCATION   165
#define CMD_CHANGE_SIZE             166
#define CMD_CHANGE_BACKGROUND_COLOR 167
#define CMD_CHANGE_NUMERIC_VALUE    168
#define CMD_CHANGE_END_POINT        169
#define CMD_CHANGE_FONT_ATTRIBUTES  170
#define CMD_CHANGE_LINE_ATTRIBUTES  171
#define CMD_CHANGE_FILL_ATTRIBUTES  172
#define CMD_CHANGE_ACTIVE_MASK      173
#define CMD_CHANGE_SOFT_KEY_MASK    174
#define CMD_CHANGE_ATTRIBUTE        175
#define CMD_CHANGE_PRIORITY         176
#define CMD_CHANGE_LIST_ITEM        177
#define CMD_CHANGE_STRING_VALUE     179
#define CMD_CHANGE_CHILD_POSITION   180
#define CMD_SET_OBJECT_LABEL        181
#define CMD_CHANGE_POLYGON_POINT    182
#define CMD_CHANGE_POLYGON_SCALE    183
#define CMD_GRAPHICS_CONTEXT        184
#define CMD_GET_ATTRIBUTE           185
#define CMD_SELECT_COLOURMAP_OR_PALETTE 186
#define CMD_EXECUTE_EXTENDED_MACRO  188
#define CMD_LOCK_UNLOCK_MASK        189
#define CMD_EXECUTE_MACRO           190

#define COLOR_BLACK       0
#define COLOR_WHITE       1
#define COLOR_GREEN       2
#define COLOR_TEAL        3
#define COLOR_MAROON      4
#define COLOR_PURPLE      5
#define COLOR_OLIVE       6
#define COLOR_SILVER      7
#define COLOR_GREY        8
#define COLOR_BLUE        9
#define COLOR_LIME       10
#define COLOR_CYAN       11
#define COLOR_RED        12
#define COLOR_MAGENTA    13
#define COLOR_YELLOW     14
#define COLOR_NAVY       15

#define FLOAT_1      0x00, 0x00, 0x80, 0x3F
#define FLOAT_10     0x00, 0x00, 0x20, 0x41
#define FLOAT_100    0x00, 0x00, 0xC8, 0x42
#define FLOAT_1000   0x00, 0x00, 0x7A, 0x44
#define FLOAT_0_1    0xCD, 0xCC, 0xCC, 0x3D
#define FLOAT_0_01   0x0A, 0xD7, 0x23, 0x3C
#define FLOAT_0_001  0x6F, 0x12, 0x83, 0x3A
