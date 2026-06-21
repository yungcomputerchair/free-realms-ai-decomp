// addr: 0x01509780
// name: CommandObject_EmitSound_doCommand
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall CommandObject_EmitSound_doCommand(int param_1)

{
  uint uVar1;
  void *pvVar2;
  void *this;
  int value_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Implements the operation identified by referenced string
                       'CommandObject_EmitSound::doCommand %d'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b577b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  Game_logGeneral(*(void **)(param_1 + 0x30),"CommandObject_EmitSound::doCommand %d",
                  *(undefined4 *)(param_1 + 0x124));
  pvVar2 = Mem_Alloc(0x14);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    this = (void *)0x0;
  }
  else {
    this = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x65);
  value_ = StateMachine_getCurrentState();
  DisplayActionBuilder_addIntArg(this,value_);
  DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0x124));
  DisplayActionBuilder_addBoolArg(this,false);
  (**(code **)(**(int **)(param_1 + 0x30) + 0x154))(this);
  ExceptionList = pvVar2;
  return 1;
}

