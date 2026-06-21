// addr: 0x0139ee80
// name: PlayElement_collectCards
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall PlayElement_collectCards(int *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_retaddr;
  undefined1 auStack_28 [12];
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Collects card elements from a PlayElement/pile into a PointerVector. */
  puStack_8 = &LAB_016855e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  (**(code **)(*param_1 + 0x34))(&local_1c,DAT_01b839d8 ^ (uint)&stack0xffffffc4);
  if (local_1c == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (int)local_18 - (int)local_1c >> 2;
  }
  if (uVar5 < unaff_retaddr) {
    if (local_1c == (undefined4 *)0x0) {
      unaff_retaddr = 0;
    }
    else {
      unaff_retaddr = (int)local_18 - (int)local_1c >> 2;
    }
  }
  uVar5 = 0;
  if (0 < (int)unaff_retaddr) {
    do {
      puVar1 = local_1c;
      if ((local_1c == (undefined4 *)0x0) || ((uint)((int)local_18 - (int)local_1c >> 2) <= uVar5))
      {
        FUN_0139e690();
        break;
      }
      if (local_18 < local_1c) {
        FUN_00d83c2d();
      }
      puVar1 = puVar1 + uVar5;
      if ((local_18 < puVar1) || (puVar1 < local_1c)) {
        FUN_00d83c2d();
      }
      if (local_18 <= puVar1) {
        FUN_00d83c2d();
      }
      uVar2 = *(uint *)(param_2 + 4);
      if ((uVar2 == 0) ||
         ((uint)((int)(*(int *)(param_2 + 0xc) - uVar2) >> 2) <=
          (uint)((int)(*(int *)(param_2 + 8) - uVar2) >> 2))) {
        uVar4 = *(uint *)(param_2 + 8);
        if (uVar4 < uVar2) {
          FUN_00d83c2d();
        }
        FUN_012619f0(auStack_28,param_2,uVar4,puVar1);
      }
      else {
        puVar3 = *(undefined4 **)(param_2 + 8);
        *puVar3 = *puVar1;
        *(undefined4 **)(param_2 + 8) = puVar3 + 1;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)unaff_retaddr);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_1c);
  }
  ExceptionList = local_10;
  return;
}

