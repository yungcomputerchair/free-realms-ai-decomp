// addr: 0x0130c5f0
// name: Lobby_addChildLobby
// subsystem: common/common/lobby
// source (binary assert): common/common/lobby/Lobby.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Lobby_addChildLobby(void * this, void * child) */

void __thiscall Lobby_addChildLobby(void *this,void *child)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *pvVar5;
  int *piVar6;
  int *extraout_EAX;
  undefined1 *puVar7;
  int local_34;
  int iStack_30;
  int iStack_28;
  undefined1 local_24 [8];
  undefined1 auStack_1c [4];
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  pvVar5 = child;
                    /* Adds or validates a child lobby relationship using child lobby id fields,
                       asserting that child is non-null. It looks up the child's containing group id
                       in a map and appends the child id when absent. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01676e98;
  local_c = ExceptionList;
  piVar6 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffbc);
  ExceptionList = &local_c;
  if (child == (void *)0x0) {
    FUN_012f5a60("child","..\\common\\common\\lobby\\Lobby.cpp",0x1a1);
  }
  local_34 = *(int *)((int)pvVar5 + 0x1c);
  LobbyChildMap_lowerBound((void *)((int)this + 8),local_24,&local_34,piVar6);
  pvVar1 = (void *)*extraout_EAX;
  iVar2 = extraout_EAX[1];
  iStack_30 = *(int *)((int)this + 0xc);
  iStack_28 = iVar2;
  if ((pvVar1 == (void *)0x0) || (pvVar1 != (void *)((int)this + 8))) {
    FUN_00d83c2d();
  }
  if (iVar2 == iStack_30) {
    piStack_18 = (void *)0x0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_4 = 0;
    child = *(void **)((int)pvVar5 + 0x18);
    FUN_0042c155(&child);
    child = *(void **)((int)pvVar5 + 0x1c);
    puVar7 = auStack_1c;
    FUN_0130c3f0(&child);
    FUN_005f1e5c(puVar7);
    uStack_4 = 0xffffffff;
    if (piStack_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(piStack_18);
    }
  }
  else {
    local_34 = *(int *)((int)pvVar5 + 0x18);
    if (pvVar1 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    piVar6 = *(int **)(iVar2 + 0x18);
    if (piVar6 < *(int **)(iVar2 + 0x14)) {
      FUN_00d83c2d();
    }
    if (iStack_28 == *(int *)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    piVar3 = *(int **)(iVar2 + 0x14);
    piVar4 = piVar3;
    if (*(int **)(iVar2 + 0x18) < piVar3) {
      FUN_00d83c2d();
    }
    for (; (piVar4 != piVar6 && (*piVar4 != local_34)); piVar4 = piVar4 + 1) {
    }
    piStack_18 = piVar3;
    if (iStack_28 == *(int *)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    piVar6 = *(int **)(iVar2 + 0x18);
    if (piVar6 < *(int **)(iVar2 + 0x14)) {
      FUN_00d83c2d();
    }
    if (iVar2 == -0x10) {
      FUN_00d83c2d();
    }
    if (piVar4 == piVar6) {
      child = *(void **)((int)child + 0x18);
      if (iStack_28 == *(int *)((int)pvVar1 + 4)) {
        FUN_00d83c2d();
      }
      FUN_0042c155(&child);
    }
  }
  ExceptionList = local_c;
  return;
}

