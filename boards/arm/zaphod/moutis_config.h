//
//  moutis_config.dtsi
//  
//
//  Created by Alan on 7/24/22.
//

#define ___  &trans

/*    KEY POSITION Numbers for Zaphod
 ╭────────────────────╮ ╭────────────────────╮
 │  0   1   2   3   4 │ │  5   6   7   8   9 │
 │ 10  11  12  13  14 │ │ 15  16  17  18  19 |
 | 20  21  22  23  24 │ │ 25  26  27  28  29 |
 ╰───────────╮ 30  31 | | 32  33  ╭──────────╯
             ╰────────╯ ╰─────────╯   */
/*    KEY POSITION Names
╭─────────────────────╮ ╭─────────────────────╮
│ LT4 LT3 LT2 LT1 LT0 │ │ RT0 RT1 RT2 RT3 RT4 │
│ LM4 LM3 LM2 LM1 LM0 │ │ RM0 RM1 RM2 RM3 RM4 │
│ LB4 LB3 LB2 LB1 LB0 │ │ RB0 RB1 RB2 RB3 RB4 │
╰───────────╮ LH2 LH1 | | RH1 RH2 ╭───────────╯
            ╰─────────╯ ╰─────────╯   */
#define LT0 4
#define LT1 3
#define LT2 2
#define LT3 1
#define LT4 0
#define RT0 5
#define RT1 6
#define RT2 7
#define RT3 8
#define RT4 9

#define LM0 14
#define LM1 13
#define LM2 12
#define LM3 11
#define LM4 10
#define RM0 15
#define RM1 16
#define RM2 17
#define RM3 18
#define RM4 19

#define LB0 24
#define LB1 23
#define LB2 22
#define LB3 21
#define LB4 20
#define RB0 25
#define RB1 26
#define RB2 27
#define RB3 28
#define RB4 29

#define LH1 30
#define LH2 31
#define RH1 32
#define RH2 33

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4  // left-hand keys
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4  // right-hand keys
#define THUMBS LH2 LH1 RH1 RH2                                      // thumb keys

// my layers

#define l_any   -1
#define l_alpha 0
#define l_akG   1
#define l_akM   2
#define l_akX   3
#define l_akT   4
#define l_akK   5
#define l_akD   6
#define l_akW   7
#define l_akF   8
#define l_akB   9
#define l_akV   10
#define l_akA   11
#define l_akU   12
#define l_akE   13
#define l_akO   14
#define l_akI   15
#define l_akJ   16
#define l_akDot 17
#define l_nav   18
#define l_sym   19
#define l_fn    20
#define l_num   21
#define l_cfg   22

#define my_tapping_term 170
#define my_quick_tapping_term 112
#define my_ak_delay 40

&mt {
    tapping-term-ms = <my_tapping_term>;
};
&sl {
    release-after-ms = <my_tapping_term>;
};
&caps_word {
    continue-list = <UNDER MINUS BSPC DEL LEFT RIGHT>;
};


#define EN_PRONOUN_COMBOS //  (I, I'm, I've I'd I'll etc)
