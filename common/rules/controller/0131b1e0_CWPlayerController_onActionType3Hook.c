// addr: 0x0131b1e0
// name: CWPlayerController_onActionType3Hook
// subsystem: common/rules/controller
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CWPlayerController_onActionType3Hook(void * player, int argValue_) */

bool __thiscall CWPlayerController_onActionType3Hook(void *this,void *player,int argValue_)

{
  bool bVar1;
  int iVar2;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Stores argValue in the controller temporary map, evaluates CWPlayerController
                       action kind 3, and commits side effects if the controller allows it. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01678470;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x40c) != 0) {
    FUN_0131a780();
    local_4 = 0;
    iVar2 = FUN_01315ad0();
    FUN_01300680();
    *(void **)(iVar2 + 8) = player;
    FUN_01315e40(local_18);
    local_4 = local_4 & 0xffffff00;
    bVar1 = CWPlayerController_evaluatePendingControlAction(*(void **)((int)this + 0x40c),3);
    if (bVar1) {
      FUN_014032d0();
    }
    local_4 = 0xffffffff;
    FUN_01315dd0();
  }
  ExceptionList = local_c;
  return true;
}

