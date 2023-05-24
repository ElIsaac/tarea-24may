	.file	"ej28.cpp"
	.text
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"X::funcionVirtual()"
	.section	.text._ZN1X14funcionVirtualEv,"axG",@progbits,_ZN1X14funcionVirtualEv,comdat
	.align 2
	.weak	_ZN1X14funcionVirtualEv
	.type	_ZN1X14funcionVirtualEv, @function
_ZN1X14funcionVirtualEv:
.LFB1761:
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
.LFE1761:
	.size	_ZN1X14funcionVirtualEv, .-_ZN1X14funcionVirtualEv
	.section	.text._ZN1XD2Ev,"axG",@progbits,_ZN1XD5Ev,comdat
	.align 2
	.weak	_ZN1XD2Ev
	.type	_ZN1XD2Ev, @function
_ZN1XD2Ev:
.LFB1763:
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
.LFE1763:
	.size	_ZN1XD2Ev, .-_ZN1XD2Ev
	.weak	_ZN1XD1Ev
	.set	_ZN1XD1Ev,_ZN1XD2Ev
	.section	.text._ZN1XD0Ev,"axG",@progbits,_ZN1XD5Ev,comdat
	.align 2
	.weak	_ZN1XD0Ev
	.type	_ZN1XD0Ev, @function
_ZN1XD0Ev:
.LFB1765:
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
.LFE1765:
	.size	_ZN1XD0Ev, .-_ZN1XD0Ev
	.section	.text._ZN1XC2Ev,"axG",@progbits,_ZN1XC5Ev,comdat
	.align 2
	.weak	_ZN1XC2Ev
	.type	_ZN1XC2Ev, @function
_ZN1XC2Ev:
.LFB1769:
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
.LFE1769:
	.size	_ZN1XC2Ev, .-_ZN1XC2Ev
	.weak	_ZN1XC1Ev
	.set	_ZN1XC1Ev,_ZN1XC2Ev
	.section	.text._ZN1YC2Ev,"axG",@progbits,_ZN1YC5Ev,comdat
	.align 2
	.weak	_ZN1YC2Ev
	.type	_ZN1YC2Ev, @function
_ZN1YC2Ev:
.LFB1771:
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
	call	_ZN1XC2Ev
	leaq	16+_ZTV1Y(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1771:
	.size	_ZN1YC2Ev, .-_ZN1YC2Ev
	.weak	_ZN1YC1Ev
	.set	_ZN1YC1Ev,_ZN1YC2Ev
	.text
	.globl	main
	.type	main, @function
main:
.LFB1766:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movl	$8, %edi
	call	_Znwm@PLT
	movq	%rax, %rbx
	movq	$0, (%rbx)
	movq	%rbx, %rdi
	call	_ZN1YC1Ev
	movq	%rbx, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	*%rdx
	movq	-24(%rbp), %rax
	testq	%rax, %rax
	je	.L7
	movq	(%rax), %rdx
	addq	$16, %rdx
	movq	(%rdx), %rdx
	movq	%rax, %rdi
	call	*%rdx
.L7:
	movl	$0, %eax
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1766:
	.size	main, .-main
	.weak	_ZTV1Y
	.section	.data.rel.ro.local._ZTV1Y,"awG",@progbits,_ZTV1Y,comdat
	.align 8
	.type	_ZTV1Y, @object
	.size	_ZTV1Y, 40
_ZTV1Y:
	.quad	0
	.quad	_ZTI1Y
	.quad	_ZN1X14funcionVirtualEv
	.quad	_ZN1YD1Ev
	.quad	_ZN1YD0Ev
	.section	.text._ZN1YD2Ev,"axG",@progbits,_ZN1YD5Ev,comdat
	.align 2
	.weak	_ZN1YD2Ev
	.type	_ZN1YD2Ev, @function
_ZN1YD2Ev:
.LFB2305:
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
.LFE2305:
	.size	_ZN1YD2Ev, .-_ZN1YD2Ev
	.weak	_ZN1YD1Ev
	.set	_ZN1YD1Ev,_ZN1YD2Ev
	.section	.text._ZN1YD0Ev,"axG",@progbits,_ZN1YD5Ev,comdat
	.align 2
	.weak	_ZN1YD0Ev
	.type	_ZN1YD0Ev, @function
_ZN1YD0Ev:
.LFB2307:
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
.LFE2307:
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
.LFB2308:
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
	jne	.L13
	cmpl	$65535, -8(%rbp)
	jne	.L13
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
.L13:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2308:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB2309:
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
.LFE2309:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
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
