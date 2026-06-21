// addr: 0x010bcf60
// name: FUN_010bcf60
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __thiscall FUN_010bcf60(void *param_1,float *param_2,float *param_3,int param_4)

{
  undefined1 uVar1;
  uint connectToNode_;
  uint uVar2;
  uint connectToNode__00;
  uint uVar3;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  connectToNode_ = PathGraph_addNodeFromDescriptor(param_1,param_2);
  uVar2 = PathGraph_addNodeWithConnection(param_1,param_2,connectToNode_);
  connectToNode__00 = PathGraph_addNodeFromDescriptor(param_1,param_3);
  uVar3 = PathGraph_addNodeWithConnection(param_1,param_3,connectToNode__00);
  uVar1 = FUN_010bbdc0(uVar2,uVar3,param_4);
  if (0 < *(int *)(param_4 + 0xc)) {
    FUN_008c9f30();
  }
  FUN_010bc210(uVar2);
  FUN_010bc210(connectToNode_);
  FUN_010bc210(uVar3);
  FUN_010bc210(connectToNode__00);
  return uVar1;
}

