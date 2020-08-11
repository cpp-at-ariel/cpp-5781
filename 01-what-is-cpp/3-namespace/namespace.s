	.text
	.file	"namespace.cpp"
	.globl	main                    # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	$0, -4(%rbp)
	movl	_ZN3abc1xE, %eax
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc
                                        # -- End function
	.type	_ZN3abc1xE,@object      # @_ZN3abc1xE
	.data
	.globl	_ZN3abc1xE
	.p2align	2
_ZN3abc1xE:
	.long	123                     # 0x7b
	.size	_ZN3abc1xE, 4

	.type	_ZN3abc3xyz1wE,@object  # @_ZN3abc3xyz1wE
	.globl	_ZN3abc3xyz1wE
	.p2align	2
_ZN3abc3xyz1wE:
	.long	5                       # 0x5
	.size	_ZN3abc3xyz1wE, 4

	.type	_ZN3def1xE,@object      # @_ZN3def1xE
	.globl	_ZN3def1xE
	.p2align	2
_ZN3def1xE:
	.long	456                     # 0x1c8
	.size	_ZN3def1xE, 4

	.section	".linker-options","e",@llvm_linker_options

	.ident	"clang version 9.0.1-+20191211110317+c1a0a213378-1~exp1~20191211221711.104 "
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.addrsig_sym _ZN3abc1xE
