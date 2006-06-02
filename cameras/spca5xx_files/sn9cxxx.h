#ifndef SONIXJPGUSB_H
#define SONIXJPGUSB_H
/****************************************************************************
#	 	Sonix sn9c102p sn9c105 sn9c120 library                      #
# 		Copyright (C) 2005 Michel Xhaard   mxhaard@magic.fr         #
#                                                                           #
# This program is free software; you can redistribute it and/or modify      #
# it under the terms of the GNU General Public License as published by      #
# the Free Software Foundation; either version 2 of the License, or         #
# (at your option) any later version.                                       #
#                                                                           #
# This program is distributed in the hope that it will be useful,           #
# but WITHOUT ANY WARRANTY; without even the implied warranty of            #
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             #
# GNU General Public License for more details.                              #
#                                                                           #
# You should have received a copy of the GNU General Public License         #
# along with this program; if not, write to the Free Software               #
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA #
#                                                                           #
****************************************************************************/
static int sn9cxxx_init(struct usb_spca50x *spca50x);
static void sn9cxxx_start(struct usb_spca50x *spca50x);
static void sn9cxxx_stopN(struct usb_spca50x *spca50x);
static void sn9cxxx_stop0(struct usb_spca50x *spca50x);
static void sn9cxxx_setbrightness(struct usb_spca50x *spca50x);
static __u16 sn9cxxx_getbrightness(struct usb_spca50x *spca50x);
static void sn9cxxx_setcontrast(struct usb_spca50x *spca50x);
static __u16 sn9cxxx_getcontrast(struct usb_spca50x *spca50x);
static void sn9cxxx_setcolors(struct usb_spca50x *spca50x);
static __u16 sn9cxxx_getcolors(struct usb_spca50x *spca50x);
static void sn9cxxx_setAutobright (struct usb_spca50x *spca50x);
static void sn9cxxx_shutdown(struct usb_spca50x *spca50x);
static void sn9cxxx_setquality(struct usb_spca50x *spca50x);
static int sn9cxxx_sofdetect(struct usb_spca50x *spca50x,struct spca50x_frame *frame, unsigned char *cdata,int *iPix, int seqnum,int *datalength);
/****************************************************************************/
static void sn9cxxx_setcolors(struct usb_spca50x *spca50x){}
static __u16 sn9cxxx_getcolors(struct usb_spca50x *spca50x){return 0;}
static void sn9cxxx_setAutobright (struct usb_spca50x *spca50x){}
static void sn9cxxx_shutdown(struct usb_spca50x *spca50x){}
static void sn9cxxx_stop0(struct usb_spca50x *spca50x){}
static void sn9cxxx_setquality(struct usb_spca50x *spca50x){}
/****************************************************************************/
static int sn9cxxx_probesensor(struct usb_spca50x *spca50x);
static unsigned int sn9cxxx_getexposure(struct usb_spca50x *spca50x);
static unsigned int sn9cxxx_getexposure(struct usb_spca50x *spca50x);
static struct cam_operation fsn9cxx = {
 	.initialize = sn9cxxx_init,
	.configure = sonix_config,
	.start = sn9cxxx_start,
	.stopN = sn9cxxx_stopN,
	.stop0 = sn9cxxx_stop0,
	.get_bright = sn9cxxx_getbrightness,
	.set_bright = sn9cxxx_setbrightness,
	.get_contrast = sn9cxxx_getcontrast,
	.set_contrast = sn9cxxx_setcontrast,
	.get_colors = sn9cxxx_getcolors,
	.set_colors = sn9cxxx_setcolors,
	.set_autobright = sn9cxxx_setAutobright,
	.set_quality = sn9cxxx_setquality,
	.cam_shutdown = sn9cxxx_shutdown,
	.sof_detect = sn9cxxx_sofdetect,
 };
enum {
    SN9C101 = 0,
    SN9C102,
    SN9C102P,
    SN9C103,
    SN9C105,
    SN9C120,
};


static __u8 sn_mi0360[] = {
    0x00, 0x61, 0x44, 0x00, 0x1A, 0x20, 0x20, 0x20, 0xB1, 0x5D, 0x07, 0x00,
	0x00, 0x00, 0x00, 0x10, 0x03, 0x00,
//reg0  reg1  reg2  reg3  reg4  reg5  reg6  reg7  reg8  reg9  rega  regb  regc  regd  rege  regf  reg10 reg11
    0x00, 0x02, 0x0a, 0x28, 0x1e, 0x61, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00
//reg12 reg13 reg14 reg15 reg16 reg17 reg18 reg19 reg1a reg1b reg1c reg1d reg1e reg1f reg20 reg21 reg22 reg23
};

/*Data from sn9c102p+hv71331r */
static __u8 sn_hv7131[] = {
    0x00, 0x03, 0x64, 0x00, 0x1A, 0x20, 0x20, 0x20, 0xA1, 0x11, 0x02, 0x09, 0x00, 0x00, 0x00, 0x10, 0x03, 0x00,	//00
//reg0  reg1  reg2  reg3  reg4  reg5  reg6  reg7  reg8  reg9  rega  regb  regc  regd  rege  regf  reg10 reg11
    0x00, 0x01, 0x03, 0x28, 0x1e, 0x41, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00
//reg12 reg13 reg14 reg15 reg16 reg17 reg18 reg19 reg1a reg1b reg1c reg1d reg1e reg1f reg20 reg21 reg22 reg23
};
static __u8 reg9a[] = {
    0x08, 0x40, 0x20, 0x10, 0x00, 0x04
};

static __u8 regsn20[] = {
    0x00, 0x2D, 0x46, 0x5A, 0x6C, 0x7C, 0x8B, 0x99, 0xA6, 0xB2, 0xBF, 0xCA,
	0xD5, 0xE0, 0xEB, 0xF5, 0xFF
};
static __u8 reg84[] = {
    0x14, 0x00, 0x27, 0x00, 0x07, 0x00, 0xE5, 0x0F, 0xE4, 0x0F, 0x38, 0x00,
	0x3E, 0x00, 0xC3, 0x0F,
    0x00, 0x00, 0x00, 0x00, 0x00
};
static __u8 hv7131r_sensor_init[][8] = {
    {0xC1, 0x11, 0x01, 0x08, 0x01, 0x00, 0x00, 0x10},
    {0xB1, 0x11, 0x34, 0x17, 0x7F, 0x00, 0x00, 0x10},
    {0xD1, 0x11, 0x40, 0xFF, 0x7F, 0x7F, 0x7F, 0x10},
    {0x91, 0x11, 0x44, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xD1, 0x11, 0x10, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xD1, 0x11, 0x14, 0x01, 0xE2, 0x02, 0x82, 0x10},
    {0x91, 0x11, 0x18, 0x00, 0x00, 0x00, 0x00, 0x10},
//      
    {0xA1, 0x11, 0x01, 0x08, 0x00, 0x00, 0x00, 0x10},
    {0xA1, 0x11, 0x01, 0x08, 0x00, 0x00, 0x00, 0x10},
    {0xC1, 0x11, 0x25, 0x00, 0x61, 0xA8, 0x00, 0x10},
    {0xA1, 0x11, 0x30, 0x22, 0x00, 0x00, 0x00, 0x10},
    {0xC1, 0x11, 0x31, 0x20, 0x2E, 0x20, 0x00, 0x10},
    {0xC1, 0x11, 0x25, 0x00, 0xC3, 0x50, 0x00, 0x10},
    {0xA1, 0x11, 0x30, 0x07, 0x00, 0x00, 0x00, 0x10},	//gain14
    {0xC1, 0x11, 0x31, 0x10, 0x10, 0x10, 0x00, 0x10},	//r g b 101a10       
//
    {0xA1, 0x11, 0x01, 0x08, 0x00, 0x00, 0x00, 0x10},
    {0xA1, 0x11, 0x20, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xA1, 0x11, 0x21, 0xD0, 0x00, 0x00, 0x00, 0x10},
    {0xA1, 0x11, 0x22, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xA1, 0x11, 0x23, 0x09, 0x00, 0x00, 0x00, 0x10},
//
    {0xA1, 0x11, 0x01, 0x08, 0x00, 0x00, 0x00, 0x10},
    {0xA1, 0x11, 0x20, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xA1, 0x11, 0x21, 0xD0, 0x00, 0x00, 0x00, 0x10},
    {0xA1, 0x11, 0x22, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xA1, 0x11, 0x23, 0x10, 0x00, 0x00, 0x00, 0x10},
    {0, 0, 0, 0, 0, 0, 0, 0}
};
static __u8 mi0360_sensor_init[][8] = {
    {0xB1, 0x5D, 0x07, 0x00, 0x02, 0x00, 0x00, 0x10},
    {0xB1, 0x5D, 0x0D, 0x00, 0x01, 0x00, 0x00, 0x10},
    {0xB1, 0x5D, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x01, 0x00, 0x08, 0x00, 0x16, 0x10},
    {0xD1, 0x5D, 0x03, 0x01, 0xE2, 0x02, 0x82, 0x10},
    {0xD1, 0x5D, 0x05, 0x00, 0x09, 0x00, 0x53, 0x10},
    {0xB1, 0x5D, 0x0D, 0x00, 0x02, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x10, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x12, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x14, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x16, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x18, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x1A, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xB1, 0x5D, 0x32, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x20, 0x91, 0x01, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x22, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x24, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x26, 0x00, 0x00, 0x00, 0x24, 0x10},
    {0xD1, 0x5D, 0x2F, 0xF7, 0xB0, 0x00, 0x04, 0x10},
    {0xD1, 0x5D, 0x31, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x33, 0x00, 0x00, 0x01, 0x00, 0x10},
    {0xB1, 0x5D, 0x3D, 0x06, 0x8F, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x40, 0x01, 0xE0, 0x00, 0xD1, 0x10},
    {0xB1, 0x5D, 0x44, 0x00, 0x82, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x58, 0x00, 0x78, 0x00, 0x43, 0x10},
    {0xD1, 0x5D, 0x5A, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x5C, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x5E, 0x00, 0x00, 0xA3, 0x1D, 0x10},
    {0xB1, 0x5D, 0x62, 0x04, 0x11, 0x00, 0x00, 0x10},
    
    // {0xB1, 0x5D, 0x64, 0x00, 0x3F, 0x00, 0x00, 0x10}, //blue offset ???

    {0xB1, 0x5D, 0x20, 0x91, 0x01, 0x00, 0x00, 0x10},
    {0xB1, 0x5D, 0x20, 0x11, 0x01, 0x00, 0x00, 0x10},
    {0xB1, 0x5D, 0x09, 0x00, 0x64, 0x00, 0x00, 0x10},
    {0xD1, 0x5D, 0x2B, 0x00, 0xA0, 0x00, 0xB0, 0x10},
    {0xD1, 0x5D, 0x2D, 0x00, 0xA0, 0x00, 0xA0, 0x10},



    {0xB1, 0x5D, 0x0A, 0x00, 0x02, 0x00, 0x00, 0x10},	//sensor clck ?2
    {0xB1, 0x5D, 0x06, 0x00, 0x30, 0x00, 0x00, 0x10},
    {0xB1, 0x5D, 0x05, 0x00, 0x0A, 0x00, 0x00, 0x10},
    {0xB1, 0x5D, 0x09, 0x02, 0x35, 0x00, 0x00, 0x10},	// exposure 2
    //{ 0xD1,0x5D,0x2B,0x00,0xB9,0x00,0xE3,0x10 },
    //{ 0xD1,0x5D,0x2D,0x00,0xC5,0x00,0xB9,0x10 },

    {0xB1, 0x5D, 0x35, 0x00, 0x20, 0x00, 0x00, 0x10},	//gain 
    {0xB1, 0x5D, 0x07, 0x00, 0x03, 0x00, 0x00, 0x10},	//update
    {0xB1, 0x5D, 0x07, 0x00, 0x02, 0x00, 0x00, 0x10},	//sensor on
    {0, 0, 0, 0, 0, 0, 0, 0}
};

#if 0
/* Data from sn9c120+hv7131r */
static __u8 hv7131r_sensor_init[][8] = {
    {0xc1, 0x11, 0x01, 0x08, 0x01, 0x00, 0x00, 0x10},
    {0xd1, 0x11, 0x10, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xd1, 0x11, 0x14, 0x01, 0xe2, 0x02, 0x82, 0x10},
    {0xb1, 0x11, 0x34, 0x17, 0x7f, 0x00, 0x00, 0x10},
    {0xd1, 0x11, 0x40, 0xff, 0x7f, 0x7f, 0x7f, 0x10},

    {0xa1, 0x11, 0x01, 0x08, 0x00, 0x00, 0x00, 0x10},
    {0xa1, 0x11, 0x01, 0x08, 0x00, 0x00, 0x00, 0x10},
    {0xc1, 0x11, 0x25, 0x00, 0xc3, 0x50, 0x00, 0x10},
    {0xa1, 0x11, 0x30, 0x20, 0x00, 0x00, 0x00, 0x10},
    {0xc1, 0x11, 0x31, 0x13, 0x06, 0x12, 0x00, 0x10},

    {0xa1, 0x11, 0x01, 0x08, 0x00, 0x00, 0x00, 0x10},
    {0xa1, 0x11, 0x20, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xa1, 0x11, 0x21, 0xd0, 0x00, 0x00, 0x00, 0x10},
    {0xa1, 0x11, 0x22, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xa1, 0x11, 0x23, 0x08, 0x00, 0x00, 0x00, 0x10},
    {0xc1, 0x11, 0x31, 0x17, 0x06, 0x10, 0x00, 0x10},

    {0xa1, 0x11, 0x01, 0x08, 0x00, 0x00, 0x00, 0x10},
    {0xa1, 0x11, 0x20, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xa1, 0x11, 0x21, 0xd1, 0x00, 0x00, 0x00, 0x10},
    {0xa1, 0x11, 0x22, 0x00, 0x00, 0x00, 0x00, 0x10},
    {0xa1, 0x11, 0x23, 0x10, 0x00, 0x00, 0x00, 0x10},
    {0, 0, 0, 0, 0, 0, 0, 0}
};
static __u8 sn_hv7131[] = {
    0x00, 0x23, 0x60, 0x00, 0x1A, 0x1f, 0x21, 0x1f, 0xA1, 0x11, 0x02, 0x09,
	0x00, 0x00, 0x00, 0x10, 0x03, 0x00,
//reg0  reg1  reg2  reg3  reg4  reg5  reg6  reg7  reg8  reg9  rega  regb  regc  regd  rege  regf  reg10 reg11
    0x00, 0x01, 0x0c, 0x28, 0x1e, 0x60, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00
//reg12 reg13 reg14 reg15 reg16 reg17 reg18 reg19 reg1a reg1b reg1c reg1d reg1e reg1f reg20 reg21 reg22 reg23
};
static __u8 reg9a[] = {
//HV7131//0x08, 0x40, 0x20, 0x10, 0x00, 0x04
    //0x00, 0x40, 0x20, 0x00, 0x00, 0x00 
    0x07, 0x40, 0x20, 0x00, 0x00, 0x00	//MI0360
};

static __u8 regsn20[] = {
//HV7131//0x00, 0x2D, 0x46, 0x5A, 0x6C, 0x7C, 0x8B, 0x99, 0xA6, 0xB2, 0xBF, 0xCA, 0xD5, 0xE0, 0xEB, 0xF5, 0xFF
    //0x08, 0x3a, 0x52, 0x65, 0x75, 0x83, 0x91, 0x9d, 0xa9, 0xb4, 0xbe, 0xc8, 0xd2, 0xdb, 0xe4, 0xed, 0xf5 //hv7131R
    0x08, 0x39, 0x51, 0x63, 0x73, 0x82, 0x8f, 0x9b, 0xa7, 0xb1, 0xbc, 0xc6, 0xcf, 0xd8, 0xe1, 0xea, 0xf2	//mi0360
};
static __u8 reg84[] = {
//HV7131//0x14, 0x00, 0x27, 0x00, 0x07, 0x00, 0xE5, 0x0F, 0xE4, 0x0F, 0x38, 0x00, 0x3E, 0x00, 0xC3, 0x0F,
    //0x00, 0x00, 0x00, 0x00, 0x00
//HV7131//0x13, 0x00, 0x25, 0x00, 0x07, 0x00, 0xef, 0x0f, 0xdf, 0x0f, 0x33, 0x00, 0x38, 0x00, 0xd1, 0x0f,
    //0xf7, 0x0f, 0x0f, 0x00, 0x00
    //MI0360
    0x13, 0x00, 0x25, 0x00, 0x07, 0x00, 0xee, 0x0f, 0xe5, 0x0f, 0x2e, 0x00,
	0x30, 0x00, 0xd4, 0x0f,
    0xfc, 0x0f, 0x14, 0x00, 0x00
};
#endif
#if 0
static __u8 qtable1[] = {
    0x0B, 0x07, 0x07, 0x0B, 0x07, 0x07, 0x0B, 0x0B, 0x0B, 0x0B, 0x0E, 0x0B,
	0x0B, 0x0E, 0x12, 0x1D,
    0x12, 0x12, 0x0E, 0x0E, 0x12, 0x24, 0x19, 0x19, 0x15, 0x1D, 0x2B, 0x24,
	0x2B, 0x2B, 0x27, 0x24,
    0x27, 0x27, 0x2F, 0x32, 0x40, 0x39, 0x2F, 0x32, 0x3D, 0x32, 0x27, 0x27,
	0x39, 0x4F, 0x39, 0x3D,
    0x44, 0x48, 0x4B, 0x4B, 0x4B, 0x2B, 0x36, 0x52, 0x56, 0x4F, 0x48, 0x56,
	0x40, 0x48, 0x4B, 0x48,
    0x0B, 0x0E, 0x0E, 0x12, 0x0E, 0x12, 0x20, 0x12, 0x12, 0x20, 0x48, 0x2F,
	0x27, 0x2F, 0x48, 0x48,
    0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48,
	0x48, 0x48, 0x48, 0x48,
    0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48,
	0x48, 0x48, 0x48, 0x48,
    0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x48,
	0x48, 0x48, 0x48, 0x48
};
static __u8 qtable2[] = {
    0x09, 0x06, 0x06, 0x09, 0x06, 0x06, 0x09, 0x09, 0x09, 0x09, 0x0C, 0x09,
	0x09, 0x0C, 0x0F, 0x18,
    0x0F, 0x0F, 0x0C, 0x0C, 0x0F, 0x1E, 0x15, 0x15, 0x12, 0x18, 0x24, 0x1E,
	0x24, 0x24, 0x21, 0x1E,
    0x21, 0x21, 0x27, 0x2A, 0x36, 0x30, 0x27, 0x2A, 0x33, 0x2A, 0x21, 0x21,
	0x30, 0x42, 0x30, 0x33,
    0x39, 0x3C, 0x3F, 0x3F, 0x3F, 0x24, 0x2D, 0x45, 0x48, 0x42, 0x3C, 0x48,
	0x36, 0x3C, 0x3F, 0x3C,
    0x09, 0x0C, 0x0C, 0x0F, 0x0C, 0x0F, 0x1B, 0x0F, 0x0F, 0x1B, 0x3C, 0x27,
	0x21, 0x27, 0x3C, 0x3C,
    0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C,
	0x3C, 0x3C, 0x3C, 0x3C,
    0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C,
	0x3C, 0x3C, 0x3C, 0x3C,
    0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C,
	0x3C, 0x3C, 0x3C, 0x3C
};
#endif
static __u8 qtable3[] = {
    0x07, 0x05, 0x05, 0x07, 0x05, 0x05, 0x07, 0x07, 0x07, 0x07, 0x0A, 0x07,
	0x07, 0x0A, 0x0C, 0x14,
    0x0C, 0x0C, 0x0A, 0x0A, 0x0C, 0x19, 0x11, 0x11, 0x0F, 0x14, 0x1E, 0x19,
	0x1E, 0x1E, 0x1B, 0x19,
    0x1B, 0x1B, 0x20, 0x23, 0x2D, 0x28, 0x20, 0x23, 0x2A, 0x23, 0x1B, 0x1B,
	0x28, 0x37, 0x28, 0x2A,
    0x2F, 0x32, 0x34, 0x34, 0x34, 0x1E, 0x25, 0x39, 0x3C, 0x37, 0x32, 0x3C,
	0x2D, 0x32, 0x34, 0x32,
    0x07, 0x0A, 0x0A, 0x0C, 0x0A, 0x0C, 0x16, 0x0C, 0x0C, 0x16, 0x32, 0x20,
	0x1B, 0x20, 0x32, 0x32,
    0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32,
	0x32, 0x32, 0x32, 0x32,
    0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32,
	0x32, 0x32, 0x32, 0x32,
    0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32,
	0x32, 0x32, 0x32, 0x32
};

#if 0
static __u8 qtable4[] = {
    0x06, 0x04, 0x04, 0x06, 0x04, 0x04, 0x06, 0x06, 0x06, 0x06, 0x08, 0x06,
	0x06, 0x08, 0x0A, 0x11,
    0x0A, 0x0A, 0x08, 0x08, 0x0A, 0x15, 0x0F, 0x0F, 0x0C, 0x11, 0x19, 0x15,
	0x19, 0x19, 0x17, 0x15,
    0x17, 0x17, 0x1B, 0x1D, 0x25, 0x21, 0x1B, 0x1D, 0x23, 0x1D, 0x17, 0x17,
	0x21, 0x2E, 0x21, 0x23,
    0x27, 0x29, 0x2C, 0x2C, 0x2C, 0x19, 0x1F, 0x30, 0x32, 0x2E, 0x29, 0x32,
	0x25, 0x29, 0x2C, 0x29,
    0x06, 0x08, 0x08, 0x0A, 0x08, 0x0A, 0x13, 0x0A, 0x0A, 0x13, 0x29, 0x1B,
	0x17, 0x1B, 0x29, 0x29,
    0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29,
	0x29, 0x29, 0x29, 0x29,
    0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29,
	0x29, 0x29, 0x29, 0x29,
    0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29,
	0x29, 0x29, 0x29, 0x29
};
static __u8 qtable5[] = {
    0x05, 0x03, 0x03, 0x05, 0x03, 0x03, 0x05, 0x05, 0x05, 0x05, 0x07, 0x05,
	0x05, 0x07, 0x09, 0x0E,
    0x09, 0x09, 0x07, 0x07, 0x09, 0x11, 0x0C, 0x0C, 0x0A, 0x0E, 0x15, 0x11,
	0x15, 0x15, 0x13, 0x11,
    0x13, 0x13, 0x16, 0x18, 0x1F, 0x1C, 0x16, 0x18, 0x1D, 0x18, 0x13, 0x13,
	0x1C, 0x26, 0x1C, 0x1D,
    0x21, 0x23, 0x24, 0x24, 0x24, 0x15, 0x1A, 0x28, 0x29, 0x26, 0x23, 0x29,
	0x1F, 0x23, 0x24, 0x23,
    0x05, 0x07, 0x07, 0x09, 0x07, 0x09, 0x10, 0x09, 0x09, 0x10, 0x23, 0x16,
	0x13, 0x16, 0x23, 0x23,
    0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
	0x23, 0x23, 0x23, 0x23,
    0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
	0x23, 0x23, 0x23, 0x23,
    0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
	0x23, 0x23, 0x23, 0x23
};
static __u8 qtable6[] = {
    0x04, 0x03, 0x03, 0x04, 0x03, 0x03, 0x04, 0x04, 0x04, 0x04, 0x06, 0x04,
	0x04, 0x06, 0x07, 0x0C,
    0x07, 0x07, 0x06, 0x06, 0x07, 0x0E, 0x0A, 0x0A, 0x09, 0x0C, 0x11, 0x0E,
	0x11, 0x11, 0x10, 0x0E,
    0x10, 0x10, 0x13, 0x14, 0x1A, 0x17, 0x13, 0x14, 0x18, 0x14, 0x10, 0x10,
	0x17, 0x20, 0x17, 0x18,
    0x1B, 0x1D, 0x1E, 0x1E, 0x1E, 0x11, 0x16, 0x21, 0x23, 0x20, 0x1D, 0x23,
	0x1A, 0x1D, 0x1E, 0x1D,
    0x04, 0x06, 0x06, 0x07, 0x06, 0x07, 0x0D, 0x07, 0x07, 0x0D, 0x1D, 0x13,
	0x10, 0x13, 0x1D, 0x1D,
    0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D,
	0x1D, 0x1D, 0x1D, 0x1D,
    0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D,
	0x1D, 0x1D, 0x1D, 0x1D,
    0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D,
	0x1D, 0x1D, 0x1D, 0x1D
};
static __u8 qtable7[] = {
    0x04, 0x02, 0x02, 0x04, 0x02, 0x02, 0x04, 0x04, 0x04, 0x04, 0x05, 0x04,
	0x04, 0x05, 0x06, 0x0A,
    0x06, 0x06, 0x05, 0x05, 0x06, 0x0C, 0x08, 0x08, 0x07, 0x0A, 0x0E, 0x0C,
	0x0E, 0x0E, 0x0D, 0x0C,
    0x0D, 0x0D, 0x10, 0x11, 0x16, 0x13, 0x10, 0x11, 0x14, 0x11, 0x0D, 0x0D,
	0x13, 0x1A, 0x13, 0x14,
    0x17, 0x18, 0x19, 0x19, 0x19, 0x0E, 0x12, 0x1C, 0x1D, 0x1A, 0x18, 0x1D,
	0x16, 0x18, 0x19, 0x18,
    0x04, 0x05, 0x05, 0x06, 0x05, 0x06, 0x0B, 0x06, 0x06, 0x0B, 0x18, 0x10,
	0x0D, 0x10, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18
};
static __u8 qtable8[] = {
    0x03, 0x02, 0x02, 0x03, 0x02, 0x02, 0x03, 0x03, 0x03, 0x03, 0x04, 0x03,
	0x03, 0x04, 0x05, 0x08,
    0x05, 0x05, 0x04, 0x04, 0x05, 0x0A, 0x07, 0x07, 0x06, 0x08, 0x0C, 0x0A,
	0x0C, 0x0C, 0x0B, 0x0A,
    0x0B, 0x0B, 0x0D, 0x0E, 0x12, 0x10, 0x0D, 0x0E, 0x11, 0x0E, 0x0B, 0x0B,
	0x10, 0x16, 0x10, 0x11,
    0x13, 0x14, 0x15, 0x15, 0x15, 0x0C, 0x0F, 0x17, 0x18, 0x16, 0x14, 0x18,
	0x12, 0x14, 0x15, 0x14,
    0x03, 0x04, 0x04, 0x05, 0x04, 0x05, 0x09, 0x05, 0x05, 0x09, 0x14, 0x0D,
	0x0B, 0x0D, 0x14, 0x14,
    0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14,
	0x14, 0x14, 0x14, 0x14,
    0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14,
	0x14, 0x14, 0x14, 0x14,
    0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14,
	0x14, 0x14, 0x14, 0x14
};
#endif

static int sn9c102p_i2cwrite(struct usb_spca50x *spca50x, __u8 * buffer,
			     __u16 length)
{
    struct usb_device *dev = spca50x->dev;
    __u8 mode[] = { 0x81, 0x11, 0, 0, 0, 0, 0, 0x10 };
    /* is i2c ready */
    __u8 i2cbase = spca50x->i2c_base;
    __u8 i2cCtrl = spca50x->i2c_ctrl_reg;
    mode[0] = i2cCtrl;
    mode[1] = i2cbase;
    if (length > 5 || !buffer)
	return -1;
    mode[0] = mode[0] | length << 4;
    memcpy(&mode[2], buffer, length);
    sonixRegWrite(dev, 0x08, 0x08, 0x0000, mode, 8);
    return 0;
}
static void sn9c102p_i2cwritebuf(struct usb_device *dev, __u8 * buffer)
{
    sonixRegWrite(dev, 0x08, 0x08, 0x0000, buffer, 8);
}
static int sn9c102p_i2cread(struct usb_spca50x *spca50x, __u8 reg,
			    __u8 * buffer, __u16 length)
{
    struct usb_device *dev = spca50x->dev;
    __u8 i2cbase = spca50x->i2c_base;
    __u8 i2cCtrl = spca50x->i2c_ctrl_reg;
    __u8 mode[] = { 0x91, 0x11, 0, 0, 0, 0, 0, 0x10 };
    __u8 result[] = { 0, 0, 0, 0, 0 };
    mode[0] = i2cCtrl | 0x10;
    mode[1] = i2cbase;
    if (length > 5 || !buffer)
	return -1;
    mode[2] = reg;
    sonixRegWrite(dev, 0x08, 0x08, 0x0000, mode, 8);
    wait_ms(1);
    mode[2] = 0;
    mode[0] = i2cCtrl | length << 4 | 0x02;
    sonixRegWrite(dev, 0x08, 0x08, 0x0000, mode, 8);
    wait_ms(1);
    sonixRegRead(dev, 0x00, 0x0a, 0x0000, result, 5);
    memcpy(buffer, result, length);
    return 0;
}


static int sn9cxxx_probesensor(struct usb_spca50x *spca50x)
{
    struct usb_device *dev = spca50x->dev;
    int err = 0;
    __u8 reg02 = 0x66;
    /* reg val1 val2 val3 val4 */
    __u8 datasend[] = { 0, 0, 0, 0, 0 };
    __u8 datarecd[] = { 0, 0, 0, 0, 0 };
    datasend[0] = 2;		//sensor wakeup
    err = sn9c102p_i2cwrite(spca50x, datasend, 2);
    //should write 0xa1 0x11 0x02 0x00 0x00 0x00 0x00 the 0x10 is add by i2cw
    wait_ms(10);
    sonixRegWrite(dev, 0x08, 0x02, 0x0000, &reg02, 1);	//Gpio on
    wait_ms(10);
    err += sn9c102p_i2cread(spca50x, 0, datarecd, 5);	//read sensor id
    if (err)
	goto errors;
    if (datarecd[0] == 0x02 && datarecd[1] == 0x09 && datarecd[2] == 0x01
	&& datarecd[3] == 0x00 && datarecd[4] == 0x00) {
	PDEBUG(1, "Find Sensor sn9c102P HV7131R");
	spca50x->sensor = SENSOR_HV7131R;
	return SENSOR_HV7131R;
    }
    PDEBUG(0, "Find Sensor %d %d %d", datarecd[0], datarecd[1],
	   datarecd[2]);
    PDEBUG(0, "Sensor sn9c102P Not found Contact mxhaard@free.fr ");
    return -ENODEV;
  errors:PDEBUG(0,
	   "Sensor sn9c102P too many errors Contact mxhaard@free.fr ");
    return -ENODEV;
}

static void hv7131R_InitSensor(struct usb_spca50x *spca50x)
{
    int i = 0;
    struct usb_device *dev = spca50x->dev;
    __u8 CtrlA320[] = { 0xA1, 0x11, 0x01, 0x08, 0x00, 0x00, 0x00, 0x10 };	//Mclk
    //__u8 CtrlA640[] = { 0xA1, 0x11, 0x01, 0x18, 0x00, 0x00, 0x00, 0x10 };//Mclk/2 BOUMM 
    __u8 CtrlA640[] = { 0xA1, 0x11, 0x01, 0x28, 0x00, 0x00, 0x00, 0x10 };	//Mckl/4
    while (hv7131r_sensor_init[i][0]) {
	sn9c102p_i2cwritebuf(dev, hv7131r_sensor_init[i]);
	i++;
    }
    if (spca50x->mode)
	sn9c102p_i2cwritebuf(dev, CtrlA320);
    else
	sn9c102p_i2cwritebuf(dev, CtrlA640);
}
static void mi0360_InitSensor(struct usb_spca50x *spca50x)
{
    int i = 0;
    struct usb_device *dev = spca50x->dev;

    while (mi0360_sensor_init[i][0]) {
	sn9c102p_i2cwritebuf(dev, mi0360_sensor_init[i]);
	i++;
    }
}


static int sn9cxxx_init(struct usb_spca50x *spca50x)
{
    struct usb_device *dev = spca50x->dev;
    int err = 0;
    __u8 *sn9c1xx = NULL;
    __u8 regF1 = 0x01;
    __u8 regGpio[] = { 0x29, 0x74 };
    __u8 data = 0x00;
    /* setup a selector by customid */
    switch (spca50x->sensor) {
    case SENSOR_HV7131R:
	sn9c1xx = sn_hv7131;
	break;
    case SENSOR_MI0360:
	sn9c1xx = sn_mi0360;
	break;
    }
    if (sn9c1xx == NULL)
	return -ENODEV;
    sonixRegWrite(dev, 0x08, 0xf1, 0x0000, &regF1, 1);
    sonixRegRead(dev, 0x00, 0x00, 0x0000, &regF1, 1);
    sonixRegWrite(dev, 0x08, 0xf1, 0x0000, &regF1, 1);
    sonixRegRead(dev, 0x00, 0x00, 0x0000, &regF1, 1);
    switch (spca50x->customid) {
    case SN9C102P:
	if (regF1 != 0x11)
	    return -ENODEV;
	sonixRegWrite(dev, 0x08, 0x02, 0x0000, &regGpio[1], 1);
    case SN9C105:
	if (regF1 != 0x11)
	    return -ENODEV;
	sonixRegWrite(dev, 0x08, 0x02, 0x0000, regGpio, 2);
	break;
    case SN9C120:
	if (regF1 != 0x12)
	    return -ENODEV;
	regGpio[1] = 0x70;
	sonixRegWrite(dev, 0x08, 0x02, 0x0000, regGpio, 2);
	break;
    }



    regF1 = 0x01;
    sonixRegWrite(dev, 0x08, 0xf1, 0x0000, &regF1, 1);

    regF1 = 0x00;
    sonixRegWrite(dev, 0x08, 0xf1, 0x0000, &regF1, 1);

    sonixRegWrite(dev, 0x08, 0x01, 0x0000, &sn9c1xx[1], 1);

    // configure gpio 
    sonixRegWrite(dev, 0x08, 0x01, 0x0000, &sn9c1xx[1], 2);

    sonixRegWrite(dev, 0x08, 0x08, 0x0000, &sn9c1xx[8], 2);

    sonixRegWrite(dev, 0x08, 0x017, 0x0000, &sn9c1xx[0x17], 3);

    sonixRegWrite(dev, 0x08, 0x9a, 0x0000, reg9a, 6);

    data = 0x60;
    sonixRegWrite(dev, 0x08, 0xD4, 0x0000, &data, 1);

    sonixRegWrite(dev, 0x08, 0x03, 0x0000, &sn9c1xx[3], 0x0f);

    data = 0x43;
    sonixRegWrite(dev, 0x08, 0x01, 0x0000, &data, 1);

    data = 0x61;
    sonixRegWrite(dev, 0x08, 0x17, 0x0000, &data, 1);

    data = 0x42;
    sonixRegWrite(dev, 0x08, 0x01, 0x0000, &data, 1);
    switch (spca50x->sensor) {
    case SENSOR_HV7131R:
	// probe sensor
	if ((err = sn9cxxx_probesensor(spca50x)) < 0)
	    return -ENODEV;
	break;
    }


    return 0;
}
static void sn9cxxx_stopN(struct usb_spca50x *spca50x)
{
    struct usb_device *dev = spca50x->dev;
    __u8 stophv7131[] = { 0xA1, 0x11, 0x02, 0x09, 0x00, 0x00, 0x00, 0x10 };
    __u8 stopmi0360[] = { 0xB1, 0x5D, 0x07, 0x00, 0x00, 0x00, 0x00, 0x10 };
    __u8 regF1 = 0x01;
    __u8 data = 0x0b;
    __u8 *sn9c1xx = NULL;
    switch (spca50x->sensor) {
    case SENSOR_HV7131R:
	sn9c1xx = sn_hv7131;
	data = 0x2b;
	sn9c102p_i2cwritebuf(dev, stophv7131);
	break;
    case SENSOR_MI0360:
	sn9c1xx = sn_mi0360;
	data = 0x29;
	sn9c102p_i2cwritebuf(dev, stopmi0360);
	break;
    }
    if (sn9c1xx == NULL)
	return;
    sonixRegWrite(dev, 0x08, 0x01, 0x0000, &sn9c1xx[1], 1);
    sonixRegWrite(dev, 0x08, 0x17, 0x0000, &sn9c1xx[0x17], 1);
    sonixRegWrite(dev, 0x08, 0x01, 0x0000, &sn9c1xx[1], 1);
    sonixRegWrite(dev, 0x08, 0x01, 0x0000, &data, 1);
    sonixRegWrite(dev, 0x08, 0xf1, 0x0000, &regF1, 1);
}
static void sn9cxxx_start(struct usb_spca50x *spca50x)
{
    struct usb_device *dev = spca50x->dev;
    int i;
    __u8 DC29[] = { 0x6a, 0x50, 0x00, 0x00, 0x50, 0x3c };
    __u8 C0[] = { 0x2d, 0x2d, 0x3a, 0x05, 0x04, 0x3f };
    __u8 CA[] = { 0x28, 0xd8, 0x14, 0xec };
    //HV7131 __u8 CE[]={0x28, 0xec, 0x1e, 0xec };
    __u8 CE[] = { 0x32, 0xdd, 0x2d, 0xdd };	//MI0360
    //__u8 gain[] = { 0xB1, 0x5D, 0x35, 0x00, 0x67, 0x00, 0x00, 0x10 };	//gain 
    //__u8 doit[] = { 0xB1, 0x5D, 0x07, 0x00, 0x03, 0x00, 0x00, 0x10 };	//update sensor
    //__u8 sensorgo[] = { 0xB1, 0x5D, 0x07, 0x00, 0x02, 0x00, 0x00, 0x10 };	//sensor on
    //__u8 expo[]={ 0xB1,0x5D,0x09,0x06,0x35,0x00,0x00,0x10 };// exposure 0x0635 -> 4 fp/s
    __u8 data = 0;
    __u8 regF1 = 0x00;
    int err = 0;
    __u8 *sn9c1xx = NULL;
    switch (spca50x->sensor) {
    case SENSOR_HV7131R:
	sn9c1xx = sn_hv7131;
	break;
    case SENSOR_MI0360:
	sn9c1xx = sn_mi0360;
	break;
    }
    if (sn9c1xx == NULL)
	return;
    sonixRegWrite(dev, 0x08, 0xf1, 0x0000, &regF1, 1);
    sonixRegWrite(dev, 0x08, 0x01, 0x0000, &sn9c1xx[1], 1);
    sonixRegWrite(dev, 0x08, 0x01, 0x0000, &sn9c1xx[1], 2);
    sonixRegWrite(dev, 0x08, 0x08, 0x0000, &sn9c1xx[8], 2);
    sonixRegWrite(dev, 0x08, 0x17, 0x0000, &sn9c1xx[0x17], 3);

    sonixRegWrite(dev, 0x08, 0x9a, 0x0000, reg9a, 6);
    data = 0x60;
    sonixRegWrite(dev, 0x08, 0xD4, 0x0000, &data, 1);

    sonixRegWrite(dev, 0x08, 0x03, 0x0000, &sn9c1xx[3], 0x0f);
    data = 0x43;
    sonixRegWrite(dev, 0x08, 0x01, 0x0000, &data, 1);
    data = 0x61;
    sonixRegWrite(dev, 0x08, 0x17, 0x0000, &data, 1);
    data = 0x42;
    sonixRegWrite(dev, 0x08, 0x01, 0x0000, &data, 1);

    switch (spca50x->sensor) {
    case SENSOR_HV7131R:
	if ((err = sn9cxxx_probesensor(spca50x)) < 0)
	    return;
	break;
    }

    sonixRegWrite(dev, 0x08, 0x15, 0x0000, &sn9c1xx[0x15], 1);
    sonixRegWrite(dev, 0x08, 0x16, 0x0000, &sn9c1xx[0x16], 1);
    sonixRegWrite(dev, 0x08, 0x12, 0x0000, &sn9c1xx[0x12], 1);
    sonixRegWrite(dev, 0x08, 0x13, 0x0000, &sn9c1xx[0x13], 1);
    sonixRegWrite(dev, 0x08, 0x18, 0x0000, &sn9c1xx[0x18], 1);
    sonixRegWrite(dev, 0x08, 0xd2, 0x0000, &DC29[0], 1);
    sonixRegWrite(dev, 0x08, 0xd3, 0x0000, &DC29[1], 1);
    sonixRegWrite(dev, 0x08, 0xc6, 0x0000, &DC29[2], 1);
    sonixRegWrite(dev, 0x08, 0xc7, 0x0000, &DC29[3], 1);
    sonixRegWrite(dev, 0x08, 0xc8, 0x0000, &DC29[4], 1);
    sonixRegWrite(dev, 0x08, 0xc9, 0x0000, &DC29[5], 1);
    sonixRegWrite(dev, 0x08, 0x18, 0x0000, &sn9c1xx[0x18], 1);
    data = 0x60;
    sonixRegWrite(dev, 0x08, 0x17, 0x0000, &data, 1);
    sonixRegWrite(dev, 0x08, 0x05, 0x0000, &sn9c1xx[5], 1);
    sonixRegWrite(dev, 0x08, 0x07, 0x0000, &sn9c1xx[7], 1);
    sonixRegWrite(dev, 0x08, 0x06, 0x0000, &sn9c1xx[6], 1);
    sonixRegWrite(dev, 0x08, 0x14, 0x0000, &sn9c1xx[0x14], 1);
    sonixRegWrite(dev, 0x08, 0x20, 0x0000, regsn20, 0x11);
    for (i = 0; i < 8; i++)
	sonixRegWrite(dev, 0x08, 0x84, 0x0000, reg84, 0x15);
    data = 0x08;
    sonixRegWrite(dev, 0x08, 0x9a, 0x0000, &data, 1);
    data = 0x59;
    sonixRegWrite(dev, 0x08, 0x99, 0x0000, &data, 1);

    switch (spca50x->sensor) {
    case SENSOR_HV7131R:
	hv7131R_InitSensor(spca50x);
	break;
    case SENSOR_MI0360:
	mi0360_InitSensor(spca50x);
	break;
    }
    sonixRegWrite(dev, 0x08, 0xc0, 0x0000, C0, 6);
    sonixRegWrite(dev, 0x08, 0xca, 0x0000, CA, 4);
    sonixRegWrite(dev, 0x08, 0xce, 0x0000, CE, 4);	//?? {0x1e,0xdd,0x2d,0xe7}

    // here change size mode 0 -> VGA; 1 -> CIF
    data = 0x40 | sn9c1xx[0x18] | (spca50x->mode << 4);
    sonixRegWrite(dev, 0x08, 0x18, 0x0000, &data, 1);

    sonixRegWrite(dev, 0x08, 0x100, 0x0000, qtable3, 0x40);
    sonixRegWrite(dev, 0x08, 0x140, 0x0000, qtable3 + 0x40, 0x40);

    data = sn9c1xx[0x18] | (spca50x->mode << 4);
    sonixRegWrite(dev, 0x08, 0x18, 0x0000, &data, 1);
    data = 0x02;		//0x42
    sonixRegWrite(dev, 0x08, 0x01, 0x0000, &data, 1);
    data = 0x61;		//0x61
    sonixRegWrite(dev, 0x08, 0x17, 0x0000, &data, 1);
    if (spca50x->mode)
	data = 0x06;		//320 06clk 12Mhz
    else {

	if (spca50x->sensor == SENSOR_MI0360) {
	    data = 0x65;	//0x61
	    sonixRegWrite(dev, 0x08, 0x17, 0x0000, &data, 1);
	}
	data = 0x46;		//640 clk 24Mz 46
    }
    // enable video on
    sonixRegWrite(dev, 0x08, 0x01, 0x0000, &data, 1);

    sn9cxxx_setbrightness(spca50x);
    sn9cxxx_setcontrast(spca50x);
    /*FIXME Need to be in the brightness exposure setting */
    /*
    if (spca50x->sensor == SENSOR_MI0360) {	
	sn9c102p_i2cwritebuf(dev, gain);
	// sn9c102p_i2cwritebuf (dev,expo);
	sn9c102p_i2cwritebuf(dev, doit);
	sn9c102p_i2cwritebuf(dev, sensorgo);
    }
    */
    //sn9c102p_i2cwritebuf (dev,PreAInit);
    //sn9c102p_i2cwritebuf (dev,RInit);
}

static unsigned int sn9cxxx_getexposure(struct usb_spca50x *spca50x)
{
    __u8 expo[] = { 0, 0, 0, 0, 0 };
    int err = 0;
    switch (spca50x->sensor) {
    case SENSOR_HV7131R:
	err += sn9c102p_i2cread(spca50x, 0x25, expo, 5);	//read sensor exposure
	return (unsigned int) (expo[0] << 16 | expo[1] << 8 | expo[2]);
	break;
    case SENSOR_MI0360:
	err += sn9c102p_i2cread(spca50x, 0x09, expo, 5);	//read sensor exposure
	return (unsigned int) (expo[0] << 8 | expo[1]);
	break;
    }
    return 0;
}

static unsigned int sn9cxxx_setexposure(struct usb_spca50x *spca50x,
					unsigned int expo)
{
    __u8 Expodoit[] = { 0xc1, 0x11, 0x25, 0x07, 0x27, 0xc0, 0x00, 0x16 };
    __u8 doit[] = { 0xB1, 0x5D, 0x07, 0x00, 0x03, 0x00, 0x00, 0x10 };	//update sensor
    __u8 sensorgo[] = { 0xB1, 0x5D, 0x07, 0x00, 0x02, 0x00, 0x00, 0x10 };	//sensor on
    __u8 expoMi[] = { 0xB1, 0x5D, 0x09, 0x06, 0x35, 0x00, 0x00, 0x10 };	// exposure 0x0635 -> 4 fp/s
    unsigned int expotimes = expo;
    unsigned int expotimesret = 0;
    switch (spca50x->sensor) {
    case SENSOR_HV7131R:
	Expodoit[3] = (expotimes >> 16) & 0xff;
	Expodoit[4] = (expotimes >> 8) & 0xff;
	Expodoit[5] = (expotimes & 0xff);
	sn9c102p_i2cwritebuf(spca50x->dev, Expodoit);
	wait_ms(10);
	expotimesret = sn9cxxx_getexposure(spca50x);
	PDEBUG(3, "Exposure set %d ret %d ", expotimes, expotimesret);
	return expotimesret;
	break;
    case SENSOR_MI0360:
	if (expo > 0x0635)
	    expo = 0x0635;
	//if (expo < 0x0100)
	//   expo = 0x0100;
	if (expo < 0x003F)
	    expo = 0x003F;
	expoMi[3] = (expo >> 8) & 0xFF;
	expoMi[4] = expo & 0xff;
	sn9c102p_i2cwritebuf(spca50x->dev, expoMi);
	sn9c102p_i2cwritebuf(spca50x->dev, doit);
	sn9c102p_i2cwritebuf(spca50x->dev, sensorgo);
	expotimesret = sn9cxxx_getexposure(spca50x);
	PDEBUG(3, "Exposure set %d ret %d ", expotimes, expotimesret);
	return expotimesret;
	break;
    }
    return 0;
}

static void sn9cxxx_setbrightness(struct usb_spca50x *spca50x)
{
    unsigned int expo, expotimesret;
    __u8 k2;
    switch (spca50x->sensor) {
    case SENSOR_HV7131R:
	expo = spca50x->brightness << 4;
	if (expo > 0x002dc6c0)
	    expo = 0x002dc6c0;
	if (expo < 0x02a0)
	    expo = 0x02a0;
	expotimesret = sn9cxxx_setexposure(spca50x, expo);

	break;
    case SENSOR_MI0360:
	expo = spca50x->brightness >> 4;
	expotimesret = sn9cxxx_setexposure(spca50x, expo);

	break;
    }
    k2 = spca50x->brightness >> 10;
    sonixRegWrite(spca50x->dev, 0x08, 0x96, 0x0000, &k2, 1);
   
}

static __u16 sn9cxxx_getbrightness(struct usb_spca50x *spca50x)
{
    /* hardcoded registers seem not readable */
     switch (spca50x->sensor) {
    case SENSOR_HV7131R:
    spca50x->brightness = 0x7fff;
    	break;
    case SENSOR_MI0360:
    spca50x->brightness = 0x1fff;
    break;
    }
    return spca50x->brightness;
}

static void sn9cxxx_setcontrast(struct usb_spca50x *spca50x)
{
    __u8 k2;
    __u8 contrast[] = { 0x14, 0x00, 0x28, 0x00, 0x07, 0x00 };
    k2 = spca50x->contrast >> 8;
    if (k2 > 0x7f)
	k2 = 0x7f;
    contrast[2] = k2;
    contrast[0] = (k2 + 1) >> 1;
    contrast[4] = (k2 + 1) / 5;
    sonixRegWrite(spca50x->dev, 0x08, 0x84, 0x0000, contrast, 6);
}
static __u16 sn9cxxx_getcontrast(struct usb_spca50x *spca50x)
{
    /* hardcoded registers seem not readable */
    spca50x->contrast = 0x3f << 8; //0x28
    return spca50x->contrast;
}
static int sn9cxxx_sofdetect(struct usb_spca50x *spca50x,struct spca50x_frame *frame, unsigned char *cdata,int *iPix, int seqnum,int *datalength)
{
  int sof;
	    sof = *datalength - 64;
	    if (sof < 0){
	    	*iPix = 0;
		return (seqnum+1);
	    } else if (cdata[sof] == 0xff && cdata[sof + 1] == 0xd9) {
		
		// copy the end of data frame
		memcpy(frame->highwater, cdata, sof + 2);
		frame->highwater += (sof + 2);
	//	totlen += (sof + 2);
#if 0
		spin_lock(&spca50x->v4l_lock);
		spca50x->avg_lum =
		    (cdata[sof + 24] + cdata[sof + 26]) >> 1;
		spin_unlock(&spca50x->v4l_lock);
		PDEBUG(5, "mean luma %d", spca50x->avg_lum);
#endif
		PDEBUG(5,
		       "Sonix header packet found datalength %d !!",
		       *datalength);
		PDEBUG(5, "%03d %03d %03d %03d %03d %03d %03d %03d",
		       cdata[sof + 24], cdata[sof + 25], cdata[sof + 26],
		       cdata[sof + 27], cdata[sof + 28], cdata[sof + 29],
		       cdata[sof + 30], cdata[sof + 31]);
		// setting to skip the rest of the packet
		*iPix = *datalength;
		*datalength = 0;
		return  0;	//start of frame
	    } else
	         *iPix = 0;
	         return (seqnum+1);
}
#if 0
static void sn9cxxx_setAutobright(struct usb_spca50x *spca50x)
{				// GRR avg_lum from the header seem wrong set exposure on brightness instead
    // FIXME where is the avg luma value ??        
    unsigned int expotimes = 0;
    unsigned int expotimesret = 0;

    __u8 luma_mean = 110;
    __u8 luma_delta = 20;
    __u8 spring = 4;		// 4 choice so the gain registers follow with a little retard
    int delta;
    spin_lock_irq(&spca50x->v4l_lock);
    delta = spca50x->avg_lum;
    spin_unlock_irq(&spca50x->v4l_lock);
    //PDEBUG(0,"Error setting exposure delta %d",delta);

    if ((delta < (luma_mean - luma_delta)) ||
	(delta > (luma_mean + luma_delta))) {
	expotimes = sn9cxxx_getexposure(spca50x);
	expotimes += ((luma_mean - delta) >> spring);
	expotimesret = sn9cxxx_setexposure(spca50x, expotimes);
	if (expotimes != expotimesret)
	    PDEBUG(0, "Error setting exposure !");
    }

}


#endif
#endif				//SONIXJPGUSB
