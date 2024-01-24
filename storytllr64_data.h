#define packed_strings 4

#define img_fileformat 16

#define screen_splity 96

#define string_max_len 427

u8 opcodeattr[48]={130,131,129,129,131,1,1,1,1,129,130,130,130,2,3,2,3,2,2,2,4,2,4,131,129,130,130,130,130,131,3,131,129,129,130,131,132,131,131,131,131,131,130,129,130,131,129,2};

#define varcmp_equal       0
#define varcmp_different   1
#define varcmp_greater     2
#define varcmp_less        3

#define op_addscore 128
#define op_addvar 129
#define op_clear 130
#define op_dbg 131
#define op_decvar 132
#define op_else 133
#define op_end 134
#define op_endif 135
#define op_endwith 136
#define op_getkey 137
#define op_gfxmode 138
#define op_goto 139
#define op_hintmode 140
#define op_if 141
#define op_ifis 142
#define op_ifisaroom 143
#define op_ifisin 144
#define op_ifisroom 145
#define op_ifkey 146
#define op_ifnot 147
#define op_ifobjinattr 148
#define op_ifundef 149
#define op_ifvar 150
#define op_list 151
#define op_load 152
#define op_msg 153
#define op_msg2 154
#define op_msgattr 155
#define op_msgvar 156
#define op_msgvarattr 157
#define op_needin 158
#define op_put 159
#define op_quit 160
#define op_save 161
#define op_set 162
#define op_setattr 163
#define op_setcount 164
#define op_setobjname 165
#define op_setroomimage 166
#define op_setroomname 167
#define op_setroomoverlayimage 168
#define op_setvar 169
#define op_showobj 170
#define op_start 171
#define op_unset 172
#define op_unsetattr 173
#define op_waitkey 174
#define op_withobj 175
#define op_ifstart 141
#define op_ifend 150

#define meta_any 243
#define meta_available 244
#define meta_every 245
#define meta_everywhere 246
#define meta_here 247
#define meta_inventory 248
#define meta_none 249
#define meta_nowhere 250
#define meta_oneofobj 251
#define meta_oneofroom 252
#define meta_that 253
#define meta_this 254
#define meta_unknown 255
#define metaattr_name 0
#define metaattr_desc 1
#define metaattr_obj  64

u8 opcode_vrbidx_count;
u8 obj_count;
u8 room_count;
u8 var_count;

#define advcartridgeondisk

u16 origram_len;
u8*advcartridge;
u8*shortdict;
u8*advnames;
u8*advdesc;
u8*msgs;
u8*msgs2;
u8*verbs;
u8*objs;
u16*objs_dir;
u8*rooms;
u8*packdata;
u16*opcode_vrbidx_dir;
u8*opcode_vrbidx_data;
u16*opcode_pos;
u8*opcode_len;
u8*opcode_data;
u8*roomnameid;
u8*roomdescid;
u8*roomimg;
u8*roomovrimg;
u8*objnameid;
u8*objdescid;
u8*objimg;
u8*objattr;
u8*objloc;
u8*objattrex;
u8*roomstart;
u8*roomattr;
u8*roomattrex;
u8*bitvars;
u8*vars;
#define advcartridge_dirsize 72

#define vrb_onfirst 0
#define vrb_onenter 1
#define vrb_onleave 2
#define vrb_onturn 3
#define vrb_ondesc 4

#define attr_visible 1

#define skip_objimg     1
#define skip_roomovrimg 2

