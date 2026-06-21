// addr: 0x0133d830
// name: FUN_0133d830
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0133d830(int param_1,void *param_2,undefined4 param_3)

{
  void *value;
  void *pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167bfb4;
  local_c = ExceptionList;
  value = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffd0);
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x154);
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_4 = 1;
    uVar2 = get_field_1c_if_vector_nonempty(*(void **)(param_1 + 0x32c));
    uVar3 = CommandObjectEmitTextMessage_doCommand(param_3,4,local_1c,uVar2);
  }
  local_4 = 0xffffffff;
  if (pvVar1 != (void *)0x0) {
    FUN_012ce9d0();
  }
  param_3 = uVar3;
  CommandObjectVector_pushBack(param_2,&param_3,value);
  ExceptionList = local_c;
  return;
}

