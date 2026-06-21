// addr: 0x01360780
// name: VirtualObject_discardGeneratedString
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VirtualObject_discardGeneratedString(void * obj) */

void __fastcall VirtualObject_discardGeneratedString(void *obj)

{
  void *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Calls virtual method +0x178 to fill a temporary string-like object, then
                       frees that temporary string buffer if allocated. The returned value is
                       discarded. */
  puStack_8 = &LAB_0167ebb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = 0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  (**(code **)(*(int *)obj + 0x178))(&local_1c,DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  puStack_8 = (undefined1 *)0xffffffff;
  if (local_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_1c);
  }
  ExceptionList = local_10;
  return;
}

