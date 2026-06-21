// addr: 0x00d347a0
// name: FUN_00d347a0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_00d347a0(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a large helper object from input buffer data, stores the result at
                       offset 0x28, marks a completion flag, and invokes a callback. Class evidence
                       is absent, so no safe application name is proposed. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016136db;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0xaa8);
  uVar3 = 0;
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(param_2 + 8) != 0) {
      uVar3 = *(undefined4 *)(param_2 + 4);
    }
    uVar3 = FUN_010ab900(uVar3,*(int *)(param_2 + 8));
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  (**(code **)*param_3)(param_1,uVar1);
  ExceptionList = pvVar2;
  return 1;
}

