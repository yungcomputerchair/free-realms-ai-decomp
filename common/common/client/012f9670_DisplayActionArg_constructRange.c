// addr: 0x012f9670
// name: DisplayActionArg_constructRange
// subsystem: common/common/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DisplayActionArg_constructRange(void * dest, int count_, void * source)
    */

void __cdecl DisplayActionArg_constructRange(void *dest,int count_,void *source)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Constructs count consecutive 12-byte DisplayAction argument records at dest
                       by repeatedly invoking the element copy constructor. Evidence is the 0xc
                       stride and callers from the DisplayAction argument vector push helper. */
  puStack_c = &LAB_01675420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; count_ != 0; count_ = count_ + -1) {
    FUN_012f9480(dest,source);
    dest = (void *)((int)dest + 0xc);
  }
  ExceptionList = local_10;
  return;
}

