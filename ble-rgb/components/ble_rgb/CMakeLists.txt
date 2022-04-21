idf_component_register(SRCS "ble_rgb.c" "ble_rgb_gatts.c" "ble_rgb_adv.c" "ble_rgb_gap.c"
                    INCLUDE_DIRS "include"
                    REQUIRES bt rgb)
