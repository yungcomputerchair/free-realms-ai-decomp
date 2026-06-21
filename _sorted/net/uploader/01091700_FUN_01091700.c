// addr: 0x01091700
// name: FUN_01091700
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_01091700(void * object) */

bool __fastcall FUN_01091700(void *object)

{
                    /* Returns true when two required function-pointer/state slots at 0x1a8 and
                       0x1b8 are non-null. Likely an availability check, but the class is unknown.
                        */
  if ((*(int *)((int)object + 0x1a8) != 0) && (*(int *)((int)object + 0x1b8) != 0)) {
    return true;
  }
  return false;
}

