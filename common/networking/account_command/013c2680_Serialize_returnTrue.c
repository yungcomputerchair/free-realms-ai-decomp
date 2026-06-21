// addr: 0x013c2680
// name: Serialize_returnTrue
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: int Serialize_returnTrue(void) */

int Serialize_returnTrue(void)

{
  undefined4 in_EAX;
  
                    /* Trivial success helper returning true, used by container serialization once
                       all elements have been written. */
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

