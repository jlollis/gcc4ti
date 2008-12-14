FreeHandles		equ	$23B
HLock		equ	$99
HeapAlloc		equ	$90
HeapAllocESTACK		equ	$91
HeapAllocHigh		equ	$92
HeapAllocHighThrow		equ	$94
HeapAllocPtr		equ	$A2
HeapAllocThrow		equ	$93
HeapAvail		equ	$8F
HeapCompress		equ	$95
HeapDeref		equ	$96
HeapEnd		equ	$A1
HeapFree		equ	$97
HeapFreeIndir		equ	$98
HeapFreePtr		equ	$A3
HeapGetHandle		equ	$239
HeapGetLock		equ	$9B
HeapLock		equ	$9A
HeapMax		equ	$9C
HeapMoveHigh		equ	$A0
HeapPtrToHandle		equ	$23A
HeapRealloc		equ	$9D
HeapShuffle		equ	$474
HeapSize		equ	$9E
HeapUnlock		equ	$9F
HeapWalk		equ	$12C
free		equ	$A3
malloc		equ	$A2
EX_getArg		equ	$BE
EX_getBCD		equ	$BF
RemainingArgCnt		equ	$3C3
cmd_andpic		equ	$32A
cmd_archive		equ	$448
cmd_blddata		equ	$32B
cmd_circle		equ	$32C
cmd_clrdraw		equ	$32D
cmd_clrerr		equ	$32E
cmd_clrgraph		equ	$32F
cmd_clrhome		equ	$330
cmd_clrio		equ	$331
cmd_clrtable		equ	$332
cmd_copyvar		equ	$333
cmd_cubicreg		equ	$334
cmd_custmoff		equ	$335
cmd_custmon		equ	$336
cmd_custom		equ	$337
cmd_cycle		equ	$338
cmd_cyclepic		equ	$339
cmd_delfold		equ	$33A
cmd_delvar		equ	$33B
cmd_dialog		equ	$33C
cmd_disp		equ	$33D
cmd_dispg		equ	$33E
cmd_disphome		equ	$33F
cmd_disptbl		equ	$340
cmd_drawfunc		equ	$341
cmd_drawinv		equ	$342
cmd_drawparm		equ	$343
cmd_drawpol		equ	$344
cmd_else		equ	$345
cmd_endfor		equ	$346
cmd_endloop		equ	$347
cmd_endtry		equ	$348
cmd_endwhile		equ	$349
cmd_exit		equ	$34A
cmd_expreg		equ	$34B
cmd_fill		equ	$34C
cmd_fnoff		equ	$34D
cmd_fnon		equ	$34E
cmd_for		equ	$34F
cmd_get		equ	$350
cmd_getcalc		equ	$351
cmd_goto		equ	$352
cmd_graph		equ	$353
cmd_if		equ	$354
cmd_ifthen		equ	$355
cmd_input		equ	$356
cmd_inputstr		equ	$357
cmd_line		equ	$358
cmd_linehorz		equ	$359
cmd_linetan		equ	$35A
cmd_linevert		equ	$35B
cmd_linreg		equ	$35C
cmd_lnreg		equ	$35D
cmd_local		equ	$35E
cmd_lock		equ	$35F
cmd_logistic		equ	$360
cmd_medmed		equ	$361
cmd_movevar		equ	$362
cmd_newdata		equ	$363
cmd_newfold		equ	$364
cmd_newpic		equ	$365
cmd_newplot		equ	$366
cmd_newprob		equ	$367
cmd_onevar		equ	$368
cmd_output		equ	$369
cmd_passerr		equ	$36A
cmd_pause		equ	$36B
cmd_plotsoff		equ	$36C
cmd_plotson		equ	$36D
cmd_popup		equ	$36E
cmd_powerreg		equ	$36F
cmd_printobj		equ	$370
cmd_prompt		equ	$371
cmd_ptchg		equ	$372
cmd_ptoff		equ	$373
cmd_pton		equ	$374
cmd_pttext		equ	$375
cmd_pxlchg		equ	$376
cmd_pxlcircle		equ	$377
cmd_pxlhorz		equ	$378
cmd_pxlline		equ	$379
cmd_pxloff		equ	$37A
cmd_pxlon		equ	$37B
cmd_pxltext		equ	$37C
cmd_pxlvert		equ	$37D
cmd_quadreg		equ	$37E
cmd_quartreg		equ	$37F
cmd_randseed		equ	$380
cmd_rclgdb		equ	$381
cmd_rclpic		equ	$382
cmd_rename		equ	$383
cmd_request		equ	$384
cmd_return		equ	$385
cmd_rplcpic		equ	$386
cmd_send		equ	$387
cmd_sendcalc		equ	$388
cmd_sendchat		equ	$389
cmd_shade		equ	$38A
cmd_showstat		equ	$38B
cmd_sinreg		equ	$38C
cmd_slpline		equ	$38D
cmd_sorta		equ	$38E
cmd_sortd		equ	$38F
cmd_stogdb		equ	$390
cmd_stopic		equ	$391
cmd_style		equ	$392
cmd_table		equ	$393
cmd_text		equ	$394
cmd_toolbar		equ	$395
cmd_trace		equ	$396
cmd_try		equ	$397
cmd_twovar		equ	$398
cmd_unarchiv		equ	$449
cmd_unlock		equ	$399
cmd_while		equ	$39A
cmd_xorpic		equ	$39B
cmd_zoombox		equ	$39C
cmd_zoomdata		equ	$39D
cmd_zoomdec		equ	$39E
cmd_zoomfit		equ	$39F
cmd_zoomin		equ	$3A0
cmd_zoomint		equ	$3A1
cmd_zoomout		equ	$3A2
cmd_zoomprev		equ	$3A3
cmd_zoomrcl		equ	$3A4
cmd_zoomsqr		equ	$3A5
cmd_zoomstd		equ	$3A6
cmd_zoomsto		equ	$3A7
cmd_zoomtrig		equ	$3A8
did_push_anti_deriv		equ	$5B1
did_push_series		equ	$588
push_1st_derivative		equ	$5AE
push_abs		equ	$543
push_acos		equ	$537
push_acosh		equ	$53E
push_approx		equ	$4F7
push_asin		equ	$536
push_asinh		equ	$53D
push_atan		equ	$538
push_atanh		equ	$53F
push_augment		equ	$496
push_ceiling		equ	$54B
push_char		equ	$497
push_coldim		equ	$498
push_colnorm		equ	$499
push_comb		equ	$542
push_comdenom		equ	$59B
push_conj		equ	$547
push_cos		equ	$533
push_cosh		equ	$53B
push_cross_product		equ	$4CE
push_csolve		equ	$585
push_cumsum		equ	$49A
push_czeros		equ	$587
push_def_int		equ	$5B2
push_denominator		equ	$55B
push_dense_poly_eval		equ	$49C
push_desolve		equ	$58B
push_determinant		equ	$49D
push_diag		equ	$49E
push_dimension		equ	$49F
push_div_dif_1c		equ	$58D
push_div_dif_1f		equ	$58C
push_dotproduct		equ	$4A3
push_eigvc		equ	$4CF
push_eigvl		equ	$4D0
push_exp		equ	$52E
push_expand		equ	$59A
push_extended_prod		equ	$5B5
push_factor		equ	$59C
push_floor		equ	$54A
push_fractional_part		equ	$54E
push_gcd_numbers		equ	$514
push_getfold		equ	$317
push_getkey		equ	$316
push_getmode		equ	$318
push_gettype		equ	$319
push_identity_mat		equ	$4A4
push_im		equ	$546
push_instring		equ	$31A
push_integer_gcd		equ	$551
push_integer_lcm		equ	$552
push_integer_part		equ	$54D
push_integer_quotient		equ	$54F
push_integer_remainder		equ	$550
push_is_prime		equ	$515
push_left		equ	$4A5
push_lim		equ	$5AD
push_list_to_mat		equ	$4A6
push_ln		equ	$52F
push_log10		equ	$530
push_mat_to_list		equ	$4A8
push_matnorm		equ	$4A7
push_max		equ	$58A
push_max1		equ	$554
push_max2		equ	$599
push_mean		equ	$4A9
push_median		equ	$4AA
push_mid		equ	$4AB
push_min		equ	$589
push_min1		equ	$553
push_min2		equ	$598
push_mod		equ	$54C
push_mrow		equ	$4AC
push_mrowadd		equ	$4AD
push_newlist		equ	$4AE
push_newmat		equ	$4AF
push_nint		equ	$5B3
push_nsolve		equ	$583
push_nth_derivative		equ	$5AF
push_numerator		equ	$55A
push_ord		equ	$4B0
push_part		equ	$31C
push_perm		equ	$541
push_phase		equ	$548
push_prodlist		equ	$4B2
push_pttest		equ	$31D
push_pxltest		equ	$31E
push_r_cis		equ	$549
push_rand		equ	$31F
push_randmat		equ	$4B4
push_randnorm		equ	$4B5
push_randpoly		equ	$320
push_re		equ	$545
push_rec_to_angle		equ	$539
push_red_row_ech		equ	$4B6
push_right		equ	$4B7
push_rotate		equ	$4B8
push_round		equ	$4B9
push_row_echelon		equ	$4BE
push_rowadd		equ	$4BA
push_rowdim		equ	$4BB
push_rownorm		equ	$4BC
push_rowswap		equ	$4BD
push_sequence		equ	$4BF
push_setfold		equ	$321
push_setgraph		equ	$322
push_setmode		equ	$323
push_settable		equ	$324
push_shift		equ	$4C0
push_sign		equ	$544
push_simult		equ	$4C1
push_sin		equ	$532
push_sin2		equ	$531
push_sinh		equ	$53A
push_solve		equ	$584
push_sqrt		equ	$52B
push_stddev		equ	$4C3
push_str_to_expr		equ	$325
push_string		equ	$326
push_submat		equ	$4C4
push_sumlist		equ	$4C5
push_summation		equ	$5B4
push_switch		equ	$327
push_tan		equ	$534
push_tanh		equ	$53C
push_unitv		equ	$4C8
push_variance		equ	$4C9
push_when		equ	$57D
push_zeros		equ	$586
did_push_to_polar		equ	$313
push_and		equ	$5AB
push_arg_minus_1		equ	$520
push_arg_plus_1		equ	$51F
push_assignment		equ	$4DD
push_degrees		equ	$314
push_difference		equ	$51A
push_dot_add		equ	$4A0
push_dot_div		equ	$4CD
push_dot_exponentiate		equ	$596
push_dot_mult		equ	$4A1
push_dot_sub		equ	$4A2
push_equals		equ	$5A3
push_exponentiate		equ	$595
push_factorial		equ	$540
push_greater_than		equ	$5A5
push_greater_than_or_equals		equ	$5A7
push_indir_name		equ	$2B2
push_less_than		equ	$5A6
push_less_than_or_equals		equ	$5A8
push_list_plus		equ	$3BD
push_list_times		equ	$3BE
push_matrix_product		equ	$3C5
push_negate		equ	$524
push_not		equ	$5AA
push_not_equals		equ	$5A4
push_or		equ	$5AC
push_percent		equ	$555
push_pow		equ	$30F
push_product		equ	$521
push_radians		equ	$4B3
push_ratio		equ	$526
push_square		equ	$52C
push_substitute_no_simplify		equ	$489
push_substitute_simplify		equ	$5B9
push_substitute_using_such_that		equ	$5BE
push_sum		equ	$594
push_to_cylin		equ	$328
push_to_sphere		equ	$329
CertificateMemory		equ	$43E
ceof		equ	$128
cfindfield		equ	$12A
cgetc		equ	$12B
cgetcertrevno		equ	$2A0
cgetflen		equ	$12D
cgetfnl		equ	$12E
cgetnl		equ	$12F
cgetns		equ	$130
cgetsn		equ	$2A1
copen		equ	$132
copensub		equ	$133
cputhdr		equ	$134
cputnl		equ	$135
cputns		equ	$136
cread		equ	$137
ctell		equ	$138
cwrite		equ	$139
Dialog		equ	$30
DialogAdd		equ	$33
DialogDo		equ	$32
DialogNew		equ	$34
DlgMessage		equ	$1B4
VarNew		equ	$28E
VarOpen		equ	$28C
VarSaveAs		equ	$28D
ERD_dialog		equ	$151
ERD_process		equ	$152
ER_catch		equ	$154
ER_success		equ	$155
ER_throwVar		equ	$153
find_error_message		equ	$2C1
ARb_int_count		equ	$5C3
ARb_real_count		equ	$5C2
GetValue		equ	$2CB
HToESI		equ	$247
NG_RPNToText		equ	$25B
NG_approxESI		equ	$25C
NG_execute		equ	$25D
NG_graphESI		equ	$25E
NG_rationalESI		equ	$25F
NG_tokenize		equ	$260
Parms2D		equ	$4D
Parse1DExpr		equ	$4F
Parse2DExpr		equ	$4A
Parse2DMultiExpr		equ	$4B
Print2DExpr		equ	$4C
TokenizeSymName		equ	$80
add1_to_top		equ	$51D
add_to_top		equ	$518
all_tail		equ	$3B5
and_onto_top		equ	$579
any_tail		equ	$3B6
are_expressions_identical		equ	$2BF
bottom_estack		equ	$432
can_be_approxed		equ	$2F5
check_estack_size		equ	$2C2
compare_Floats		equ	$2F7
compare_complex_magnitudes		equ	$2F6
compare_expressions		equ	$2C0
delete_between		equ	$2C3
delete_expression		equ	$2C5
deleted_between		equ	$2C4
deleted_expression		equ	$2C6
did_push_cnvrt_Float_to_integer		equ	$2F8
display_statements		equ	$4E
estack_number_to_Float		equ	$2F9
estack_to_short		equ	$2C7
estack_to_ushort		equ	$2C8
factor_base_index		equ	$2C9
factor_exponent_index		equ	$2CA
gcd_exact_whole_Floats		equ	$2FC
get_key_ptr		equ	$2B7
im_index		equ	$2CC
index_below_display_expression_aux		equ	$2B6
index_main_var		equ	$2CF
index_numeric_term		equ	$2CD
index_of_lead_base_of_lead_term		equ	$2CE
integer_non_unknown		equ	$50C
is0		equ	$269
is1		equ	$2FD
is_Float_exact_whole_number		equ	$2FE
is_advanced_tag		equ	$2D0
is_antisymmetric		equ	$2D1
is_complex0		equ	$2D3
is_complex_number		equ	$2D2
is_constant		equ	$593
is_free_of_tag		equ	$2D4
is_independent_of		equ	$2D5
is_independent_of_de_seq_vars		equ	$2D6
is_independent_of_elements		equ	$2D8
is_independent_of_tail		equ	$2D7
is_matrix		equ	$3B7
is_minus1		equ	$508
is_monomial		equ	$2D9
is_monomial_in_kernel		equ	$2DA
is_narrowly_independent_of		equ	$2DB
is_negative		equ	$575
is_never0		equ	$577
is_nonnegative		equ	$574
is_nonpositive		equ	$576
is_polynomial_in_var_or_kern		equ	$56B
is_positive		equ	$573
is_square_matrix		equ	$3B8
is_symmetric		equ	$2DC
is_tail_independent_of		equ	$2DD
is_totally_polynomial		equ	$56C
is_valid_smap_aggregate		equ	$3B9
is_variable		equ	$488
is_whole_number		equ	$50B
last_element_index		equ	$3BA
lead_base_index		equ	$2DE
lead_exponent_index		equ	$2DF
lead_factor_index		equ	$2E0
lead_term_index		equ	$2E1
likely_approx_to_complex_number		equ	$307
likely_approx_to_number		equ	$308
main_gen_var_index		equ	$2E2
map_tail		equ	$3BB
map_tail_Int		equ	$3BC
map_unary_over_comparison		equ	$2E3
min_quantum		equ	$2E4
move_between_to_top		equ	$2E5
moved_between_to_top		equ	$2E6
negate_top		equ	$525
next_expression_index		equ	$10A
norm1_complex_Float		equ	$309
numeric_factor_index		equ	$2E7
push_ANSI_string		equ	$48A
push_END_TAG		equ	$263
push_Float		equ	$30A
push_Float_to_nonneg_int		equ	$30B
push_Float_to_rat		equ	$30C
push_LIST_TAG		equ	$264
push_between		equ	$2E8
push_cnvrt_integer_if_whole_nmb		equ	$30D
push_expr2_quantum		equ	$2EA
push_expr_quantum		equ	$2E9
push_expression		equ	$44D
push_internal_simplify		equ	$4F8
push_long_to_integer		equ	$4E3
push_next_arb_int		equ	$2EB
push_next_arb_real		equ	$2EC
push_next_internal_var		equ	$2ED
push_offset_array		equ	$3C4
push_overflow_to_infinity		equ	$30E
push_parse_text		equ	$3CA
push_quantum		equ	$2EE
push_quantum_pair		equ	$2EF
push_reversed_tail		equ	$3BF
push_round_Float		equ	$310
push_simplify		equ	$44E
push_transpose_aux		equ	$3C1
push_ulong_to_integer		equ	$4E4
push_ushort_to_integer		equ	$4E5
push_zstr		equ	$48A
re_index		equ	$2F2
reductum_index		equ	$2F0
remaining_element_count		equ	$3C3
remaining_factors_index		equ	$2F1
reset_control_flags		equ	$2F4
reset_estack_size		equ	$2F3
should_and_did_push_approx_arg2		equ	$311
signum_Float		equ	$312
subtract1_from_top		equ	$51E
subtract_from_top		equ	$51B
top_estack		equ	$109
ABT_dialog		equ	$10D
CAT_dialog		equ	$125
EV_captureEvents		equ	$C6
EV_centralDispatcher		equ	$156
EV_clearPasteString		equ	$C7
EV_defaultHandler		equ	$157
EV_eventLoop		equ	$158
EV_getSplitRect		equ	$C9
EV_getc		equ	$C8
EV_hook		equ	$2A3
EV_notifySwitchGraph		equ	$CA
EV_paintOneWindow		equ	$CB
EV_paintWindows		equ	$CC
EV_registerMenu		equ	$159
EV_restorePainting		equ	$CD
EV_sendEvent		equ	$CE
EV_sendEventSide		equ	$CF
EV_sendString		equ	$D0
EV_setCmdCheck		equ	$D1
EV_setCmdState		equ	$D2
EV_setFKeyState		equ	$D3
EV_startApp		equ	$D4
EV_startSide		equ	$D5
EV_startTask		equ	$D6
EV_suspendPainting		equ	$D7
EV_switch		equ	$D8
MO_currentOptions		equ	$D9
MO_defaults		equ	$DA
MO_digestOptions		equ	$DB
MO_isMultigraphTask		equ	$DC
MO_modeDialog		equ	$DD
MO_notifyModeChange		equ	$DE
MO_option		equ	$447
MO_sendQuit		equ	$DF
ModeSettings		equ	$447
handleRclKey		equ	$14F
handleVarLinkKey		equ	$129
FAccess		equ	$3D4
FClose		equ	$3D5
FCreate		equ	$3D6
FDelete		equ	$3D7
FEof		equ	$3D8
FFindFirst		equ	$3D9
FFindNext		equ	$3DA
FGetC		equ	$3DB
FGetPos		equ	$3DC
FGetSize		equ	$3DD
FOpen		equ	$3DE
FPutC		equ	$3DF
FRead		equ	$3E0
FSetBufSize		equ	$3E2
FSetPos		equ	$3E1
FSetSize		equ	$3E3
FSetVer		equ	$3E4
FStatus		equ	$3E5
FType		equ	$3E6
FWrite		equ	$3E7
BatTooLowFlash		equ	$434
EM_GC		equ	$160
EM_abandon		equ	$15B
EM_blockVerifyErase		equ	$15D
EM_findEmptySlot		equ	$15F
EM_survey		equ	$165
EM_write		equ	$167
FL_addCert		equ	$169
FL_download		equ	$16A
FL_getCert		equ	$16C
FL_getHardwareParmBlock		equ	$16B
FL_getVerNum		equ	$16D
FL_write		equ	$171
FlashMemoryEnd		equ	$43D
GD_Circle		equ	$176
GD_Contour		equ	$17D
GD_Eraser		equ	$17A
GD_HVLine		equ	$178
GD_Line		equ	$177
GD_Pen		equ	$179
GD_Select		equ	$17C
GD_Text		equ	$17B
GR3_paint3d		equ	$1FF
GR3_xyToWindow		equ	$200
GZ_Box		equ	$22B
GZ_Center		equ	$22C
BitmapGet		equ	$185
BitmapInit		equ	$186
BitmapPut		equ	$187
BitmapSize		equ	$188
CalcBitmapSize		equ	$3EF
ClientToScr		equ	$42C
ClrScr		equ	$19E
DrawChar		equ	$1A4
DrawClipChar		equ	$191
DrawClipEllipse		equ	$192
DrawClipLine		equ	$193
DrawClipPix		equ	$194
DrawClipRect		equ	$195
DrawFkey		equ	$1A5
DrawIcon		equ	$1A6
DrawLine		equ	$1A7
DrawMultiLines		equ	$196
DrawPix		equ	$1A8
DrawStr		equ	$1A9
DrawStrWidth		equ	$197
DrawStrWidthP		equ	$3EE
FillLines2		equ	$199
FillTriangle		equ	$198
FontCharWidth		equ	$190
FontGetSys		equ	$18E
FontSetSys		equ	$18F
GetPix		equ	$19F
LineTo		equ	$19C
MakeScrRect		equ	$42D
MoveTo		equ	$19D
PortRestore		equ	$1A3
PortSet		equ	$1A2
QScrRectOverlap		equ	$18D
RestoreScrState		equ	$1A1
SaveScrState		equ	$1A0
ScrRect		equ	$2F
ScrRectFill		equ	$189
ScrRectOverlap		equ	$18A
ScrRectScroll		equ	$18B
ScrRectShift		equ	$18C
ScrToHome		equ	$2E
ScrToWin		equ	$2D
SetCurAttr		equ	$19A
SetCurClip		equ	$19B
CkValidDelta		equ	$1C3
CptDeltax		equ	$1C1
CptDeltay		equ	$1C2
StepCk		equ	$1DD
gdb_len		equ	$1E0
gdb_recall		equ	$1E2
gdb_store		equ	$1E1
gr_active		equ	$10B
gr_flags		equ	$463
gr_other		equ	$10C
rngLen		equ	$1DF
HS_chopFIFO		equ	$23C
HS_countFIFO		equ	$23D
HS_deleteFIFONode		equ	$23E
HS_freeAll		equ	$23F
HS_freeFIFONode		equ	$240
HS_getAns		equ	$241
HS_getEntry		equ	$242
HS_getFIFONode		equ	$243
HS_newFIFONode		equ	$245
HS_popEStack		equ	$244
HS_pushFIFONode		equ	$246
HomeAlone		equ	$506
HomeExecute		equ	$10E
HomePushEStack		equ	$10F
GKeyDown		equ	$17F
GKeyFlush		equ	$180
GKeyIn		equ	$17E
GetAlphaStatus		equ	$164
KB_AUTOREPEAT		equ	$15C
KeyYesOrNo		equ	$3EB
OSFastArrows		equ	$15C
OSGetStatKeys		equ	$299
OSInitBetweenKeyDelay		equ	$249
OSInitKeyInitDelay		equ	$248
SetAlphaStatus		equ	$163
alphaLockOff		equ	$482
alphaLockOn		equ	$481
kbhit		equ	$52
ngetchx		equ	$51
pushkey		equ	$50
restoreAlphaLock		equ	$483
LIO_Get		equ	$57
LIO_GetMultiple		equ	$59
LIO_Receive		equ	$58
LIO_RecvData		equ	$5B
LIO_Send		equ	$56
LIO_SendData		equ	$5A
LIO_SendProduct		equ	$253
OSCheckSilentLink		equ	$24A
OSLinkClose		equ	$24E
OSLinkCmd		equ	$24B
OSLinkOpen		equ	$24D
OSLinkReset		equ	$24C
OSLinkTxQueueActive		equ	$252
OSLinkTxQueueInquire		equ	$251
OSReadLinkBlock		equ	$24F
OSWriteLinkBlock		equ	$250
getcalc		equ	$54
sendcalc		equ	$55
_memset		equ	$27B
memchr		equ	$273
memcmp		equ	$270
memcpy		equ	$26A
memmove		equ	$26B
memset		equ	$27C
memucmp		equ	$3CC
DynMenuAdd		equ	$3F1
DynMenuChange		equ	$3F0
FKeyI_H		equ	$592
MenuAddIcon		equ	$42
MenuAddText		equ	$41
MenuBegin		equ	$36
MenuCheck		equ	$37
MenuEnd		equ	$38
MenuFlags		equ	$3F4
MenuGetTopRedef		equ	$40
MenuItemDef		equ	$3F3
MenuKey		equ	$39
MenuLoad		equ	$3F2
MenuNew		equ	$43
MenuOff		equ	$419
MenuOn		equ	$3A
MenuPopup		equ	$3B
MenuSubStat		equ	$3C
MenuTopRedef		equ	$3F
MenuTopSelect		equ	$3E
MenuTopStat		equ	$3D
MenuUpdate		equ	$49
PopupAddText		equ	$44
PopupBegin		equ	$3F5
PopupBeginDo		equ	$3F6
PopupClear		equ	$46
PopupDo		equ	$47
PopupNew		equ	$45
PopupText		equ	$48
QMenuTopSelect		equ	$41A
VarCreateFolderPopup		equ	$28F
MD5Done		equ	$257
BN_power17Mod		equ	$122
BN_powerMod		equ	$123
BN_prodMod		equ	$124
MD5Final		equ	$256
MD5Init		equ	$254
MD5Update		equ	$255
cdecrypt		equ	$127
longjmp		equ	$267
setjmp		equ	$266
ST_angle		equ	$E0
ST_batt		equ	$E1
ST_busy		equ	$E2
ST_eraseHelp		equ	$E3
ST_folder		equ	$E4
ST_graph		equ	$E5
ST_helpMsg		equ	$E6
ST_modKey		equ	$E7
ST_precision		equ	$E8
ST_progressBar		equ	$4D8
ST_progressDismiss		equ	$4DB
ST_progressIncrement		equ	$4DA
ST_progressUpdate		equ	$4D9
ST_readOnly		equ	$E9
ST_refDsp		equ	$EB
ST_stack		equ	$EA
sprintf		equ	$53
cmpstri		equ	$16F
strcat		equ	$26E
strchr		equ	$274
strcmp		equ	$271
strcpy		equ	$26C
strcspn		equ	$275
strerror		equ	$27D
stricmp		equ	$407
strlen		equ	$27E
strncat		equ	$26F
strncmp		equ	$272
strncpy		equ	$26D
strpbrk		equ	$276
strrchr		equ	$277
strspn		equ	$278
strstr		equ	$279
strtok		equ	$27A
AB_getGateArrayVersion		equ	$15E
AB_prodid		equ	$29D
AB_prodname		equ	$29E
AB_serno		equ	$29F
CB_fetchTEXT		equ	$C2
CB_replaceTEXT		equ	$C1
CU_cursorState		equ	$503
CU_restore		equ	$C3
CU_start		equ	$C4
CU_stop		equ	$C5
EX_getBasecodeParmBlock		equ	$5DA
EX_patch		equ	$15A
FiftyMsecTick		equ	$4FC
HelpKeys		equ	$181
NeedStack		equ	$A4
OSCheckBreak		equ	$EC
OSClearBreak		equ	$ED
OSContrastDn		equ	$297
OSContrastUp		equ	$296
OSDisableBreak		equ	$EF
OSEnableBreak		equ	$EE
OSFreeTimer		equ	$F1
OSRegisterTimer		equ	$F0
OSReset		equ	$294
OSSetSR		equ	$29C
OSTimerCurVal		equ	$F2
OSTimerExpired		equ	$F3
OSTimerRestart		equ	$F4
OSdequeue		equ	$3AA
OSenqueue		equ	$3A9
OSqclear		equ	$3AD
OSqhead		equ	$3AC
OSqinquire		equ	$3AB
QModeKey		equ	$182
QSysKey		equ	$183
ReleaseDate		equ	$43F
ReleaseVersion		equ	$440
SumStoChkMem		equ	$295
WordInList		equ	$184
XR_stringPtr		equ	$293
idle		equ	$29B
off		equ	$29A
LOC_formatDate		equ	$590
LOC_getLocalDateFormat		equ	$58F
LOC_localVersionDate		equ	$591
OSOnBreak		equ	$46E
TE_checkSlack		equ	$A6
TE_close		equ	$A5
TE_empty		equ	$A7
TE_focus		equ	$A8
TE_handleEvent		equ	$A9
TE_indicateReadOnly		equ	$AA
TE_isBlank		equ	$AB
TE_open		equ	$AC
TE_openFixed		equ	$AD
TE_pasteText		equ	$AE
TE_reopen		equ	$AF
TE_reopenPlain		equ	$B0
TE_select		equ	$B1
TE_shrinkWrap		equ	$B2
TE_unfocus		equ	$B3
TE_updateCommand		equ	$B4
acos		equ	$F5
acosh		equ	$288
asin		equ	$F6
asinh		equ	$287
atan		equ	$F7
atan2		equ	$F8
atanh		equ	$289
cacos		equ	$13A
cacosh		equ	$13D
casin		equ	$13B
casinh		equ	$13E
catan		equ	$13C
catanh		equ	$13F
ccos		equ	$140
ccosh		equ	$143
ceil		equ	$105
cexp		equ	$149
cln		equ	$147
clog10		equ	$148
cos		equ	$F9
cosh		equ	$FC
csin		equ	$141
csinh		equ	$144
csqrt		equ	$146
ctan		equ	$142
ctanh		equ	$145
exp		equ	$FF
fabs		equ	$106
fadd		equ	$B6
fcmp		equ	$BB
fdiv		equ	$B9
float_class		equ	$2FA
floor		equ	$107
flt		equ	$BD
fmod		equ	$108
fmul		equ	$B8
fneg		equ	$BA
fpisanint		equ	$172
fpisodd		equ	$173
frexp10		equ	$2FB
fsub		equ	$B7
is_float_infinity		equ	$2FF
is_float_negative_zero		equ	$300
is_float_positive_zero		equ	$301
is_float_signed_infinity		equ	$302
is_float_transfinite		equ	$303
is_float_unsigned_inf_or_nan		equ	$304
is_float_unsigned_zero		equ	$305
is_inf		equ	$2FF
is_nan		equ	$306
is_nzero		equ	$300
is_pzero		equ	$301
is_sinf		equ	$302
is_transfinite		equ	$303
is_uinf_or_nan		equ	$304
is_uzero		equ	$305
itrig		equ	$28A
log		equ	$100
log10		equ	$101
modf		equ	$102
pow		equ	$103
round12		equ	$174
round12_err		equ	$227
round14		equ	$175
sin		equ	$FA
sincos		equ	$286
sinh		equ	$FD
sqrt		equ	$104
tan		equ	$FB
tanh		equ	$FE
trig		equ	$28B
trunc		equ	$BC
CharNumber		equ	$113
CheckGraphRef		equ	$7D
CountGrFunc		equ	$1D5
CptFuncX		equ	$1B9
CptIndep		equ	$1C9
CptLastIndepDE		equ	$1EF
CreateEmptyList		equ	$1E6
CustomBegin		equ	$14A
CustomEnd		equ	$14C
CustomFree		equ	$150
CustomMenuItem		equ	$14B
DataTypeNames		equ	$43B
EQU_deStatus		equ	$16E
EQU_getNameInfo		equ	$120
EQU_select		equ	$11E
EQU_setStyle		equ	$11F
ERD_dismissNotice		equ	$476
ERD_notice		equ	$475
ER_throwFrame		equ	$507
EV_appA		equ	$452
EV_appB		equ	$453
EV_appSide		equ	$458
EV_currentApp		equ	$45C
EV_errorCode		equ	$46D
EV_flags		equ	$5DF
EV_quit		equ	$48E
EV_runningApp		equ	$45D
FLOATTAB		equ	$464
FindFunc		equ	$1C5
FindGrFunc		equ	$1C6
FirstNonblank		equ	$4DE
FirstSeqPlot		equ	$1D6
Float0Index		equ	$5D0
Float1Index		equ	$5D1
FloatExp1Index		equ	$5D4
FloatHalfIndex		equ	$5E0
FloatMinus1Index		equ	$5D2
FloatPiIndex		equ	$5D3
ForceFloat		equ	$47D
FuncLineFlt		equ	$1BF
GM_Derivative		equ	$1B0
GM_DistArc		equ	$1B1
GM_Inflection		equ	$1AD
GM_Integrate		equ	$1AC
GM_Intersect		equ	$1AB
GM_Math1		equ	$1AF
GM_Shade		equ	$1B2
GM_TanLine		equ	$1AE
GM_Value		equ	$1AA
GR3_addContours		equ	$1FB
GR3_freeDB		equ	$1FD
GR3_handleEvent		equ	$1FE
GR_Pan		equ	$1C4
GS_PlotAll		equ	$202
GS_PlotTrace		equ	$201
GT_BackupToScr		equ	$20C
GT_CalcDepVals		equ	$20D
GT_CenterGraphCursor		equ	$20E
GT_CursorKey		equ	$20F
GT_DE_Init_Conds		equ	$22A
GT_DspFreeTraceCoords		equ	$210
GT_DspMsg		equ	$212
GT_DspTraceCoords		equ	$211
GT_Error		equ	$213
GT_Format		equ	$214
GT_FreeTrace		equ	$215
GT_IncXY		equ	$216
GT_KeyIn		equ	$217
GT_Open		equ	$21B
GT_PrintCursor		equ	$229
GT_QFloatCursorsInRange		equ	$218
GT_Regraph		equ	$219
GT_Regraph_if_neccy		equ	$21A
GT_SaveAs		equ	$21C
GT_SelFunc		equ	$21D
GT_SetCursorXY		equ	$21F
GT_SetGraphRange		equ	$21E
GT_Set_Graph_Format		equ	$228
GT_ShowMarkers		equ	$220
GT_Trace		equ	$221
GT_ValidGraphRanges		equ	$222
GT_WinBound		equ	$223
GT_WinCursor		equ	$224
GXcoord		equ	$226
GYcoord		equ	$225
GZ_Decimal		equ	$22D
GZ_Fit		equ	$22E
GZ_InOut		equ	$22F
GZ_Integer		equ	$230
GZ_Previous		equ	$231
GZ_Recall		equ	$232
GZ_SetFactors		equ	$233
GZ_Square		equ	$234
GZ_Standard		equ	$235
GZ_Stat		equ	$236
GZ_Store		equ	$237
GZ_Trig		equ	$238
GetStatValue		equ	$11B
GetSysGraphRef		equ	$8A
GetTagStr		equ	$46C
GrAxes		equ	$1B7
GrClipLine		equ	$1C0
GrLineFlt		equ	$1BE
GraphActivate		equ	$1FC
GraphOrTableCmd		equ	$1E4
IM_re_tol		equ	$5C1
InitDEAxesRng		equ	$1E9
InitDEMem		equ	$1EA
InitTimeSeq		equ	$1D9
Integer0Index		equ	$5CD
Integer1Index		equ	$5CE
Integer2Index		equ	$5E1
IntegerMinus1Index		equ	$5CF
LIO_SendIdList		equ	$3D0
LoadSymFromFindHandle		equ	$281
NG_cleanup_graph_fun		equ	$262
NG_control		equ	$466
NG_setup_graph_fun		equ	$261
NG_such_that_index		equ	$5D7
OO_AppNameToACB		equ	$406
OO_CondGetAttr		equ	$3FA
OO_Deref		equ	$3FB
OO_Destroy		equ	$423
OO_DestroyAll		equ	$4F5
OO_GetAppAttr		equ	$3FC
OO_GetAttr		equ	$3FD
OO_HasAttr		equ	$3FE
OO_InstallAppHook		equ	$490
OO_InstallAppHookByName		equ	$492
OO_InstallSystemHook		equ	$404
OO_New		equ	$3FF
OO_NextACB		equ	$402
OO_PrevACB		equ	$403
OO_SetAppAttr		equ	$400
OO_SetAttr		equ	$401
OO_SuperFrame		equ	$48F
OO_UninstallAppHook		equ	$491
OO_UninstallAppHookByName		equ	$493
OO_UninstallSystemHook		equ	$405
OO_appGetPublicStorage		equ	$425
OO_appIsMarkedDelete		equ	$426
OO_appMarkDelete		equ	$427
OO_appSetPublicStorage		equ	$429
OO_firstACB		equ	$451
OSCheckLinkOpen		equ	$5E3
OSKeyScan		equ	$298
OSModKeyStatus		equ	$431
ParseSymName		equ	$78
PlotDel		equ	$203
PlotDup		equ	$207
PlotGet		equ	$205
PlotInit		equ	$206
PlotLookup		equ	$209
PlotPut		equ	$204
PlotSize		equ	$208
QActivePlots		equ	$20A
QPlotActive		equ	$20B
QSkipGraphErr		equ	$1E7
QstatRcl		equ	$40B
RAtionalize_tol		equ	$5C0
RM_Type		equ	$5DC
ReallocExprStruct		equ	$14D
Regraph		equ	$1B6
SP_Define		equ	$110
ST_flags		equ	$443
ScrRectDivide		equ	$28
SearchExprStruct		equ	$14E
SetGraphMode		equ	$1B5
TIOS_EV_getAppID		equ	$454
TIOS_abs		equ	$5BA
TIOS_div		equ	$5BB
TIOS_labs		equ	$5BC
TIOS_ldiv		equ	$5BD
TIOS_strtol		equ	$4FF
TokenizeName		equ	$3E9
UpdateWindows		equ	$2B
ValidateStore		equ	$8D
VarGraphRefBitsClear		equ	$268
VarOptList		equ	$444
VarSaveTitle		equ	$290
VarStoreLink		equ	$87
XCvtFtoP		equ	$1BD
XCvtPtoF		equ	$1BA
YCvtFtoP		equ	$1BC
YCvtFtoWin		equ	$1B3
YCvtPtoF		equ	$1BB
_bcd_math		equ	$B5
_ds16u16		equ	$2A4
_ds32s32		equ	$2A8
_du16u16		equ	$2A6
_du32u32		equ	$2AA
_ms16u16		equ	$2A5
_ms32s32		equ	$2A9
_mu16u16		equ	$2A7
_mu32u32		equ	$2AB
are_units_consistent		equ	$40F
assign_between		equ	$2AC
ck_valid_float		equ	$1E5
cleanup_de_mem		equ	$1EC
cleanup_seq_mem		equ	$1D7
clear_error_context		equ	$44C
compare_numbers		equ	$50D
convert_to_TI_92		equ	$258
cpt_gr_fun		equ	$1D1
cpt_gr_param		equ	$1D2
cpt_gr_polar		equ	$1D3
deStepCk		equ	$1F9
de_initRes		equ	$1F0
de_loop		equ	$1EB
de_rng_no_graph		equ	$2A2
delete_list_element		equ	$2AF
did_map_aggregate_arg		equ	$5B8
did_push_approx_inflection_point		equ	$5B0
did_push_divide_units		equ	$3AE
did_push_lincf		equ	$572
did_push_var_val		equ	$2AD
divide_top		equ	$527
does_push_fetch		equ	$2AE
dv_create_graph_titles		equ	$117
dv_findColumn		equ	$119
errno		equ	$5D9
estack_max_index		equ	$5BF
estack_to_float		equ	$469
execute_graph_func		equ	$1D0
fix_loop_displacements		equ	$170
freeIdList		equ	$4D6
gen_version		equ	$259
get_lb		equ	$516
get_list_indices		equ	$2B8
get_matrix_indices		equ	$2B9
get_ub		equ	$517
grFuncName		equ	$1C7
gr_CptIndepInc		equ	$1CA
gr_DelFolder		equ	$1CC
gr_DispLabels		equ	$1E3
gr_add_fldpic		equ	$1F6
gr_ck_solvergraph		equ	$1FA
gr_de_axes_lbl		equ	$1F2
gr_de_value		equ	$1ED
gr_del_locals		equ	$1CB
gr_del_vars_in_folder		equ	$1F1
gr_delete_fldpic		equ	$1F4
gr_execute_de		equ	$1F3
gr_execute_seq		equ	$1D4
gr_find_de_result		equ	$1E8
gr_find_el		equ	$1F8
gr_find_func_index		equ	$1EE
gr_initCondName		equ	$1C8
gr_openFolder		equ	$1CD
gr_remove_fldpic		equ	$1F5
gr_seq_value		equ	$1DC
gr_stopic		equ	$1F7
gr_xres_pixel		equ	$1B8
hStrAppend		equ	$45F
has_different_variable		equ	$5A0
has_unit_base		equ	$3AF
index_after_match_endtag		equ	$2B1
index_false		equ	$5D6
index_if_pushed_binomial_info		equ	$5A1
index_if_pushed_qquad_info		equ	$5A2
index_reductum_with_tag_base		equ	$59F
index_rmng_factor		equ	$565
index_rmng_fctrs_start_base		equ	$564
index_rmng_fctrs_start_base_tag		equ	$563
index_rmng_fctrs_start_fctr_tag		equ	$562
index_true		equ	$5D5
init_list_indices		equ	$2BA
init_matrix_indices		equ	$2BB
init_unit_system		equ	$3B0
is_cFloat_agg		equ	$465
is_complex_Float		equ	$48B
is_equivalent_to		equ	$578
is_executable		equ	$25A
is_neg_lead_numr_coef_re_part		equ	$56D
is_pathname		equ	$3C6
is_pos_int_and_eq_quantum		equ	$509
is_real		equ	$5A9
is_reciprocal_of_quantum		equ	$50A
is_term_improper		equ	$556
is_undefined		equ	$5B7
is_units_term		equ	$3B1
lead_conjunct_factor_index		equ	$580
lead_disjunct_term_index		equ	$57E
linear_degree		equ	$571
next_token		equ	$3C7
next_var_or_kernel_index		equ	$56E
nonblank		equ	$3C8
or_onto_top		equ	$57B
pSymPG		equ	$430
paint_all_except		equ	$11D
primary_tag_list		equ	$467
push0		equ	$4E7
push1		equ	$4E8
push_ans_entry		equ	$2B0
push_auto_units_conversion		equ	$3B2
push_but_conjunct_factor		equ	$582
push_but_factor		equ	$561
push_but_term		equ	$56A
push_constant_factors		equ	$55D
push_constant_terms		equ	$566
push_dependent_factors		equ	$55F
push_dependent_terms		equ	$568
push_float_qr_fact		equ	$2BC
push_format		equ	$315
push_gcd_then_cofactors		equ	$59E
push_independent_factors		equ	$560
push_independent_terms		equ	$569
push_lu_fact		equ	$2BD
push_make_proper		equ	$557
push_minus_recip_of_quantum		equ	$510
push_mrow_aux		equ	$31B
push_negate_quantum_as_negint		equ	$4F1
push_nonconstant_factors		equ	$55E
push_nonconstant_terms		equ	$567
push_nonnumeric_factors		equ	$55C
push_parse_prgm_or_func_text		equ	$3C9
push_pi		equ	$512
push_pi_on_quantum		equ	$513
push_poly_deg_in_var_or_kernel		equ	$570
push_poly_qr		equ	$59D
push_quantum_as_nonnegative_int		equ	$50E
push_quantum_pair_as_pos_frac		equ	$511
push_reciprocal		equ	$597
push_reciprocal_of_quantum		equ	$50F
push_simplify_statements		equ	$44F
push_sq_matrix_to_whole_number		equ	$3C0
push_standardize		equ	$558
push_symbolic_qr_fact		equ	$2BE
push_trig		equ	$535
push_unit_system_list		equ	$3B3
push_user_func		equ	$2B3
push_var		equ	$3CB
push_var_kern_tail		equ	$56F
push_zero_partial_column		equ	$3C2
raise_to_top		equ	$529
recall_data_var		equ	$112
remaining_conjuncts_index		equ	$581
remaining_disjuncts_index		equ	$57F
replace_top2_with_and		equ	$57A
replace_top2_with_difference		equ	$51C
replace_top2_with_imre		equ	$559
replace_top2_with_or		equ	$57C
replace_top2_with_pow		equ	$52A
replace_top2_with_prod		equ	$523
replace_top2_with_ratio		equ	$528
replace_top2_with_sum		equ	$519
replace_top_with_post_simplified		equ	$5B6
replace_top_with_reciprocal		equ	$52D
run_one_seq		equ	$1DB
seqStepCk		equ	$1DE
seqWebInit		equ	$1DA
setup_more_graph_fun		equ	$1CE
setup_unit_system		equ	$3B4
sf_width		equ	$4D3
spike_chk_gr_dirty		equ	$11A
spike_geo_titles		equ	$115
spike_in_editor		equ	$116
spike_optionD		equ	$114
spike_titles_in_editor		equ	$118
statEnd		equ	$409
statFree		equ	$40A
statStart		equ	$408
store_data_var		equ	$111
store_func_def		equ	$2B4
store_to_subscripted_element		equ	$2B5
time_loop		equ	$1D8
times_top		equ	$522
tokenize_if_TI_92_or_text		equ	$265
unlock_more_graph_fun		equ	$1CF
AddSymToFolder		equ	$70
CheckLinkLockFlag		equ	$7F
CheckReservedName		equ	$8B
CheckSysFunc		equ	$89
ClearUserDef		equ	$7E
DerefSym		equ	$79
EM_moveSymFromExtMem		equ	$161
EM_moveSymToExtMem		equ	$162
EM_twinSymFromExtMem		equ	$166
EX_stoBCD		equ	$C0
FindSymInFolder		equ	$71
FolderAdd		equ	$64
FolderAddTemp		equ	$73
FolderClear		equ	$66
FolderCount		equ	$6B
FolderCur		equ	$65
FolderCurTemp		equ	$72
FolderDel		equ	$66
FolderDelAllTemp		equ	$75
FolderDelTemp		equ	$74
FolderFind		equ	$67
FolderGetCur		equ	$68
FolderOp		equ	$69
FolderRename		equ	$6A
GetDataType		equ	$435
GetFuncPrgmBodyPtr		equ	$43A
HSYMtoName		equ	$7A
HSymDel		equ	$5F
IsMainFolderStr		equ	$77
MakeHSym		equ	$282
QSysProtected		equ	$88
ResetSymFlags		equ	$8E
SetOK		equ	$456
SmapTypeStrings		equ	$436
StrToTokN		equ	$7B
SymAdd		equ	$5C
SymAddMain		equ	$5D
SymAddTwin		equ	$27F
SymCmp		equ	$81
SymCpy		equ	$82
SymCpy0		equ	$83
SymDel		equ	$5E
SymDelTwin		equ	$280
SymFind		equ	$60
SymFindFirst		equ	$6C
SymFindFolderName		equ	$6F
SymFindHome		equ	$62
SymFindMain		equ	$61
SymFindNext		equ	$6D
SymFindPrev		equ	$6E
SymFindPtr		equ	$283
SymMove		equ	$63
SymSysVar		equ	$8C
TempFolderName		equ	$76
TokToStrN		equ	$7C
ValidateSymName		equ	$84
VarRecall		equ	$85
VarStore		equ	$86
checkCurrent		equ	$121
partial_len		equ	$11C
DrawStaticButton		equ	$35
DrawWinBorder		equ	$27
FirstWindow		equ	$0
MakeWinRect		equ	$2C
RectWinToScr		equ	$2A
RectWinToWin		equ	$29
SetWinClip		equ	$42E
WinActivate		equ	$1
WinAttr		equ	$2
WinBackground		equ	$4
WinBackupToScr		equ	$3
WinBegin		equ	$5
WinBitmapGet		equ	$6
WinBitmapPut		equ	$7
WinBitmapSize		equ	$8
WinChar		equ	$A
WinCharXY		equ	$9
WinClose		equ	$B
WinClr		equ	$C
WinDeactivate		equ	$D
WinDupStat		equ	$E
WinEllipse		equ	$F
WinFill		equ	$10
WinFillLines2		equ	$11
WinFillTriangle		equ	$12
WinFont		equ	$13
WinGetCursor		equ	$14
WinHeight		equ	$292
WinHide		equ	$15
WinHome		equ	$16
WinLine		equ	$17
WinLineNC		equ	$18
WinLineRel		equ	$1A
WinLineTo		equ	$19
WinMoveCursor		equ	$1B
WinMoveRel		equ	$1D
WinMoveTo		equ	$1C
WinOpen		equ	$1E
WinPixGet		equ	$1F
WinPixSet		equ	$20
WinReOpen		equ	$22
WinRect		equ	$21
WinScrollH		equ	$23
WinScrollV		equ	$24
WinStr		equ	$25
WinStrXY		equ	$26
WinWidth		equ	$291
BitmapSizeExt		equ	$3ED
RectWinToScrExt		equ	$415
WinBeginPaint		equ	$500
WinBitmapSizeExt		equ	$411
WinEndPaint		equ	$501
WinLineExt		equ	$47C
WinRemove		equ	$414
WinStrXYWrap		equ	$5DB
WinToScr		equ	$42F
NoCallBack		equ	$31
caddcert		equ	$126
cgetvernum		equ	$131
EM_writeToExtMem		equ	$168
OSVRegisterTimer		equ	$284
OSVFreeTimer		equ	$285

ScreenClear equ $19e
bcdadd equ $b6
bcdcmp equ $bb
bcddiv equ $b9
bcdbcd equ $bd
bcdmul equ $b8
bcdneg equ $ba
bcdsub equ $b7
bcdlong equ $bc

ST_showHelp		equ	$E6
DrawTo		equ	$19C
flush_link		equ	$24D
receive		equ	$24F
reset_link		equ	$24C
transmit		equ	$250
tx_free		equ	$252

SymFindFoldername  equ $6F
MakeHsym  equ $282

LCD_MEM equ $4c00
doorsos::main_lcd equ LCD_MEM
doorsos::globals equ $4c00

ROM_CALL macro
 move.l $C8,a4
 move.l \1*4(a4),a4
 jsr (a4)
 endm

ROM_CALL2 macro
 move.l $C8,a4
 move.l \1*4(a4),a4
 endm

inc	MACRO
	addq.\0	#1,\1
	ENDM
INC	MACRO
	addq.\0	#1,\1
	ENDM
dec	MACRO
	subq.\0	#1,\1
	ENDM
DEC	MACRO
	subq.\0	#1,\1
	ENDM


push	MACRO
	move.\0	\1,-(a7)
	ENDM

pop	MACRO
	move.\0	(a7)+,\1
	ENDM
pushm	MACRO
	movem.\0	\1,-(a7)
	ENDM

popm	MACRO
	movem.\0	(a7)+,\1
	ENDM

PUSH	MACRO
	move.\0	\1,-(a7)
	ENDM

POP	MACRO
	move.\0	(a7)+,\1
	ENDM
PUSHM	MACRO
	movem.\0	\1,-(a7)
	ENDM

POPM	MACRO
	movem.\0	(a7)+,\1
	ENDM

doorsos::SYM_ENTRY.name equ 0
doorsos::SYM_ENTRY.flags equ 8
doorsos::SYM_ENTRY.hVal equ $c
doorsos::NULL equ 0
doorsos::H_NULL equ 0
doorsos::RAND_MAX equ $7fff
ACTIVITY_IDLE equ 0
ACTIVITY_BUSY equ 1
ACTIVITY_PAUSED equ 2
ER_STOP equ 2
ER_DIMENSION equ 230
ER_MEMORY equ 670
ER_MEMORY_DML equ 810
UNDEFINED_TAG equ $2a
LIST_TAG equ $d9
MATRIX_TAG equ $db
END_TAG equ $e5
CALC_TI89 equ 0
CALC_TI92PLUS equ 1
_nostub
_ti89
_ti92plus