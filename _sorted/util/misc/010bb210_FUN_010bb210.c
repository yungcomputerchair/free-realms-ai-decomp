// addr: 0x010bb210
// name: FUN_010bb210
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint allocate_unused_hash_key(int table_) */

uint __fastcall allocate_unused_hash_key(int table_)

{
  uint uVar1;
  int iVar2;
  
                    /* Scans for the first unused positive key below 100000 in the 1024-bucket hash
                       table, returning 0xffffffff on exhaustion. */
  uVar1 = 1;
  do {
    iVar2 = *(int *)(table_ + 0x18 + (uVar1 & 0x3ff) * 4);
    if (iVar2 == 0) {
      return uVar1;
    }
    while (*(uint *)(iVar2 + 0x54) != uVar1) {
      iVar2 = *(int *)(iVar2 + 0x50);
      if (iVar2 == 0) {
        return uVar1;
      }
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 100000);
  return 0xffffffff;
}

