// addr: 0x0131ae70
// name: CWPlayerController_onActionType8Hook
// subsystem: common/rules/controller
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CWPlayerController_onActionType8Hook(void * player, void * arg) */

bool __thiscall CWPlayerController_onActionType8Hook(void *this,void *player,void *arg)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  void **ppvStack_2c;
  uint uStack_28;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  pvVar1 = player;
                    /* For non-null arg, stores it as argument key 1 in the controller's temporary
                       ValueData map, evaluates action kind 8, and commits side effects on success.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016783b0;
  local_c = ExceptionList;
  uStack_28 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  if (player == (void *)0x0) {
    return false;
  }
  if (*(int *)((int)this + 0x40c) != 0) {
    ppvStack_2c = (void **)0x131aeb6;
    ExceptionList = &local_c;
    FUN_0131a780();
    local_4 = 0;
    ppvStack_2c = &player;
    player = (void *)0x1;
    uStack_30 = 0x131aed4;
    iVar3 = FUN_01315ad0();
    ppvStack_2c = (void **)0x2;
    uStack_30 = 0x131aedf;
    FUN_01300680();
    player = auStack_34;
    *(void **)(iVar3 + 8) = pvVar1;
    FUN_01315e40(local_18);
    local_4 = local_4 & 0xffffff00;
    bVar2 = CWPlayerController_evaluatePendingControlAction(*(void **)((int)this + 0x40c),8);
    if (!bVar2) {
      local_4 = 0xffffffff;
      ppvStack_2c = (void **)0x131af54;
      FUN_01315dd0();
      ExceptionList = local_c;
      return false;
    }
    ppvStack_2c = (void **)0x131af1b;
    FUN_014032d0();
    local_4 = 0xffffffff;
    ppvStack_2c = (void **)0x131af2c;
    FUN_01315dd0();
  }
  ExceptionList = local_c;
  return true;
}

