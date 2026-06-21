// addr: 0x012c7610
// name: FUN_012c7610
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_012c7610(int param_1,undefined4 param_2,void **param_3,uint param_4,undefined4 *param_5)

{
  void *_Memory;
  int iVar1;
  int iVar2;
  void **ppvVar3;
  undefined4 uVar4;
  int extraout_ECX;
  uint extraout_EDX;
  uint uVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_8 = 0xffffffff;
  puStack_c = &LAB_0166ec60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_5 = (undefined4 *)*param_5;
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(int *)(param_1 + 0xc) - iVar2 >> 2;
  }
  if (param_4 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 8) - iVar2 >> 2;
    }
    uVar5 = param_4;
    if (0x3fffffffU - iVar1 < param_4) {
      FUN_012b40a0();
      iVar2 = extraout_ECX;
      uVar5 = extraout_EDX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 8) - iVar2 >> 2;
    }
    if (uVar6 < iVar1 + uVar5) {
      if (0x3fffffff - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 8) - iVar2 >> 2;
      }
      if (uVar6 < iVar1 + uVar5) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(param_1 + 8) - iVar2 >> 2;
        }
        uVar6 = iVar2 + uVar5;
      }
      iVar2 = FUN_012b0b10(uVar6);
      local_8 = 0;
      ppvVar3 = (void **)FUN_012c69d0(*(undefined4 *)(param_1 + 4),param_3,iVar2);
      ppvVar3 = PointerVector_fillN(ppvVar3,param_4,&param_5);
      FUN_012c69d0(param_3,*(undefined4 *)(param_1 + 8),ppvVar3);
      local_8 = 0xffffffff;
      _Memory = *(void **)(param_1 + 4);
      if (_Memory == (void *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 8) - (int)_Memory >> 2;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(uint *)(param_1 + 0xc) = iVar2 + uVar6 * 4;
      *(uint *)(param_1 + 8) = iVar2 + (param_4 + iVar1) * 4;
      *(int *)(param_1 + 4) = iVar2;
      ExceptionList = local_10;
      return;
    }
    iVar2 = *(int *)(param_1 + 8);
    if ((uint)(iVar2 - (int)param_3 >> 2) < uVar5) {
      FUN_012c69d0(param_3,iVar2,param_3 + uVar5);
      local_8 = 2;
      PointerVector_fillN(*(void ***)(param_1 + 8),
                          param_4 - ((int)*(void ***)(param_1 + 8) - (int)param_3 >> 2),&param_5);
      local_8 = 0xffffffff;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar5 * 4;
      PointerVector_fillRange(param_3,(void **)(*(int *)(param_1 + 8) + uVar5 * -4),&param_5);
      ExceptionList = local_10;
      return;
    }
    iVar1 = iVar2 + uVar5 * -4;
    uVar4 = FUN_012c69d0(iVar1,iVar2,iVar2);
    *(undefined4 *)(param_1 + 8) = uVar4;
    FUN_012c6690(param_3,iVar1,iVar2);
    PointerVector_fillRange(param_3,param_3 + uVar5,&param_5);
  }
  ExceptionList = local_10;
  return;
}

