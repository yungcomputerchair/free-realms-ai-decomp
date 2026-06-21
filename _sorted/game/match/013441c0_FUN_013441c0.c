// addr: 0x013441c0
// name: FUN_013441c0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void findOrInsertObjectKey(int object_, undefined4 key_) */

void __fastcall findOrInsertObjectKey(int object_,undefined4 key_)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Looks up or inserts a key in a small container at object+0xc, constructing a
                       default payload when the key is absent. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167cad8;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  piVar5 = (int *)FUN_01341880(local_1c,&stack0x00000008);
  iVar1 = *piVar5;
  iVar2 = piVar5[1];
  iVar3 = *(int *)(object_ + 0x10);
  if ((iVar1 == 0) || (iVar1 != object_ + 0xc)) {
    FUN_00d83c2d(uVar4);
  }
  if (iVar2 == iVar3) {
    local_18 = (void *)0x0;
    local_14 = 0;
    local_10 = 0;
    local_4 = 0;
    FUN_01343010(&stack0x00000004);
    puVar6 = local_1c;
    FUN_01343ed0(&stack0x00000008);
    FUN_01342b30(puVar6);
    local_4 = 0xffffffff;
    if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  else {
    if (iVar1 == 0) {
      FUN_00d83c2d(uVar4);
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d(uVar4);
    }
    FUN_01343010(&stack0x00000004);
  }
  ExceptionList = local_c;
  return;
}

