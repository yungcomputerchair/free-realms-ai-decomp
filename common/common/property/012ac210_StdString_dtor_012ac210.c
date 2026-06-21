// addr: 0x012ac210
// name: StdString_dtor_012ac210
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdString_dtor_012ac210(void * str) */

void __fastcall StdString_dtor_012ac210(void *str)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys/resets an MSVC std::string instance, freeing heap storage when
                       capacity exceeds 0xf and restoring SSO empty state. Evidence: identical
                       capacity/length/reset pattern to other std::string destructors. */
  puStack_8 = &LAB_0166c708;
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

