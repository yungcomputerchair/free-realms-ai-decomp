// addr: 0x01382b20
// name: ValueDataVector_destroyRange16
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ValueDataVector_destroyRange16(void * first, void * last) */

void __cdecl ValueDataVector_destroyRange16(void *first,void *last)

{
  void **ppvVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a range of 0x10-byte elements, advancing first to last and invoking
                       the element destructor helper for each slot under EH cleanup. */
  puStack_8 = &LAB_01682b2b;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ppvVar1 = &local_c;
  local_c = ExceptionList;
  for (; ExceptionList = ppvVar1, first != last; first = (void *)((int)first + 0x10)) {
    local_4 = 0xffffffff;
    FUN_01300cd0(uVar2);
    ppvVar1 = ExceptionList;
  }
  ExceptionList = local_c;
  return;
}

