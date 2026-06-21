// addr: 0x01045d50
// name: FUN_01045d50
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_01045d50(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily allocates and zero-initializes a global 0x38-byte table/cache object
                       used by asset/display and item lookup paths. No class evidence, so left
                       unnamed. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0163980b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01cb6910 == (undefined4 *)0x0) {
    DAT_01cb6910 = Mem_Alloc(0x38);
    if (DAT_01cb6910 == (undefined4 *)0x0) {
      DAT_01cb6910 = (undefined4 *)0x0;
    }
    else {
      *DAT_01cb6910 = 0;
      DAT_01cb6910[1] = 0;
      DAT_01cb6910[2] = 0;
      DAT_01cb6910[3] = 0;
      DAT_01cb6910[4] = 0;
      DAT_01cb6910[5] = 0;
      DAT_01cb6910[6] = 0;
      DAT_01cb6910[8] = 0;
      DAT_01cb6910[9] = 0;
      DAT_01cb6910[10] = 0;
      DAT_01cb6910[0xb] = 0;
      DAT_01cb6910[0xc] = 0;
    }
  }
  ExceptionList = local_c;
  return;
}

