	.file	"fputc.c"
#NO_APP
	.text
tigcc_compiled.:
#APP
	.set _A_LINE,0xA000
#NO_APP
	.text
	.even
	.globl	fputc
fputc:
	movm.l #0x1c30,-(%sp)
	move.w 24(%sp),%d4
	move.l 26(%sp),%a3
	move.w 10(%a3),%d1
	move.w %d1,%d3
	lsr.w #6,%d3
	eor.w #1,%d3
	and.w #1,%d3
	move.l 4(%a3),%a2
	move.l %a2,%d5
	move.w %d1,%d0
	and.w #16,%d0
	moveq.l #-1,%d2
	tst.w %d0
	jbne .L1
	move.w %d1,%d0
	and.w #2,%d0
	jbne .L3
	or.w #16,%d1
	move.w %d1,10(%a3)
	jbra .L1
	.even
.L3:
	move.w (%a2),%d0
	add.w #10,%d0
	and.l #0xFFFF,%d0
	cmp.l 14(%a3),%d0
	jbls .L4
	move.l 200.w,%a0
	move.w 8(%a3),-(%sp)
	move.l 636(%a0),%a0
	jbsr (%a0)
	move.l 200.w,%a0
	clr.l %d0
	move.w 18(%a3),%d0
	add.l 14(%a3),%d0
	move.l %d0,14(%a3)
	move.l %d0,-(%sp)
	move.w 8(%a3),-(%sp)
	move.l 628(%a0),%a0
	jbsr (%a0)
	addq.l #8,%sp
	tst.w %d0
	jbne .L5
	or.w #16,10(%a3)
	moveq.l #-1,%d2
	jbra .L1
	.even
.L5:
	move.l 200.w,%a0
	move.w 8(%a3),-(%sp)
	move.l 612(%a0),%a0
	jbsr (%a0)
	move.l %a0,4(%a3)
	move.l %a0,%a2
	move.l %a0,%d0
	sub.l %d5,%d0
	add.l %d0,(%a3)
	addq.l #2,%sp
.L4:
	move.w 10(%a3),%d0
	and.w #32,%d0
	jbeq .L6
	addq.w #1,(%a2)
.L6:
	cmp.w #10,%d4
	jbne .L7
	tst.w %d3
	jbeq .L7
	moveq.l #13,%d4
.L7:
	move.l (%a3),%a0
	move.b %d4,(%a0)
	addq.l #1,(%a3)
	cmp.w #13,%d4
	jbne .L8
	tst.w %d3
	jbeq .L8
	move.l %a3,-(%sp)
	move.w #32,-(%sp)
	jbsr fputc
	addq.l #6,%sp
.L8:
	clr.l %d0
	move.w (%a2),%d0
	add.l %a2,%d0
	move.l (%a3),%a1
	tst.w %d3
	jbne .L11
	addq.l #2,%d0
.L11:
	cmp.l %d0,%a1
	jbne .L10
	or.w #32,10(%a3)
	tst.w %d3
	jbeq .L10
	clr.b (%a1)
	move.l (%a3),%a0
	move.b #-32,1(%a0)
.L10:
	move.w %d4,%d2
.L1:
	move.w %d2,%d0
	movm.l (%sp)+,#0xc38
	rts
