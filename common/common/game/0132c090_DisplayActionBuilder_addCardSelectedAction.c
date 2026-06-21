// addr: 0x0132c090
// name: DisplayActionBuilder_addCardSelectedAction
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
DisplayActionBuilder_addCardSelectedAction
          (int *param_1,int param_2,int param_3,bool param_4,bool param_5)

{
  uint uVar1;
  void *pvVar2;
  int value_;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds and registers a display action for a card selection event, adding
                       integer arguments and current state data before invoking Game_cardSelected.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167a79b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  if ((char)param_1[0xfd] != '\0') {
    *(undefined1 *)(param_1 + 0xfd) = 0;
    pvVar2 = Mem_Alloc(0x14);
    this = (void *)0x0;
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      this = (void *)FUN_012f9eb0(uVar1);
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(0xa1);
    value_ = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(this,value_);
    DisplayActionBuilder_addIntArg(this,0x2233d);
    DisplayActionBuilder_addIntArg(this,param_2);
    DisplayActionBuilder_addIntArg(this,param_3);
    (**(code **)(*param_1 + 0x154))(this);
  }
  if (param_3 < 0) {
    *(undefined1 *)(param_1 + 0xfd) = 1;
    param_3 = -param_3;
  }
  Game_cardSelected(param_1,param_2,param_3,param_4,param_5);
  ExceptionList = local_c;
  return;
}

