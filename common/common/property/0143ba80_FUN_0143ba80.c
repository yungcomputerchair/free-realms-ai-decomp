// addr: 0x0143ba80
// name: FUN_0143ba80
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_0143ba80(void * dst, void * src) */

void FUN_0143ba80(void *dst,void *src)

{
  undefined1 local_18 [8];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds a small temporary object/string with parameter 2 recorded in a local
                       field, copies or converts parameter 1 into it via FUN_01312760, then destroys
                       the temporary. The exact property helper/class is not evident from this
                       isolated body. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01697d78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012fa910(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  FUN_01300680(2);
  local_10 = src;
  Property_cloneIfPresent(dst,local_18);
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return;
}

