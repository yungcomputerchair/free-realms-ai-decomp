// addr: 0x013d9f90
// name: FUN_013d9f90
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_013d9f90(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory allocating an 8-byte object and constructing it with FUN_013d9cf0.
                       Exact type is not visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168c25b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(8);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = NetworkCommand_Ping_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

