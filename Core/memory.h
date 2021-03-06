#ifndef memory_h
#define memory_h
#include "gb.h"

uint8_t GB_read_memory(GB_gameboy_t *gb, uint16_t addr);
void GB_write_memory(GB_gameboy_t *gb, uint16_t addr, uint8_t value);
#ifdef GB_INTERNAL
void GB_dma_run(GB_gameboy_t *gb);
void GB_hdma_run(GB_gameboy_t *gb);
void GB_trigger_oam_bug(GB_gameboy_t *gb, uint16_t address);
void GB_trigger_oam_bug_read_increase(GB_gameboy_t *gb, uint16_t address);
#endif

#endif /* memory_h */
