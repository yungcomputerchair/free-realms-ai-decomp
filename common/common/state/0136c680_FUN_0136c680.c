// addr: 0x0136c680
// name: FUN_0136c680
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0136c680(void *param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  uVar1 = *(uint *)((int)param_1 + 0x2c);
  if (uVar1 < *(uint *)((int)param_1 + 0x28)) {
    FUN_00d83c2d();
  }
  uVar4 = *(uint *)((int)param_1 + 0x28);
  if (*(uint *)((int)param_1 + 0x2c) < uVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_1 == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (uVar4 == uVar1) break;
    if (param_1 == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)param_1 + 0x2c) <= uVar4) {
      FUN_00d83c2d();
    }
    iVar2 = GamePlayer_getPlayerId();
    if ((iVar2 != param_2) && (iVar2 != param_3)) {
      pvVar3 = (void *)(**(code **)(*param_4 + 0x44))();
      Game_dispatchCommandToPlayer(param_1,iVar2,pvVar3);
    }
    if (*(uint *)((int)param_1 + 0x2c) <= uVar4) {
      FUN_00d83c2d();
    }
    uVar4 = uVar4 + 4;
  }
  uVar1 = *(uint *)((int)param_1 + 0x4c);
  if (uVar1 < *(uint *)((int)param_1 + 0x48)) {
    FUN_00d83c2d();
  }
  uVar4 = *(uint *)((int)param_1 + 0x48);
  if (*(uint *)((int)param_1 + 0x4c) < uVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_1 == (void *)0xffffffbc) {
      FUN_00d83c2d();
    }
    if (uVar4 == uVar1) break;
    if (param_1 == (void *)0xffffffbc) {
      FUN_00d83c2d();
    }
    if (*(uint *)((int)param_1 + 0x4c) <= uVar4) {
      FUN_00d83c2d();
    }
    iVar2 = GamePlayer_getPlayerId();
    if ((iVar2 != param_2) && (iVar2 != param_3)) {
      pvVar3 = (void *)(**(code **)(*param_4 + 0x44))();
      Game_dispatchCommandToPlayer(param_1,iVar2,pvVar3);
    }
    if (*(uint *)((int)param_1 + 0x4c) <= uVar4) {
      FUN_00d83c2d();
    }
    uVar4 = uVar4 + 4;
  }
  if (param_4 != (int *)0x0) {
    (**(code **)*param_4)(1);
  }
  return;
}

