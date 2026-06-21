// addr: 0x00993bf0
// name: FUN_00993bf0
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_00993bf0(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 400-byte unknown object, constructs it with FUN_00993b20, inserts
                       it into a 0x32-bucket map, then marks two owner views dirty. Class identity
                       is not evident. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159be3b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(400);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00993b20(param_1,param_2);
  }
  local_4 = 0xffffffff;
  FUN_00993790(*(undefined4 *)(iVar3 + 0x9c),iVar3);
  *(undefined1 *)(*(int *)(param_1 + 0xe0) + 0x25c) = 1;
  FUN_00c31fc0(uVar1);
  *(undefined1 *)(*(int *)(param_1 + 0xe4) + 0x25c) = 1;
  FUN_00c32040();
  FUN_00c33910(0);
  ExceptionList = local_c;
  return 1;
}

