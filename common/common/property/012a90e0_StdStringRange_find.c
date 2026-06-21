// addr: 0x012a90e0
// name: StdStringRange_find
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x012a910a) */

int StdStringRange_find(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
                    /* Linearly searches a contiguous range of std::string objects for a string
                       equal to needle and returns the matching element or last. Evidence: compares
                       SSO/heap string buffers by length and FUN_00f93bd0, advancing by 0x1c bytes
                       per element. */
  if (param_1 == param_2) {
    return param_1;
  }
  uVar1 = *(uint *)(param_3 + 0x14);
  do {
    if (*(uint *)(param_3 + 0x18) < 0x10) {
      iVar4 = param_3 + 4;
    }
    else {
      iVar4 = *(int *)(param_3 + 4);
    }
    uVar2 = *(uint *)(param_1 + 0x14);
    uVar5 = uVar2;
    if (uVar1 <= uVar2) {
      uVar5 = uVar1;
    }
    if (*(uint *)(param_1 + 0x18) < 0x10) {
      iVar3 = param_1 + 4;
    }
    else {
      iVar3 = *(int *)(param_1 + 4);
    }
    iVar4 = FUN_00f93bd0(iVar3,iVar4,uVar5);
  } while ((((iVar4 != 0) || (uVar2 < uVar1)) || (uVar2 != uVar1)) &&
          (param_1 = param_1 + 0x1c, param_1 != param_2));
  return param_1;
}

