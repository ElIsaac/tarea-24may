	.file	"ej19.cpp"
	.text
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"clase base"
	.section	.text._ZN4Base7mostrarEv,"axG",@progbits,_ZN4Base7mostrarEv,comdat
	.align 2
	.weak	_ZN4Base7mostrarEv
	.type	_ZN4Base7mostrarEv, @function
_ZN4Base7mostrarEv:
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
	.size	_ZN4Base7mostrarEv, .-_ZN4Base7mostrarEv
	.section	.rodata
.LC1:
	.string	"clase derivada"
	.section	.text._ZN8Derivada7mostrarEv,"axG",@progbits,_ZN8Derivada7mostrarEv,comdat
	.align 2
	.weak	_ZN8Derivada7mostrarEv
	.type	_ZN8Derivada7mostrarEv, @function
_ZN8Derivada7mostrarEv:
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
.LFE1762:
	.size	_ZN8Derivada7mostrarEv, .-_ZN8Derivada7mostrarEv
	.section	.text._ZN4BaseC2Ev,"axG",@progbits,_ZN4BaseC5Ev,comdat
	.align 2
	.weak	_ZN4BaseC2Ev
	.type	_ZN4BaseC2Ev, @function
_ZN4BaseC2Ev:
.LFB1766:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	leaq	16+_ZTV4Base(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1766:
	.size	_ZN4BaseC2Ev, .-_ZN4BaseC2Ev
	.weak	_ZN4BaseC1Ev
	.set	_ZN4BaseC1Ev,_ZN4BaseC2Ev
	.section	.text._ZN8DerivadaC2Ev,"axG",@progbits,_ZN8DerivadaC5Ev,comdat
	.align 2
	.weak	_ZN8DerivadaC2Ev
	.type	_ZN8DerivadaC2Ev, @function
_ZN8DerivadaC2Ev:
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
	call	_ZN4BaseC2Ev
	leaq	16+_ZTV8Derivada(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1768:
	.size	_ZN8DerivadaC2Ev, .-_ZN8DerivadaC2Ev
	.weak	_ZN8DerivadaC1Ev
	.set	_ZN8DerivadaC1Ev,_ZN8DerivadaC2Ev
	.text
	.globl	main
	.type	main, @function
main:
.LFB1763:
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
	call	_ZN8DerivadaC1Ev
	movq	%rbx, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	*%rdx
	movq	-24(%rbp), %rax
	testq	%rax, %rax
	je	.L6
	movl	$8, %esi
	movq	%rax, %rdi
	call	_ZdlPvm@PLT
.L6:
	movl	$0, %eax
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1763:
	.size	main, .-main
	.weak	_ZTV8Derivada
	.section	.data.rel.ro.local._ZTV8Derivada,"awG",@progbits,_ZTV8Derivada,comdat
	.align 8
	.type	_ZTV8Derivada, @object
	.size	_ZTV8Derivada, 24
_ZTV8Derivada:
	.quad	0
	.quad	_ZTI8Derivada
	.quad	_ZN8Derivada7mostrarEv
	.weak	_ZTV4Base
	.section	.data.rel.ro.local._ZTV4Base,"awG",@progbits,_ZTV4Base,comdat
	.align 8
	.type	_ZTV4Base, @object
	.size	_ZTV4Base, 24
_ZTV4Base:
	.quad	0
	.quad	_ZTI4Base
	.quad	_ZN4Base7mostrarEv
	.weak	_ZTI8Derivada
	.section	.data.rel.ro._ZTI8Derivada,"awG",@progbits,_ZTI8Derivada,comdat
	.align 8
	.type	_ZTI8Derivada, @object
	.size	_ZTI8Derivada, 24
_ZTI8Derivada:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS8Derivada
	.quad	_ZTI4Base
	.weak	_ZTS8Derivada
	.section	.rodata._ZTS8Derivada,"aG",@progbits,_ZTS8Derivada,comdat
	.align 8
	.type	_ZTS8Derivada, @object
	.size	_ZTS8Derivada, 10
_ZTS8Derivada:
	.string	"8Derivada"
	.weak	_ZTI4Base
	.section	.data.rel.ro._ZTI4Base,"awG",@progbits,_ZTI4Base,comdat
	.align 8
	.type	_ZTI4Base, @object
	.size	_ZTI4Base, 16
_ZTI4Base:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS4Base
	.weak	_ZTS4Base
	.section	.rodata._ZTS4Base,"aG",@progbits,_ZTS4Base,comdat
	.type	_ZTS4Base, @object
	.size	_ZTS4Base, 6
_ZTS4Base:
	.string	"4Base"
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2301:
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
	jne	.L10
	cmpl	$65535, -8(%rbp)
	jne	.L10
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
.L10:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2301:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB2302:
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
.LFE2302:
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
