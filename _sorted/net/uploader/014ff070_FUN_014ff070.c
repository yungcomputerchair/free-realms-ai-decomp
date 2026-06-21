// addr: 0x014ff070
// name: FUN_014ff070
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int FUN_014ff070(void)

{
  uint uVar1;
  int iVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x13c-byte object, invokes constructor helper FUN_014fedb0, and
                       returns the constructed object plus 8 bytes. Exact class is not visible in
                       this wrapper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b3ecb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x13c);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_014fedb0(uVar1);
  }
  if (iVar2 != 0) {
    ExceptionList = local_c;
    return iVar2 + 8;
  }
  ExceptionList = local_c;
  return 0;
}

