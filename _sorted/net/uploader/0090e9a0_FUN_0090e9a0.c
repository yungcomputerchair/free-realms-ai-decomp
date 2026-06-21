// addr: 0x0090e9a0
// name: FUN_0090e9a0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void FUN_0090e9a0(void) */

void FUN_0090e9a0(void)

{
  void *arg_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a large global manager object at DAT_01be4f70.
                       Specific type is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158c34b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  arg_ = Mem_Alloc(0x1801c);
  local_4 = 0;
  if (arg_ == (void *)0x0) {
    DAT_01be4f70 = 0;
  }
  else {
    DAT_01be4f70 = FUN_00909270((int)arg_);
  }
  ExceptionList = local_c;
  return;
}

