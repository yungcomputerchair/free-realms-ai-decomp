// addr: 0x014e0de0
// name: GameCommand_ButtonPressed_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_ButtonPressed_ctor(void * this, void * state) */

void * __thiscall GameCommand_ButtonPressed_ctor(void *this,void *state)

{
  uint uVar1;
  undefined4 uVar2;
  void *this_00;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GameCommand_ButtonPressed, copies state/player context, stores
                       button/player data, and records current state information. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016af408;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  local_4 = 0;
  *(undefined ***)this = GameCommand_ButtonPressed::vftable;
  FUN_0141b3d0(state);
  *(undefined4 *)((int)this + 0x24) = 0;
  uVar2 = (**(code **)(*(int *)state + 0x54))(uVar1);
  *(undefined4 *)((int)this + 0x28) = uVar2;
  this_00 = Game_getCurrentTurn(state);
  GameTurn_getCurrentStateMachine(this_00);
  piVar3 = (int *)StateMachine_getCurrentState();
  uVar2 = (**(code **)(*piVar3 + 0x18))();
  *(undefined4 *)((int)this + 0x2c) = uVar2;
  ExceptionList = local_c;
  return this;
}

