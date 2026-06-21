// addr: 0x014e47d0
// name: FUN_014e47d0
// subsystem: common/networking/deck_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_014e47d0(int param_1,undefined4 param_2,int *param_3,uint param_4,int *param_5)

{
  void *_Memory;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  uint extraout_EDX;
  uint uVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_8 = 0xffffffff;
  puStack_c = &LAB_016afaf0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_5 = (int *)*param_5;
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int *)(param_1 + 0xc) - iVar2 >> 2;
  }
  if (param_4 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 8) - iVar2 >> 2;
    }
    uVar4 = param_4;
    if (0x3fffffffU - iVar1 < param_4) {
      FUN_014e45f0();
      iVar2 = extraout_ECX;
      uVar4 = extraout_EDX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 8) - iVar2 >> 2;
    }
    if (uVar5 < iVar1 + uVar4) {
      if (0x3fffffff - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 8) - iVar2 >> 2;
      }
      if (uVar5 < iVar1 + uVar4) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(param_1 + 8) - iVar2 >> 2;
        }
        uVar5 = iVar2 + uVar4;
      }
      iVar2 = FUN_014e3d10(uVar5);
      local_8 = 0;
      uVar3 = DeckCommand_PopulateOnlineDeckData_vectorUninitializedCopy
                        (*(undefined4 *)(param_1 + 4),param_3,iVar2);
      uVar3 = DeckCommand_PopulateOnlineDeckData_vectorUninitializedFillN(uVar3,param_4,&param_5);
      DeckCommand_PopulateOnlineDeckData_vectorUninitializedCopy
                (param_3,*(undefined4 *)(param_1 + 8),uVar3);
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
      *(uint *)(param_1 + 0xc) = iVar2 + uVar5 * 4;
      *(uint *)(param_1 + 8) = iVar2 + (param_4 + iVar1) * 4;
      *(int *)(param_1 + 4) = iVar2;
      ExceptionList = local_10;
      return;
    }
    iVar2 = *(int *)(param_1 + 8);
    if ((uint)(iVar2 - (int)param_3 >> 2) < uVar4) {
      DeckCommand_PopulateOnlineDeckData_vectorUninitializedCopy(param_3,iVar2,param_3 + uVar4);
      local_8 = 2;
      DeckCommand_PopulateOnlineDeckData_vectorUninitializedFillN
                (*(int *)(param_1 + 8),param_4 - (*(int *)(param_1 + 8) - (int)param_3 >> 2),
                 &param_5);
      local_8 = 0xffffffff;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar4 * 4;
      DeckCommand_PopulateOnlineDeckData_vectorFillRange
                (param_3,(int *)(*(int *)(param_1 + 8) + uVar4 * -4),(int *)&param_5);
      ExceptionList = local_10;
      return;
    }
    iVar1 = iVar2 + uVar4 * -4;
    uVar3 = DeckCommand_PopulateOnlineDeckData_vectorUninitializedCopy(iVar1,iVar2,iVar2);
    *(undefined4 *)(param_1 + 8) = uVar3;
    DeckCommand_PopulateOnlineDeckData_vectorMoveBackward(param_3,iVar1,iVar2);
    DeckCommand_PopulateOnlineDeckData_vectorFillRange(param_3,param_3 + uVar4,(int *)&param_5);
  }
  ExceptionList = local_10;
  return;
}

