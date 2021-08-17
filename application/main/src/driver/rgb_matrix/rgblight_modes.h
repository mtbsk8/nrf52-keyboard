#ifdef _RGBM_SINGLE_STATIC
_RGBM_SINGLE_STATIC(STATIC_LIGHT)
#ifdef RGBLIGHT_EFFECT_BREATHING
_RGBM_MULTI_DYNAMIC(BREATHING)
_RGBM_TMP_DYNAMIC(breathing_3, BREATHING)
_RGBM_TMP_DYNAMIC(breathing_4, BREATHING)
_RGBM_TMP_DYNAMIC(BREATHING_end, BREATHING)
#endif
#ifdef RGBLIGHT_EFFECT_RAINBOW_MOOD
_RGBM_MULTI_DYNAMIC(RAINBOW_MOOD)
_RGBM_TMP_DYNAMIC(rainbow_mood_7, RAINBOW_MOOD)
_RGBM_TMP_DYNAMIC(RAINBOW_MOOD_end, RAINBOW_MOOD)
#endif
#ifdef RGBLIGHT_EFFECT_RAINBOW_SWIRL
_RGBM_MULTI_DYNAMIC(RAINBOW_SWIRL)
_RGBM_TMP_DYNAMIC(rainbow_swirl_10, RAINBOW_SWIRL)
_RGBM_TMP_DYNAMIC(rainbow_swirl_11, RAINBOW_SWIRL)
_RGBM_TMP_DYNAMIC(rainbow_swirl_12, RAINBOW_SWIRL)
_RGBM_TMP_DYNAMIC(rainbow_swirl_13, RAINBOW_SWIRL)
_RGBM_TMP_DYNAMIC(RAINBOW_SWIRL_end, RAINBOW_SWIRL)
#endif
#ifdef RGBLIGHT_EFFECT_SNAKE
_RGBM_MULTI_DYNAMIC(SNAKE)
_RGBM_TMP_DYNAMIC(snake_16, SNAKE)
_RGBM_TMP_DYNAMIC(snake_17, SNAKE)
_RGBM_TMP_DYNAMIC(snake_18, SNAKE)
_RGBM_TMP_DYNAMIC(snake_19, SNAKE)
_RGBM_TMP_DYNAMIC(SNAKE_end, SNAKE)
#endif
#ifdef RGBLIGHT_EFFECT_KNIGHT
_RGBM_MULTI_DYNAMIC(KNIGHT)
_RGBM_TMP_DYNAMIC(knight_22, KNIGHT)
_RGBM_TMP_DYNAMIC(KNIGHT_end, KNIGHT)
#endif
#ifdef RGBLIGHT_EFFECT_CHRISTMAS
_RGBM_SINGLE_DYNAMIC(CHRISTMAS)
#endif
#ifdef RGBLIGHT_EFFECT_STATIC_GRADIENT
_RGBM_MULTI_STATIC(STATIC_GRADIENT)
_RGBM_TMP_STATIC(static_gradient_26, STATIC_GRADIENT)
_RGBM_TMP_STATIC(static_gradient_27, STATIC_GRADIENT)
_RGBM_TMP_STATIC(static_gradient_28, STATIC_GRADIENT)
_RGBM_TMP_STATIC(static_gradient_29, STATIC_GRADIENT)
_RGBM_TMP_STATIC(static_gradient_30, STATIC_GRADIENT)
_RGBM_TMP_STATIC(static_gradient_31, STATIC_GRADIENT)
_RGBM_TMP_STATIC(static_gradient_32, STATIC_GRADIENT)
_RGBM_TMP_STATIC(static_gradient_33, STATIC_GRADIENT)
_RGBM_TMP_STATIC(STATIC_GRADIENT_end, STATIC_GRADIENT)
#endif
#ifdef RGBLIGHT_EFFECT_RGB_TEST
_RGBM_SINGLE_DYNAMIC(RGB_TEST)
#endif
#ifdef RGBLIGHT_EFFECT_ALTERNATING
_RGBM_SINGLE_DYNAMIC(ALTERNATING)
#endif
#ifdef RGBLIGHT_EFFECT_TWINKLE
_RGBM_MULTI_DYNAMIC(TWINKLE)
_RGBM_TMP_DYNAMIC(twinkle_38, TWINKLE)
_RGBM_TMP_DYNAMIC(twinkle_39, TWINKLE)
_RGBM_TMP_DYNAMIC(twinkle_40, TWINKLE)
_RGBM_TMP_DYNAMIC(twinkle_41, TWINKLE)
_RGBM_TMP_DYNAMIC(TWINKLE_end, TWINKLE)
#endif
////  Add a new mode here.
// #ifdef RGBLIGHT_EFFECT_<name>
//    _RGBM_<SINGLE|MULTI>_<STATIC|DYNAMIC>( <name> )
// #endif
#endif

#undef _RGBM_SINGLE_STATIC
#undef _RGBM_SINGLE_DYNAMIC
#undef _RGBM_MULTI_STATIC
#undef _RGBM_MULTI_DYNAMIC
#undef _RGBM_TMP_STATIC
#undef _RGBM_TMP_DYNAMIC
