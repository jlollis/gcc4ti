	.xdef __fline_internal_emulator_AND___fline_rom_calls

.section _st10031
	cmp.w #0xF800,(%a1)
	bcs.s __call_default_fline_handler
