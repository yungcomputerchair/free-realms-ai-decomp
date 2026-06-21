// addr: 0x014fb500
// name: CommandObject_UIEffect_doCommand
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall CommandObject_UIEffect_doCommand(int param_1)

{
  void *env;
  uint uVar1;
  void *pvVar2;
  void *this;
  int iVar3;
  void *pvVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Executes CommandObject_UIEffect, resolving target/origin, logging, and
                       building display action integer args. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b360b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  Game_logGeneral(*(void **)(param_1 + 0x30),"CommandObject_UIEffect::doCommand %d $d",
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
  FUN_012f8c70(0xa1);
  iVar3 = StateMachine_getCurrentState();
  DisplayActionBuilder_addIntArg(this,iVar3);
  DisplayActionBuilder_addIntArg(this,*(int *)(param_1 + 0x124));
  env = (void *)(param_1 + 0x84);
  pvVar4 = EvaluationEnvironment_getOriginCard(env);
  if (pvVar4 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    EvaluationEnvironment_getOriginCard(env);
    iVar3 = PlayElement_getId();
  }
  DisplayActionBuilder_addIntArg(this,iVar3);
  pvVar4 = EvaluationEnvironment_resolveTarget(env);
  if (pvVar4 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    EvaluationEnvironment_resolveTarget(env);
    iVar3 = PlayElement_getId();
  }
  DisplayActionBuilder_addIntArg(this,iVar3);
  (**(code **)(**(int **)(param_1 + 0x30) + 0x154))(this);
  ExceptionList = pvVar2;
  return 1;
}

