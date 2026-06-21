// addr: 0x007c8f90
// name: FUN_007c8f90
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_007c8f90(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory/initializer that creates several 0x24/0x1c subobjects for a rendering
                       or entity component and stores/registers them. Exact class evidence absent.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01560dd1;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 1) {
    ExceptionList = &local_c;
    pvVar2 = Mem_Alloc(0x24);
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      uVar3 = RandomPlayListIterator_ctor(param_1);
      ExceptionList = local_c;
      return uVar3;
    }
  }
  else if (iVar1 == 2) {
    ExceptionList = &local_c;
    pvVar2 = Mem_Alloc(0x24);
    local_4 = 1;
    if (pvVar2 != (void *)0x0) {
      uVar3 = RandomNoRepeatPlayListIterator_ctor(param_1);
      ExceptionList = local_c;
      return uVar3;
    }
  }
  else {
    if (iVar1 != 3) {
      return 0;
    }
    ExceptionList = &local_c;
    pvVar2 = Mem_Alloc(0x1c);
    local_4 = 2;
    if (pvVar2 != (void *)0x0) {
      uVar3 = SequentialPlayListIterator_ctor(param_1);
      ExceptionList = local_c;
      return uVar3;
    }
  }
  ExceptionList = local_c;
  return 0;
}

