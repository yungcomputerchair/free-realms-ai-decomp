// addr: 0x0135fd40
// name: Game_collectPlayAreaElements
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Game_collectPlayAreaElements(void * this) */

void * __fastcall Game_collectPlayAreaElements(void *this)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  void *pvVar5;
  void *unaff_EBX;
  int *piVar6;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a vector, enumerates all play areas, and asks each to append its
                       contents/elements, returning the populated vector or null on enumeration
                       failure. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167eaa3;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  pvVar5 = Mem_Alloc(0x10);
  if (pvVar5 != (void *)0x0) {
    *(undefined4 *)((int)pvVar5 + 4) = 0;
    *(undefined4 *)((int)pvVar5 + 8) = 0;
    *(undefined4 *)((int)pvVar5 + 0xc) = 0;
  }
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 1;
  cVar3 = (**(code **)(*(int *)this + 0x140))(&local_1c,uVar4);
  piVar2 = local_18;
  if (cVar3 == '\0') {
    puStack_8 = (undefined1 *)0xffffffff;
    if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_1c);
    }
    unaff_EBX = (void *)0x0;
  }
  else {
    if (local_18 < local_1c) {
      FUN_00d83c2d();
    }
    piVar6 = local_1c;
    if (local_18 < local_1c) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x20) {
        FUN_00d83c2d();
      }
      if (piVar6 == piVar2) break;
      if (&stack0x00000000 == (undefined1 *)0x20) {
        FUN_00d83c2d();
      }
      if (local_18 <= piVar6) {
        FUN_00d83c2d();
      }
      piVar1 = (int *)*piVar6;
      if (piVar1 == (int *)0x0) {
        FUN_012f5a60("playArea","..\\common\\common\\game\\Game.cpp",0xd6d);
      }
      (**(code **)(*piVar1 + 0x34))(unaff_EBX);
      if (local_18 <= piVar6) {
        FUN_00d83c2d();
      }
      piVar6 = piVar6 + 1;
    }
    puStack_8 = (undefined1 *)0xffffffff;
    if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_1c);
    }
  }
  ExceptionList = local_10;
  return unaff_EBX;
}

