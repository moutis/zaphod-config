//
//  moutis_config.dtsi
//  
//
//  Created by Alan on 7/24/22.
//

#define ___  &trans

#define l_any   -1
#define l_alpha 0
#define l_akL   1
#define l_akHU  2
#define l_akEO  3
#define l_nav   4
#define l_sym   5
#define l_fn    6
#define l_num   7
#define l_cfg   8

#define my_tapping_term 160
#define my_quick_tapping_term 125

#define KEYS_L 0 1 2 3 4 10 11 12 13 14 20 21 22 23 24  // left-hand keys
#define KEYS_R 5 6 7 8 9 15 16 17 18 19 25 26 27 28 29  // right-hand keys
#define THUMBS 30 31 32 33                              // thumb keys

&mt {
    tapping-term-ms = <my_tapping_term>;
};
&sl {
    release-after-ms = <my_tapping_term>;
};

#define EN_PRONOUN_COMBOS //  (I, I'm, I've I'd I'll etc)
