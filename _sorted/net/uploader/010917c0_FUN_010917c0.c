// addr: 0x010917c0
// name: FUN_010917c0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_010917c0(void * object) */

bool __fastcall FUN_010917c0(void *object)

{
                    /* Returns true only if a set of seven pointer/state slots from 0x1a8 through
                       0x208 are non-null. Likely a complete-initialization check for dynamically
                       loaded APIs, but class evidence is absent. */
  if ((((*(int *)((int)object + 0x1a8) != 0) && (*(int *)((int)object + 0x1b8) != 0)) &&
      (*(int *)((int)object + 0x1c8) != 0)) &&
     (((*(int *)((int)object + 0x1d8) != 0 && (*(int *)((int)object + 0x1e8) != 0)) &&
      ((*(int *)((int)object + 0x1f8) != 0 && (*(int *)((int)object + 0x208) != 0)))))) {
    return true;
  }
  return false;
}

