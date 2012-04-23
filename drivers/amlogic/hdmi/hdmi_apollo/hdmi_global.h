#ifndef __HDMI_GLOBAL_H__
#define __HDMI_GLOBAL_H__

#define TRUE		0
#define FALSE 	-1
#include <linux/delay.h>
#include <asm/types.h>

	    0, 
	    
	    
	    
} hdmi_tv_mode_t;

	    0, 
} hdmi_tv_ratio_t;

} display_type_t;

	    1, 
	    3, 
	    5, 
	    7, 
	    9, 
	    0xb, 
	    0xd, 
} hdcp_auth_state_t;

	    0, 
	    
	    
} hdmi_output_state_t;

	
	
	


	
	
	
	
	


	
	
	
	
	
	
	
	
	
	
	


	
	
	
	
	
	
	
	
	
	
	
	
	


	
	
	
	
	
	
	


	
	
	
	
	
	unsigned char audiopath_format;	//bit[3:0]: 0 - SPDIF;  1 - I2S;    2 - DSD;    3 - HBR  .. 
	//Bit 7:      0 - Layout 0 (stereo);  1 - Layout 1 (up to 8 channels)
	unsigned char audiopath_sf;	//Sampling Freq Fs:0 - Refer to Stream Header; 1 - 32KHz; 2 - 44.1KHz; 3 - 48KHz; 4 - 88.2KHz...
	unsigned char audiopath_sl;	//bit[3:0]: 2, 4, 8, 0xA, 0xC +1 for Max 24. Even values are Max 20. Odd: Max 24.
	//bit[7:4]: 16bit/18bit/20bit/24bit Sample Size
	unsigned char audiopath_i2s_in_ctrl;	//I2S control bits
	
	unsigned char videopath_inindex;	//Video Input Source(bit[3:0]): 0 - RGB24; 1 - RGB DVO 12; 2 - YCbCr24; 3 - YC24; 4 - YCbCr4:2:2
	unsigned char videopath_outindex;	// Video Output Color Space Conversion : 0 - RGB out; 1 - YCbr (4:4:4) out; 2 - YCbr (4:2:2) out; 
	unsigned char videopath_clocke_edge;	//Clock Edge : 0 - Falling edge; 1 - Rising Edge
	unsigned char videopath_deep_color;	// Deep Color Mode : 0 - 24 bit; 1 - 30 bits; 2 - 36 bits
	
	
	
	    //    hdcp_auth_state_t  old_auth_state;   
	 hdmi_output_state_t output_state;
	
	u32 hw_sha_calculator_flag:1;	// If  == 1, use the HW SHA calculator, otherwise, use SW SHA calculator
	
	    //0 :  Pixel data is not replicated
	    //1 :  Pixels are replicated once (each sent twice)
	    //2 :  RSVD
	    //3:   Pixels are replicated 4 times (each sent four times) 
	 u32 repeat_pixel_flag:3;
	
	    //0b000 = MCLK is 128*Fs
	    //0b001 = MCLK is 256*Fs  (recommanded)
	    //0b010 = MCLK is 384*Fs
	    //0b011 = MCLK is 512*Fs
	    //0b100 = MCLK is 768*Fs
	    //0b101 = MCLK is 1024*Fs
	    //0b110 = MCLK is 1152*Fs
	    //0b111 = MCLK is 192*Fs    
	 u32 audio_mclk:3;
	
	
	
	
	
	u32 need_check_edid:1;
	
	u32 hpd_change_flag:1;	//0: no change,  1: changed     
	u32 SPDIF_stream_error:1;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


#define DISPCTL_MODE_480I	0
#define DISPCTL_MODE_576I	1
#define DISPCTL_MODE_480P	2
#define DISPCTL_MODE_576P	3
#define DISPCTL_MODE_720P	4
#define DISPCTL_MODE_1080I	5
#define DISPCTL_MODE_1080P	6
#define DISPCTL_MODE_VGA	7
#define DISPCTL_MODE_SVGA	8
#define DISPCTL_MODE_XGA	9
#define DISPCTL_MODE_SXGA	10
#define DISPCTL_MODE_LCD    11
#define DISPCTL_MODE_KEEP   12

	    0, 
} policy_hd_freq_t;


{
	



#endif	/* 