// addr: 0x00989740
// name: FUN_00989740
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_00989740(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory wrapper allocating 0x2c bytes and constructing it with FUN_00989470.
                       No class evidence is visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159a4ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x2c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ImageDirectory_ImageAsset2_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

