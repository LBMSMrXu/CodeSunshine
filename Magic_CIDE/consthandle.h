#ifndef CONSTHANDLE_H_
#define CONSTHANDLE_H_

namespace CHE
{
	const unsigned int INPUT_KEY_a = 97;
    const unsigned int INPUT_KEY_b = 98;
    const unsigned int INPUT_KEY_c = 99;
    const unsigned int INPUT_KEY_d = 100;
    const unsigned int INPUT_KEY_e = 101;
    const unsigned int INPUT_KEY_f = 102;
    const unsigned int INPUT_KEY_g = 103;
    const unsigned int INPUT_KEY_h = 104;
    const unsigned int INPUT_KEY_i = 105;
    const unsigned int INPUT_KEY_j = 106;
    const unsigned int INPUT_KEY_k = 107;
    const unsigned int INPUT_KEY_l = 108;
    const unsigned int INPUT_KEY_m = 109;
    const unsigned int INPUT_KEY_n = 110;
    const unsigned int INPUT_KEY_o = 111;
    const unsigned int INPUT_KEY_p = 112;
    const unsigned int INPUT_KEY_q = 113;
    const unsigned int INPUT_KEY_r = 114;
    const unsigned int INPUT_KEY_s = 115;
    const unsigned int INPUT_KEY_t = 116;
    const unsigned int INPUT_KEY_u = 117;
    const unsigned int INPUT_KEY_v = 118;
    const unsigned int INPUT_KEY_w = 119;
    const unsigned int INPUT_KEY_x = 120;
    const unsigned int INPUT_KEY_y = 121;
    const unsigned int INPUT_KEY_z = 122;
    const unsigned int INPUT_KEY_A = 65;
    const unsigned int INPUT_KEY_B = 66;
    const unsigned int INPUT_KEY_C = 67;
    const unsigned int INPUT_KEY_D = 68;
    const unsigned int INPUT_KEY_E = 69;
    const unsigned int INPUT_KEY_F = 70;
    const unsigned int INPUT_KEY_G = 71;
    const unsigned int INPUT_KEY_H = 72;
    const unsigned int INPUT_KEY_I = 73;
    const unsigned int INPUT_KEY_J = 74;
    const unsigned int INPUT_KEY_K = 75;
    const unsigned int INPUT_KEY_L = 76;
    const unsigned int INPUT_KEY_M = 77;
    const unsigned int INPUT_KEY_N = 78;
    const unsigned int INPUT_KEY_O = 79;
    const unsigned int INPUT_KEY_P = 80;
    const unsigned int INPUT_KEY_Q = 81;
    const unsigned int INPUT_KEY_R = 82;
    const unsigned int INPUT_KEY_S = 83;
    const unsigned int INPUT_KEY_T = 84;
    const unsigned int INPUT_KEY_U = 85;
    const unsigned int INPUT_KEY_V = 86;
    const unsigned int INPUT_KEY_W = 87;
    const unsigned int INPUT_KEY_X = 88;
    const unsigned int INPUT_KEY_Y = 89;
    const unsigned int INPUT_KEY_Z = 90;
    const unsigned int INPUT_KEY_BACKSPACE = 8; 
    const unsigned int INPUT_KEY_ESC = 27;
    const unsigned int INPUT_KEY_TAB = 9;
    const unsigned int INPUT_KEY_ENTER = 13; 
    const unsigned int INPUT_KEY_FKEY = 0;
    const unsigned int INPUT_KEY_DIR = 224;
    const unsigned int INPUT_KEY_SPACE = 32;
    const unsigned int INPUT_KEY_DIR_W = 72;
    const unsigned int INPUT_KEY_DIR_S = 80;
    const unsigned int INPUT_KEY_DIR_A = 75;
    const unsigned int INPUT_KEY_DIR_D = 77;
    
    
    const short GLOK = 0;
    const short GLUNLETTER = 1;
    short getLetter(int key,char* value)
    {
    	if((key > 27) && 
		    key != INPUT_KEY_DIR && 
			key != INPUT_KEY_FKEY){
				
	    	*value = (char)key;
	    	return 0;
	    	
	    }
		else{
			return GLUNLETTER;
		}
    }
}

#endif