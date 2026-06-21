// addr: 0x012aeb10
// name: FUN_012aeb10
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int FUN_012aeb10(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  iVar1 = (param_1 % 1000000) / 100000;
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 3) && (iVar1 != 4)) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}

