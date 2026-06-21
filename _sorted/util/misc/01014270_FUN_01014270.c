// addr: 0x01014270
// name: FUN_01014270
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void release_capture_resources(int obj_) */

void __fastcall release_capture_resources(int obj_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Releases two optional resources at offsets +0x68 and +0x60 using separate
                       cleanup helpers. Exact class identity is not evident. */
  puStack_8 = &LAB_01634196;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  if (*(int *)(obj_ + 0x68) != 0) {
    FUN_010140b0(*(int *)(obj_ + 0x68));
  }
  local_4 = 0xffffffff;
  if (*(int *)(obj_ + 0x60) != 0) {
    FUN_01014050(*(int *)(obj_ + 0x60));
  }
  ExceptionList = local_c;
  return;
}

