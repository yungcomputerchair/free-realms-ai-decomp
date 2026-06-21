// addr: 0x0140a030
// name: Vector16_copyConstructAndDiscard
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Vector16_copyConstructAndDiscard(void * this, int count) */

void * __thiscall Vector16_copyConstructAndDiscard(void *this,int count)

{
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a temporary vector-like buffer of 16-byte elements from a
                       count/source argument, then immediately releases its allocation before
                       returning this. This is likely a compiler-generated temporary/copy helper
                       around FUN_01409f80. */
  puStack_8 = &LAB_01691cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  FUN_01409f80(count,local_1c);
  local_4 = 0xffffffff;
  if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  ExceptionList = local_c;
  return this;
}

