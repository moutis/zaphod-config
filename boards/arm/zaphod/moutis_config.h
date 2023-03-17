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
#define l_nav   3
#define l_sym   4
#define l_fn    5
#define l_num   6
#define l_cfg   7

#define my-tapping-term 170

&mt {
    tapping-term-ms = <my-tapping-term>;
};
&sl {
    release-after-ms = <500>;
};

#define EN_PRONOUN_COMBOS //  (I, I'm, I've I'd I'll etc)
