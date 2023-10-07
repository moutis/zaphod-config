
# [**Hands Down**](http://handsdownlayout.com) on [Zaphod](https://github.com/petejohanson/zaphod-config)

![zaphod pic](zaphod2.jpg)

My personal instance of [**Hands Down**](http://handsdownlayout.com) on a [Zaphod](https://www.reddit.com/r/ErgoMechKeyboards/comments/1130oor/zaphod_in_café_society/), including all my add-on features, (using only *very customized* ZMK behaviors), no custom code.

```
     ╭─────────────────────╮ ╭──────────────────────╮
     │  X   W   M   G   J  │ │  #$  .:  /*  "[  ']  │
     │  S   C   N   T   K  | |  ,;   A   E   I   H  │
     │  B   P   L   D   /* │ │  -+   U   O   Y   f  │
     ╰──────────╮  BSP  R  │ │  SPC RET  ╭──────────╯
                ╰──────────╯ ╰───────────╯
```
[***Vibranium***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.eyvjpfoqjy65) (a.k.a *Neu-vb*) is great with all the other [smart behaviors](https://sites.google.com/alanreiser.com/handsdown#h.8ngiif20qf4). Currently I have most of the *essential* combos (`Qu`,`Z`, `Undo`, `Cut`, `Copy`, `Paste`, etc.), *and* **`H` digraph combos** *to send* `TH`,`CH`,`WH`,`SH`,`GH`,`PH` *bigrams* (`PH` is a SFB on vv, which I always type with `PY` combo). There's a ZMK take on [***Adaptive Keys***](https://sites.google.com/alanreiser.com/handsdown#h.ps4itorhjiq9) (*using macros and sticky layers*) and [***Linger Keys***](https://sites.google.com/alanreiser.com/handsdown#h.w8doktr0rzce) (*using macros and hold-tap behaviors*). They behave a bit differently than in QMK, but are quite usable. Eventually I hope to deploy a properly coded solution to these features.

Templates for [***Neu***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.ze4kq734zl5w) and [***Gold***](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.8i2msuo3butx) are in the works.

Currently building only for a Mac (*hard coded for gui instead of ctrl, and some mac specific keycodes*), because I use this mainly with my iPads and phone when I'm on the road. My [***Semantic Keys***](https://sites.google.com/alanreiser.com/handsdown#h.7mehnxbqcx2s) feature for platform independence works on my QMK implementations, but isn't yet fully fleshed out and will require more invasive work for ZMK, so this too is for later.

Thanks to [jcmkk3](https://github.com/jcmkk3) for the idea to implement adaptives via sticky layers, and many others on the [**Hands Down** Discord](https://discord.gg/BC3fzb2E) for the endless creativity and support. Of course, huge thanks to [Pete Johanson](https://github.com/petejohanson) *and contributors* for ZMK, and for the very sweet [Zaphod](https://github.com/petejohanson/zaphod-config) board design. 
