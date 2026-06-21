// addr: 0x012fffa0
// name: FUN_012fffa0
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_012fffa0(int param_1,int param_2)

{
  void *_Memory;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  if (param_1 == param_2) {
    return param_1;
  }
  iVar3 = *(int *)(param_2 + 4);
  if (iVar3 != 0) {
    uVar6 = *(int *)(param_2 + 8) - iVar3 >> 2;
    if (uVar6 != 0) {
      _Memory = *(void **)(param_1 + 4);
      if (_Memory == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)(param_1 + 8) - (int)_Memory >> 2;
      }
      if (uVar6 <= uVar4) {
        FUN_012fc0c0(iVar3,*(int *)(param_2 + 8),_Memory);
        if (*(int *)(param_2 + 4) == 0) {
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
          return param_1;
        }
        *(int *)(param_1 + 8) =
             *(int *)(param_1 + 4) + (*(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2) * 4;
        return param_1;
      }
      if (_Memory == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)(param_1 + 0xc) - (int)_Memory >> 2;
      }
      if (uVar4 < uVar6) {
        if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        if (*(int *)(param_2 + 4) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
        }
        cVar1 = FUN_01244610(iVar3);
        if (cVar1 == '\0') {
          return param_1;
        }
        uVar2 = FUN_012fc100(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                             *(undefined4 *)(param_1 + 4));
        *(undefined4 *)(param_1 + 8) = uVar2;
        return param_1;
      }
      if (_Memory == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - (int)_Memory >> 2;
      }
      iVar5 = iVar3 + iVar5 * 4;
      FUN_012fc0c0(iVar3,iVar5,_Memory);
      uVar2 = FUN_012fc100(iVar5,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = uVar2;
      return param_1;
    }
  }
  FUN_012fcb70();
  return param_1;
}

