#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_module_globals_table[] = {
    { MP_ROM_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_PA04) },
    { MP_ROM_QSTR(MP_QSTR_A1), MP_ROM_PTR(&pin_PA05) },
    { MP_ROM_QSTR(MP_QSTR_A2), MP_ROM_PTR(&pin_PA06) },
    { MP_ROM_QSTR(MP_QSTR_A3), MP_ROM_PTR(&pin_PA07) },
    { MP_ROM_QSTR(MP_QSTR_A4), MP_ROM_PTR(&pin_PC04) },
    { MP_ROM_QSTR(MP_QSTR_A5), MP_ROM_PTR(&pin_PC05) },

    { MP_ROM_QSTR(MP_QSTR_D5), MP_ROM_PTR(&pin_PC07) },
    { MP_ROM_QSTR(MP_QSTR_D6), MP_ROM_PTR(&pin_PC06) },
    { MP_ROM_QSTR(MP_QSTR_D9), MP_ROM_PTR(&pin_PB08) },
    { MP_ROM_QSTR(MP_QSTR_D10), MP_ROM_PTR(&pin_PB09) },
    { MP_ROM_QSTR(MP_QSTR_D11), MP_ROM_PTR(&pin_PC03) },
    { MP_ROM_QSTR(MP_QSTR_D12), MP_ROM_PTR(&pin_PC02) },
    { MP_ROM_QSTR(MP_QSTR_D13), MP_ROM_PTR(&pin_PC01) },

    { MP_ROM_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_PB07) },
    { MP_ROM_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_PB06) },

    { MP_ROM_QSTR(MP_QSTR_SCK), MP_ROM_PTR(&pin_PB13) },
    { MP_ROM_QSTR(MP_QSTR_MISO), MP_ROM_PTR(&pin_PB14) },
    { MP_ROM_QSTR(MP_QSTR_MOSI), MP_ROM_PTR(&pin_PB15) },

    { MP_ROM_QSTR(MP_QSTR_TX), MP_ROM_PTR(&pin_PB10) },
    { MP_ROM_QSTR(MP_QSTR_RX), MP_ROM_PTR(&pin_PB11) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
