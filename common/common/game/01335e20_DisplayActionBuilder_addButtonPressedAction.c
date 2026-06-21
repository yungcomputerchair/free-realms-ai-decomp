// addr: 0x01335e20
// name: DisplayActionBuilder_addButtonPressedAction
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool __thiscall DisplayActionBuilder_addButtonPressedAction(int *param_1,int param_2,bool param_3)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  int value_;
  int unaff_retaddr;
  void *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Builds a display action for a button-pressed event by adding object/int
                       arguments and current state data, then calls Game_buttonPressed. */
  puStack_8 = &LAB_0167b4a3;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  local_18 = 0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  pvVar3 = Mem_Alloc(0x14);
  local_4._0_1_ = 1;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (void *)FUN_012f9eb0(uVar2);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_012f8c70(0x71);
  value_ = StateMachine_getCurrentState();
  DisplayActionBuilder_addIntArg(pvVar3,value_);
  DisplayActionBuilder_addObjectArg(pvVar3,&local_1c);
  DisplayActionBuilder_addIntArg(pvVar3,1);
  (**(code **)(*param_1 + 0x154))(pvVar3);
  bVar1 = Game_buttonPressed(param_1,unaff_retaddr,param_2,param_3);
  puStack_8 = (undefined1 *)0xffffffff;
  if (local_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_1c);
  }
  ExceptionList = local_10;
  return bVar1;
}

