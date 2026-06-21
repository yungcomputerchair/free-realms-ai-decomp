// addr: 0x00b0c990
// name: FUN_00b0c990
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_00b0c990(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory wrapper allocating 0x30 bytes and constructing the object with
                       FUN_00b0c820. No class evidence is visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015cf34b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x30);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = MiniMapInfoAsset_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

