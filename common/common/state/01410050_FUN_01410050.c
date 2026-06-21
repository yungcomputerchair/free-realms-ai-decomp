// addr: 0x01410050
// name: FUN_01410050
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_01410050(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016924db;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x14);
  this = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    this = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x74);
  iVar3 = StateMachine_getCurrentState();
  DisplayActionBuilder_addIntArg(this,iVar3);
  DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0xc));
  iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x54))();
  DisplayActionBuilder_addIntArg(this,iVar3);
  (**(code **)(**(int **)(param_1 + 4) + 0x154))(this);
  ExceptionList = pvVar2;
  return;
}

