// addr: 0x0135fbb0
// name: Game_appendPlayAreaElements
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Game_appendPlayAreaElements(void * this, void * outElements) */

bool __thiscall Game_appendPlayAreaElements(void *this,void *outElements)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a list of play areas, then asks each play area to append its
                       contents/elements to the supplied vector. Returns false if play-area
                       enumeration fails. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167ea68;
  local_c = ExceptionList;
  uVar5 = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  if (*(int *)((int)outElements + 4) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)((int)outElements + 8) - *(int *)((int)outElements + 4) >> 2;
  }
  if (*(int *)((int)this + 0x28) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)((int)this + 0x2c) - *(int *)((int)this + 0x28) >> 2;
  }
  FUN_0135aef0(iVar6 * 0x50 + iVar7);
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  cVar3 = (**(code **)(*(int *)this + 0x140))(&local_1c,uVar5);
  piVar2 = local_18;
  if (cVar3 == '\0') {
    puStack_8 = (undefined1 *)0xffffffff;
    if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_1c);
    }
    bVar4 = false;
  }
  else {
    if (local_18 < local_1c) {
      FUN_00d83c2d();
    }
    piVar8 = local_1c;
    if (local_18 < local_1c) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x20) {
        FUN_00d83c2d();
      }
      if (piVar8 == piVar2) break;
      if (&stack0x00000000 == (undefined1 *)0x20) {
        FUN_00d83c2d();
      }
      if (local_18 <= piVar8) {
        FUN_00d83c2d();
      }
      piVar1 = (int *)*piVar8;
      if (piVar1 == (int *)0x0) {
        FUN_012f5a60("playArea","..\\common\\common\\game\\Game.cpp",0xd49);
      }
      (**(code **)(*piVar1 + 0x34))(outElements);
      if (local_18 <= piVar8) {
        FUN_00d83c2d();
      }
      piVar8 = piVar8 + 1;
    }
    puStack_8 = (undefined1 *)0xffffffff;
    if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_1c);
    }
    bVar4 = true;
  }
  ExceptionList = local_10;
  return bVar4;
}

