// addr: 0x00745a70
// name: FUN_00745a70
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_00745a70(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *extraout_EAX;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Updates or lazily creates a small primitive/resource node from an owning
                       object, then publishes/releases the selected payload. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01553aab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00fab3a0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  if (iVar1 + param_2 < 0x1001) {
    ExceptionList = local_c;
    return *(undefined4 *)param_1[1];
  }
  LinkedList_unlinkTail(param_1 + 3);
  if (extraout_EAX == (undefined4 *)0x0) {
    pvVar2 = Mem_Alloc(0xc);
    if (pvVar2 == (void *)0x0) {
      local_4 = 0xffffffff;
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_00745890(param_1[7]);
      local_4 = 0xffffffff;
    }
  }
  else {
    FUN_00fab3b0();
    puVar3 = extraout_EAX;
  }
  GraphicsDriver_CommandCall_ctorInBuffer(*puVar3);
  puVar3[1] = param_1[1];
  if (param_1[1] != 0) {
    *(undefined4 **)(param_1[1] + 8) = puVar3;
    param_1[2] = param_1[2] + 1;
    param_1[1] = puVar3;
    ExceptionList = local_c;
    return *puVar3;
  }
  param_1[2] = param_1[2] + 1;
  *param_1 = puVar3;
  param_1[1] = puVar3;
  ExceptionList = local_c;
  return *puVar3;
}

