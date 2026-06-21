// addr: 0x012da690
// name: StdVector28_assign
// subsystem: common/networking/userdata_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall StdVector28_assign(uint param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  void *first;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
                    /* Assigns a vector-like container with 28-byte elements, reusing capacity when
                       possible or destroying/reallocating storage before copying. Evidence:
                       computes counts with /0x1c and is reused by multiple user-data response
                       cloneInto methods. */
  uVar4 = param_2;
  if (param_1 == param_2) {
    return param_1;
  }
  if (*(int *)(param_2 + 4) != 0) {
    iVar6 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4);
    iVar1 = iVar6 >> 0x1f;
    iVar6 = iVar6 / 0x1c + iVar1;
    uVar7 = iVar6 - iVar1;
    if (iVar6 != iVar1) {
      iVar1 = *(int *)(param_1 + 4);
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (*(int *)(param_1 + 8) - iVar1) / 0x1c;
      }
      if (uVar7 <= uVar3) {
        param_2 = param_2 & 0xffffff00;
        first = (void *)FUN_012a9a30(*(undefined4 *)(uVar4 + 4),*(undefined4 *)(uVar4 + 8),iVar1,
                                     param_2,param_2,param_2);
        StdStringRange_destroy(first,*(void **)(param_1 + 8));
        if (*(int *)(uVar4 + 4) == 0) {
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
          return param_1;
        }
        *(int *)(param_1 + 8) =
             *(int *)(param_1 + 4) + ((*(int *)(uVar4 + 8) - *(int *)(uVar4 + 4)) / 0x1c) * 0x1c;
        return param_1;
      }
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(int *)(param_1 + 0xc) - iVar1) / 0x1c;
      }
      if (uVar4 < uVar7) {
        if (iVar1 != 0) {
          FUN_01232d10(iVar1,*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(param_1 + 4));
        }
        uVar5 = FUN_01230e00();
        cVar2 = FUN_012328d0(uVar5);
        if (cVar2 == '\0') {
          return param_1;
        }
        uVar5 = FUN_012d8ad0(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                             *(undefined4 *)(param_1 + 4));
        *(undefined4 *)(param_1 + 8) = uVar5;
        return param_1;
      }
      iVar6 = FUN_01230e00();
      iVar6 = *(int *)(param_2 + 4) + iVar6 * 0x1c;
      FUN_012a9d80(*(int *)(param_2 + 4),iVar6,iVar1);
      uVar5 = FUN_012d8ad0(iVar6,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = uVar5;
      return param_1;
    }
  }
  FUN_012aa320();
  return param_1;
}

