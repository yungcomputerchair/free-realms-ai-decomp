// addr: 0x00f8f610
// name: FUN_00f8f610
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00f8f610(void * moduleSlot, undefined4 newModule_) */

void __thiscall FUN_00f8f610(void *this,void *moduleSlot,undefined4 newModule_)

{
                    /* Replaces a stored module handle, freeing the previous HMODULE with
                       FreeLibrary if present. This looks like a dynamic-library handle setter in
                       the SSL support area but the class is not identified. */
  if (*(HMODULE *)this != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)this);
    *(undefined4 *)this = 0;
    *(void **)this = moduleSlot;
    return;
  }
  *(void **)this = moduleSlot;
  return;
}

