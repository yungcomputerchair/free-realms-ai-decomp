// addr: 0x0149db00
// name: FUN_0149db00
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0149db00(int param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a408b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x14) == 0) {
    pvVar2 = Mem_Alloc(0x1c);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = MessageText_ctor();
    }
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  local_4 = 0xffffffff;
  pvVar2 = (void *)FUN_012a84b0(uVar1);
  uVar1 = get_field_30(pvVar2);
  set_pair_fields_4_8(*(void **)(param_1 + 0x14),param_2,uVar1);
  ExceptionList = local_c;
  return;
}

