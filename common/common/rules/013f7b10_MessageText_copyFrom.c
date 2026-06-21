// addr: 0x013f7b10
// name: MessageText_copyFrom
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall MessageText_copyFrom(uint param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
                    /* Copies one MessageText value into another, including vector/string payloads
                       with exception-safe cleanup. */
  uVar5 = param_2;
  if (param_1 == param_2) {
    return param_1;
  }
  if (*(int *)(param_2 + 4) != 0) {
    iVar6 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4);
    iVar4 = iVar6 >> 0x1f;
    iVar6 = iVar6 / 0x38 + iVar4;
    uVar7 = iVar6 - iVar4;
    if (iVar6 != iVar4) {
      iVar4 = *(int *)(param_1 + 4);
      if (iVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (*(int *)(param_1 + 8) - iVar4) / 0x38;
      }
      if (uVar7 <= uVar2) {
        param_2 = param_2 & 0xffffff00;
        uVar3 = FUN_012ce0c0(*(undefined4 *)(uVar5 + 4),*(undefined4 *)(uVar5 + 8),iVar4,param_2,
                             param_2,param_2);
        FUN_012a43c0(uVar3,*(undefined4 *)(param_1 + 8));
        iVar4 = 0;
        if (*(int *)(uVar5 + 4) != 0) {
          iVar4 = (*(int *)(uVar5 + 8) - *(int *)(uVar5 + 4)) / 0x38;
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 4) + iVar4 * 0x38;
        return param_1;
      }
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(param_1 + 0xc) - iVar4) / 0x38;
      }
      if (uVar5 < uVar7) {
        if (iVar4 != 0) {
          FUN_012a43c0(iVar4,*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(param_1 + 4));
        }
        uVar3 = FUN_012a0890();
        cVar1 = FUN_012cdfa0(uVar3);
        if (cVar1 == '\0') {
          return param_1;
        }
        uVar3 = FUN_013f62d0(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                             *(undefined4 *)(param_1 + 4));
        *(undefined4 *)(param_1 + 8) = uVar3;
        return param_1;
      }
      iVar6 = FUN_012a0890();
      iVar6 = *(int *)(param_2 + 4) + iVar6 * 0x38;
      FUN_012ce8c0(*(int *)(param_2 + 4),iVar6,iVar4);
      uVar3 = FUN_013f62d0(iVar6,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = uVar3;
      return param_1;
    }
  }
  FUN_012cf4c0();
  return param_1;
}

