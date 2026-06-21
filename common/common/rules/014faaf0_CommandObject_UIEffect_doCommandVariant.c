// addr: 0x014faaf0
// name: CommandObject_UIEffect_doCommandVariant
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


char __thiscall CommandObject_UIEffect_doCommandVariant(int param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Executes a UI-effect style command by resolving target/origin and adding
                       display action integer args. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b345b;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  cVar1 = FUN_014fc780(param_2);
  if ((cVar1 == '\x01') && (pvVar5 = (void *)0x0, *(int *)(param_1 + 0x68) != 0)) {
    pvVar3 = Mem_Alloc(0x14);
    local_4 = 0;
    if (pvVar3 != (void *)0x0) {
      pvVar5 = (void *)FUN_012f9eb0(uVar2);
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(0x6f);
    iVar4 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar5,iVar4);
    iVar4 = PlayElement_getId();
    DisplayActionBuilder_addIntArg(pvVar5,iVar4);
    (**(code **)(**(int **)(param_1 + 0x30) + 0x154))(pvVar5);
  }
  pvVar5 = (void *)(param_1 + 0x84);
  pvVar3 = EvaluationEnvironment_getOriginCard(pvVar5);
  if (pvVar3 != (void *)0x0) {
    EvaluationEnvironment_getOriginCard(pvVar5);
    iVar4 = PlayElement_getId();
    set_integer_value_for_key(0x33,iVar4);
  }
  pvVar3 = EvaluationEnvironment_resolveTarget(pvVar5);
  if (pvVar3 != (void *)0x0) {
    EvaluationEnvironment_resolveTarget(pvVar5);
    iVar4 = PlayElement_getId();
    set_integer_value_for_key(0x34,iVar4);
  }
  ExceptionList = local_c;
  return cVar1;
}

