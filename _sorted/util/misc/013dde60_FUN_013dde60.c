// addr: 0x013dde60
// name: FUN_013dde60
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_013dde60(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  iVar1 = (param_3 - param_1) / 0x1c;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0x1c + param_1;
    FUN_013ddcd0(param_1,iVar1,iVar2 * 0x38 + param_1);
    FUN_013ddcd0(param_2 + iVar2 * -0x1c,param_2,iVar2 * 0x1c + param_2);
    iVar3 = param_3 + iVar2 * -0x1c;
    FUN_013ddcd0(param_3 + iVar2 * -0x38,iVar3,param_3);
    FUN_013ddcd0(iVar1,param_2,iVar3);
    return;
  }
  FUN_013ddcd0(param_1,param_2,param_3);
  return;
}

