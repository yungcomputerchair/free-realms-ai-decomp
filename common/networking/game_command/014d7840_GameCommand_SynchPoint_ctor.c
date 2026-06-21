// addr: 0x014d7840
// name: GameCommand_SynchPoint_ctor
// subsystem: common/networking/game_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * GameCommand_SynchPoint_ctor(undefined4 * param_1, int * param_2)
    */

undefined4 * __thiscall GameCommand_SynchPoint_ctor(void *this,undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  void *this_00;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs/initializes the object. Evidence: GameCommand_SynchPoint::vftable.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ad65b;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  local_4 = 0;
  uVar1 = (int)this + 0x30;
  *(undefined ***)this = GameCommand_SynchPoint::vftable;
  FUN_005258fb(uVar2);
  local_4._0_1_ = 1;
  FUN_0141b3d0(param_1);
  piVar3 = Game_getCurrentTurn(param_1);
  uVar4 = (**(code **)(*piVar3 + 0x3c))();
  *(undefined4 *)((int)this + 0x24) = uVar4;
  this_00 = Game_getCurrentTurn(param_1);
  GameTurn_getCurrentStateMachine(this_00);
  piVar3 = (int *)StateMachine_getCurrentState();
  uVar4 = (**(code **)(*piVar3 + 0x18))();
  *(undefined4 *)((int)this + 0x28) = uVar4;
  uVar2 = sub_0135fec0_cleanupValueDataMapMember(param_1,(uint)auStack_18);
  local_4._0_1_ = 2;
  if (uVar1 != uVar2) {
    FUN_005152ac(auStack_20,uVar1,**(undefined4 **)((int)this + 0x34),uVar1,
                 *(undefined4 **)((int)this + 0x34));
    FUN_012415a0(uVar2);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00521a9c();
  uVar4 = (**(code **)(*param_1 + 0x54))();
  *(undefined4 *)((int)this + 0x2c) = uVar4;
  ExceptionList = local_c;
  return this;
}

