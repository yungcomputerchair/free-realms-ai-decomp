// addr: 0x0092aed0
// name: FUN_0092aed0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0092aed0(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and initializes a large 0x10b0-byte subobject for an owner, then
                       attaches/registers it through a manager call. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01590a7b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FUN_008d8e70(param_2);
  if (*(int *)(param_1 + 0xc) == 0) {
    pvVar2 = Mem_Alloc(0x10b0);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = GroupRosterState_ctor(5);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
  }
  FUN_009140f0(param_2,*(undefined4 *)(param_1 + 0xc),uVar1);
  ExceptionList = local_c;
  return;
}

