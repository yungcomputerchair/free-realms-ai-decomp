// addr: 0x012a8f50
// name: StdString_dtor_012a8f50
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdString_dtor_012a8f50(void * str) */

void __fastcall StdString_dtor_012a8f50(void *str)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys/resets an MSVC std::string, freeing heap storage when capacity
                       exceeds SSO capacity 0xf. Evidence: checks +0x18 capacity, frees pointer at
                       +4, sets capacity 0xf, length 0, and null terminator. */
  puStack_8 = &LAB_0166c1f8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  if (0xf < *(uint *)((int)str + 0x18)) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)str + 4));
  }
  *(undefined4 *)((int)str + 0x18) = 0xf;
  *(undefined4 *)((int)str + 0x14) = 0;
  *(undefined1 *)((int)str + 4) = 0;
  return;
}

