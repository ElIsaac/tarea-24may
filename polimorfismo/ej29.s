	.file	"ej29.cpp"
	.text
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.text._ZN1XC2Ev,"axG",@progbits,_ZN1XC5Ev,comdat
	.align 2
	.weak	_ZN1XC2Ev
	.type	_ZN1XC2Ev, @function
_ZN1XC2Ev:
.LFB1762:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	16+_ZTV1X(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1X14funcionVirtualEv
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1762:
	.size	_ZN1XC2Ev, .-_ZN1XC2Ev
	.weak	_ZN1XC1Ev
	.set	_ZN1XC1Ev,_ZN1XC2Ev
	.section	.rodata
.LC0:
	.string	"X::funcionVirtual()"
	.section	.text._ZN1X14funcionVirtualEv,"axG",@progbits,_ZN1X14funcionVirtualEv,comdat
	.align 2
	.weak	_ZN1X14funcionVirtualEv
	.type	_ZN1X14funcionVirtualEv, @function
_ZN1X14funcionVirtualEv:
.LFB1764:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	.LC0(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1764:
	.size	_ZN1X14funcionVirtualEv, .-_ZN1X14funcionVirtualEv
	.section	.text._ZN1XD2Ev,"axG",@progbits,_ZN1XD5Ev,comdat
	.align 2
	.weak	_ZN1XD2Ev
	.type	_ZN1XD2Ev, @function
_ZN1XD2Ev:
.LFB1766:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	leaq	16+_ZTV1X(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1766:
	.size	_ZN1XD2Ev, .-_ZN1XD2Ev
	.weak	_ZN1XD1Ev
	.set	_ZN1XD1Ev,_ZN1XD2Ev
	.section	.text._ZN1XD0Ev,"axG",@progbits,_ZN1XD5Ev,comdat
	.align 2
	.weak	_ZN1XD0Ev
	.type	_ZN1XD0Ev, @function
_ZN1XD0Ev:
.LFB1768:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1XD1Ev
	movq	-8(%rbp), %rax
	movl	$8, %esi
	movq	%rax, %rdi
	call	_ZdlPvm@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1768:
	.size	_ZN1XD0Ev, .-_ZN1XD0Ev
	.section	.text._ZN1YC2Ev,"axG",@progbits,_ZN1YC5Ev,comdat
	.align 2
	.weak	_ZN1YC2Ev
	.type	_ZN1YC2Ev, @function
_ZN1YC2Ev:
.LFB1770:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1770
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
.LEHB0:
	call	_ZN1XC2Ev
.LEHE0:
	leaq	16+_ZTV1Y(%rip), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
.LEHB1:
	call	_ZN1Y14funcionVirtualEv
.LEHE1:
	jmp	.L8
.L7:
	endbr64
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1XD2Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB2:
	call	_Unwind_Resume@PLT
.LEHE2:
.L8:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1770:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table._ZN1YC2Ev,"aG",@progbits,_ZN1YC5Ev,comdat
.LLSDA1770:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1770-.LLSDACSB1770
.LLSDACSB1770:
	.uleb128 .LEHB0-.LFB1770
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1770
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L7-.LFB1770
	.uleb128 0
	.uleb128 .LEHB2-.LFB1770
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSE1770:
	.section	.text._ZN1YC2Ev,"axG",@progbits,_ZN1YC5Ev,comdat
	.size	_ZN1YC2Ev, .-_ZN1YC2Ev
	.weak	_ZN1YC1Ev
	.set	_ZN1YC1Ev,_ZN1YC2Ev
	.section	.rodata
.LC1:
	.string	"Y::funcionVirtual()"
	.section	.text._ZN1Y14funcionVirtualEv,"axG",@progbits,_ZN1Y14funcionVirtualEv,comdat
	.align 2
	.weak	_ZN1Y14funcionVirtualEv
	.type	_ZN1Y14funcionVirtualEv, @function
_ZN1Y14funcionVirtualEv:
.LFB1772:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	.LC1(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1772:
	.size	_ZN1Y14funcionVirtualEv, .-_ZN1Y14funcionVirtualEv
	.text
	.globl	main
	.type	main, @function
main:
.LFB1773:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1773
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 13, -24
	.cfi_offset 12, -32
	.cfi_offset 3, -40
	movl	$8, %edi
.LEHB3:
	call	_Znwm@PLT
.LEHE3:
	movq	%rax, %rbx
	movl	$1, %r13d
	movq	%rbx, %rdi
.LEHB4:
	call	_ZN1YC1Ev
.LEHE4:
	movq	%rbx, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rdx
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
.LEHB5:
	call	*%rdx
	movq	-40(%rbp), %rax
	testq	%rax, %rax
	je	.L11
	movq	(%rax), %rdx
	addq	$16, %rdx
	movq	(%rdx), %rdx
	movq	%rax, %rdi
	call	*%rdx
.L11:
	movl	$0, %eax
	jmp	.L16
.L15:
	endbr64
	movq	%rax, %r12
	testb	%r13b, %r13b
	je	.L14
	movl	$8, %esi
	movq	%rbx, %rdi
	call	_ZdlPvm@PLT
.L14:
	movq	%r12, %rax
	movq	%rax, %rdi
	call	_Unwind_Resume@PLT
.LEHE5:
.L16:
	addq	$24, %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1773:
	.section	.gcc_except_table,"a",@progbits
.LLSDA1773:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1773-.LLSDACSB1773
.LLSDACSB1773:
	.uleb128 .LEHB3-.LFB1773
	.uleb128 .LEHE3-.LEHB3
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB4-.LFB1773
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L15-.LFB1773
	.uleb128 0
	.uleb128 .LEHB5-.LFB1773
	.uleb128 .LEHE5-.LEHB5
	.uleb128 0
	.uleb128 0
.LLSDACSE1773:
	.text
	.size	main, .-main
	.weak	_ZTV1Y
	.section	.data.rel.ro.local._ZTV1Y,"awG",@progbits,_ZTV1Y,comdat
	.align 8
	.type	_ZTV1Y, @object
	.size	_ZTV1Y, 40
_ZTV1Y:
	.quad	0
	.quad	_ZTI1Y
	.quad	_ZN1Y14funcionVirtualEv
	.quad	_ZN1YD1Ev
	.quad	_ZN1YD0Ev
	.section	.text._ZN1YD2Ev,"axG",@progbits,_ZN1YD5Ev,comdat
	.align 2
	.weak	_ZN1YD2Ev
	.type	_ZN1YD2Ev, @function
_ZN1YD2Ev:
.LFB2306:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	16+_ZTV1Y(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1XD2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2306:
	.size	_ZN1YD2Ev, .-_ZN1YD2Ev
	.weak	_ZN1YD1Ev
	.set	_ZN1YD1Ev,_ZN1YD2Ev
	.section	.text._ZN1YD0Ev,"axG",@progbits,_ZN1YD5Ev,comdat
	.align 2
	.weak	_ZN1YD0Ev
	.type	_ZN1YD0Ev, @function
_ZN1YD0Ev:
.LFB2308:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1YD1Ev
	movq	-8(%rbp), %rax
	movl	$8, %esi
	movq	%rax, %rdi
	call	_ZdlPvm@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2308:
	.size	_ZN1YD0Ev, .-_ZN1YD0Ev
	.weak	_ZTV1X
	.section	.data.rel.ro.local._ZTV1X,"awG",@progbits,_ZTV1X,comdat
	.align 8
	.type	_ZTV1X, @object
	.size	_ZTV1X, 40
_ZTV1X:
	.quad	0
	.quad	_ZTI1X
	.quad	_ZN1X14funcionVirtualEv
	.quad	_ZN1XD1Ev
	.quad	_ZN1XD0Ev
	.weak	_ZTI1Y
	.section	.data.rel.ro._ZTI1Y,"awG",@progbits,_ZTI1Y,comdat
	.align 8
	.type	_ZTI1Y, @object
	.size	_ZTI1Y, 24
_ZTI1Y:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS1Y
	.quad	_ZTI1X
	.weak	_ZTS1Y
	.section	.rodata._ZTS1Y,"aG",@progbits,_ZTS1Y,comdat
	.type	_ZTS1Y, @object
	.size	_ZTS1Y, 3
_ZTS1Y:
	.string	"1Y"
	.weak	_ZTI1X
	.section	.data.rel.ro._ZTI1X,"awG",@progbits,_ZTI1X,comdat
	.align 8
	.type	_ZTI1X, @object
	.size	_ZTI1X, 16
_ZTI1X:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS1X
	.weak	_ZTS1X
	.section	.rodata._ZTS1X,"aG",@progbits,_ZTS1X,comdat
	.type	_ZTS1X, @object
	.size	_ZTS1X, 3
_ZTS1X:
	.string	"1X"
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2309:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L21
	cmpl	$65535, -8(%rbp)
	jne	.L21
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rax
	movq	%rax, %rdx
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
.L21:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2309:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB2310:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2310:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 12.2.0-3ubuntu1) 12.2.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
