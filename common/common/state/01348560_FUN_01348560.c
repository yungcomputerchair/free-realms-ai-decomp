// addr: 0x01348560
// name: FUN_01348560
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01348560(int *param_1,char param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167d33b;
  local_c = ExceptionList;
  if ((char)param_1[0x83] == '\0') {
    ExceptionList = &local_c;
    pvVar1 = Mem_Alloc(0x14);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_012f9eb0();
    }
    local_4 = 0xffffffff;
    FUN_012f8c70(0x34);
    DisplayActionManager_ensureSingleton();
    FUN_012d3550(uVar2);
    *(undefined1 *)(param_1 + 0x83) = 1;
    ExceptionList = local_c;
    return;
  }
  if (param_2 == '\x01') {
    ExceptionList = &local_c;
    (**(code **)(*param_1 + 0x1d4))(param_1[0x4f],DAT_01b839d8 ^ (uint)&stack0xffffffec);
    ExceptionList = unaff_ESI;
    return;
  }
  *(undefined1 *)(param_1 + 0x83) = 0;
  return;
}

