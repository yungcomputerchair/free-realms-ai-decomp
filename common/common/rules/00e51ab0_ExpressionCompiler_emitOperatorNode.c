// addr: 0x00e51ab0
// name: ExpressionCompiler_emitOperatorNode
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ExpressionCompiler_emitOperatorNode(int operatorId_, void * rhsNode) */

void __cdecl ExpressionCompiler_emitOperatorNode(int operatorId_,void *rhsNode)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  int iVar3;
  int *unaff_EBX;
  int unaff_EDI;
  
                    /* Builds or folds an expression operator node: it first tries numeric constant
                       folding, otherwise computes operand precedences and emits a packed operator
                       node reference. */
  bVar1 = ExpressionCompiler_foldNumericOperator(operatorId_);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if ((operatorId_ == 0x12) || (operatorId_ == 0x14)) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00e51560();
    }
    iVar3 = FUN_00e51560();
    if ((int)uVar2 < iVar3) {
      if (((*unaff_EBX == 0xc) && ((unaff_EBX[2] & 0x100U) == 0)) &&
         ((int)(uint)*(byte *)(unaff_EDI + 0x32) <= unaff_EBX[2])) {
        *(int *)(unaff_EDI + 0x24) = *(int *)(unaff_EDI + 0x24) + -1;
      }
      if (((*(int *)rhsNode == 0xc) && ((*(uint *)((int)rhsNode + 8) & 0x100) == 0)) &&
         ((int)(uint)*(byte *)(unaff_EDI + 0x32) <= (int)*(uint *)((int)rhsNode + 8))) {
        *(int *)(unaff_EDI + 0x24) = *(int *)(unaff_EDI + 0x24) + -1;
      }
    }
    else {
      if (((*(int *)rhsNode == 0xc) && ((*(uint *)((int)rhsNode + 8) & 0x100) == 0)) &&
         ((int)(uint)*(byte *)(unaff_EDI + 0x32) <= (int)*(uint *)((int)rhsNode + 8))) {
        *(int *)(unaff_EDI + 0x24) = *(int *)(unaff_EDI + 0x24) + -1;
      }
      if (((*unaff_EBX == 0xc) && ((unaff_EBX[2] & 0x100U) == 0)) &&
         ((int)(uint)*(byte *)(unaff_EDI + 0x32) <= unaff_EBX[2])) {
        *(int *)(unaff_EDI + 0x24) = *(int *)(unaff_EDI + 0x24) + -1;
      }
    }
    iVar3 = FUN_00e50d80((iVar3 << 9 | uVar2) << 0xe | operatorId_,
                         *(undefined4 *)(*(int *)(unaff_EDI + 0xc) + 8));
    unaff_EBX[2] = iVar3;
    *unaff_EBX = 0xb;
  }
  return;
}

