// addr: 0x01487e30
// name: FUN_01487e30
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_01487e30(void)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x34-byte object and invokes constructor helper FUN_01487680.
                       Exact class is not visible in this allocation thunk. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a158b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x34);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_01487680(0,0);
  }
  ExceptionList = local_c;
  return uVar2;
}

