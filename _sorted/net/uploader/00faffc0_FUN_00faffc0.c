// addr: 0x00faffc0
// name: FUN_00faffc0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall FUN_00faffc0(int param_1)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and appends a GraphicsDriver_CommandContext to a driver-owned list
                       while updating command-buffer counters. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162c273;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00fc45f0(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  iVar2 = 0;
  local_4 = 0;
  *(int *)(param_1 + 0x1850) = *(int *)(param_1 + 0x1850) + 0x74;
  *(int *)(param_1 + 0x1854) = *(int *)(param_1 + 0x1854) + 0x74;
  *(int *)(param_1 + 0x185c) = *(int *)(param_1 + 0x185c) + 1;
  *(int *)(param_1 + 0x1860) = *(int *)(param_1 + 0x1860) + 1;
  pvVar1 = Mem_Alloc(0x74);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar1 != (void *)0x0) {
    iVar2 = GraphicsDriver_CommandContext_ctor(param_1);
  }
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x1628);
  if (*(int *)(param_1 + 0x1628) == 0) {
    *(int *)(param_1 + 0x1624) = iVar2;
  }
  else {
    *(int *)(*(int *)(param_1 + 0x1628) + 8) = iVar2;
  }
  *(int *)(param_1 + 0x162c) = *(int *)(param_1 + 0x162c) + 1;
  *(int *)(param_1 + 0x1628) = iVar2;
  local_4 = 0xffffffff;
  if (param_1 != -0x1658) {
    FUN_00fc4610();
  }
  ExceptionList = local_c;
  return iVar2;
}

