// addr: 0x013442b0
// name: Player_compactZoneVector_013442b0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall Player_compactZoneVector_013442b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined1 local_24 [8];
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Rebuilds or compacts one of the player's play-element/id vectors by iterating
                       records, moving dword ranges, and updating the container obtained from a zone
                       helper. Exact zone semantics are unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167cb08;
  local_c = ExceptionList;
  uVar5 = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  piVar6 = (int *)FUN_01341880(local_24,&stack0x00000008);
  iVar1 = *piVar6;
  iVar2 = piVar6[1];
  iVar3 = *(int *)(param_1 + 0x10);
  if ((iVar1 == 0) || (iVar1 != param_1 + 0xc)) {
    FUN_00d83c2d(uVar5);
  }
  if (iVar2 == iVar3) {
    local_18 = (void *)0x0;
    local_14 = 0;
    local_10 = 0;
    local_4 = 0;
    FUN_01343010(&stack0x00000004);
    puVar7 = local_1c;
    FUN_01343ed0(&stack0x00000008);
    FUN_01342b30(puVar7);
    local_4 = 0xffffffff;
    if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  else {
    if (iVar1 == 0) {
      FUN_00d83c2d(uVar5);
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d(uVar5);
    }
    uVar4 = *(uint *)(iVar2 + 0x14);
    if (*(uint *)(iVar2 + 0x18) < uVar4) {
      FUN_00d83c2d(uVar5);
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    FUN_01342c60(local_1c,iVar2 + 0x10,uVar4,&stack0x00000004);
  }
  ExceptionList = local_c;
  return;
}

