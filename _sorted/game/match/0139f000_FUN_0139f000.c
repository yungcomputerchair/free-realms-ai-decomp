// addr: 0x0139f000
// name: FUN_0139f000
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void copyVirtualResultsReverse(void * thisObj, int outVector_) */

void __thiscall copyVirtualResultsReverse(void *this,void *thisObj,int outVector_)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_retaddr;
  undefined1 auStack_28 [12];
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies up to a requested number of entries from a virtual source vector into
                       an output vector in reverse order, popping them from the temporary source. */
  puStack_8 = &LAB_01685618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  (**(code **)(*(int *)this + 0x34))(&local_1c,DAT_01b839d8 ^ (uint)&stack0xffffffc4);
  if (local_1c == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (int)local_18 - (int)local_1c >> 2;
  }
  if (uVar4 < unaff_retaddr) {
    if (local_1c == (undefined4 *)0x0) {
      unaff_retaddr = 0;
    }
    else {
      unaff_retaddr = (int)local_18 - (int)local_1c >> 2;
    }
  }
  if (0 < (int)unaff_retaddr) {
    do {
      puVar1 = local_18;
      if (local_18 < local_1c) {
        FUN_00d83c2d();
      }
      puVar2 = puVar1 + -1;
      if ((local_18 < puVar2) || (puVar2 < local_1c)) {
        FUN_00d83c2d();
      }
      puVar1 = puVar1 + -1;
      if (local_18 <= puVar1) {
        FUN_00d83c2d();
      }
      uVar4 = *(uint *)((int)thisObj + 4);
      if ((uVar4 == 0) ||
         ((uint)((int)(*(int *)((int)thisObj + 0xc) - uVar4) >> 2) <=
          (uint)((int)(*(int *)((int)thisObj + 8) - uVar4) >> 2))) {
        uVar3 = *(uint *)((int)thisObj + 8);
        if (uVar3 < uVar4) {
          FUN_00d83c2d();
        }
        FUN_012619f0(auStack_28,thisObj,uVar3,puVar1);
      }
      else {
        puVar2 = *(undefined4 **)((int)thisObj + 8);
        *puVar2 = *puVar1;
        *(undefined4 **)((int)thisObj + 8) = puVar2 + 1;
      }
      if ((local_1c != (undefined4 *)0x0) && ((int)local_18 - (int)local_1c >> 2 != 0)) {
        local_18 = local_18 + -1;
      }
      unaff_retaddr = unaff_retaddr - 1;
    } while (unaff_retaddr != 0);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_1c);
  }
  ExceptionList = local_10;
  return;
}

