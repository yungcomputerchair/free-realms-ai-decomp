// addr: 0x014101f0
// name: GameTurn_startForPlayer
// subsystem: common/rules/game
// source (binary assert): common/rules/game/cwgameturn.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall GameTurn_startForPlayer(int *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  void *unaff_ESI;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Initializes a turn for a player by storing the player id, attaching the
                       player, and emitting a display action with current state and player id.
                       Evidence: cwgameturn.cpp "player" assert and callers from turn
                       advancement/start-of-game state. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169253b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (void *)0x0;
  if (param_2 == 0) {
    FUN_012f5a60("player","..\\common\\rules\\game\\cwgameturn.cpp",0x124,
                 DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  }
  iVar1 = GamePlayer_getPlayerId();
  param_1[0x2a] = iVar1;
  (**(code **)(*param_1 + 0x48))(param_2);
  pvVar2 = Mem_Alloc(0x14);
  puStack_8 = (undefined1 *)0x0;
  if (pvVar2 != (void *)0x0) {
    this = (void *)FUN_012f9eb0();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_012f8c70(0x1adb1);
  iVar1 = StateMachine_getCurrentState();
  DisplayActionBuilder_addIntArg(this,iVar1);
  iVar1 = GamePlayer_getPlayerId();
  DisplayActionBuilder_addIntArg(this,iVar1);
  (**(code **)(*(int *)param_1[1] + 0x154))(this);
  ExceptionList = unaff_ESI;
  return;
}

