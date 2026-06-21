// addr: 0x00f8ff80
// name: FUN_00f8ff80
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00f8ff80(void ** holderSlot) */

void __fastcall FUN_00f8ff80(void **holderSlot)

{
  undefined4 *_Memory;
  
                    /* Frees an allocated library-handle holder: unloads its HMODULE with
                       FreeLibrary, clears it, then frees the holder memory. Class name is unknown.
                        */
  _Memory = *holderSlot;
  if (_Memory != (undefined4 *)0x0) {
    if ((HMODULE)*_Memory != (HMODULE)0x0) {
      FreeLibrary((HMODULE)*_Memory);
      *_Memory = 0;
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}

