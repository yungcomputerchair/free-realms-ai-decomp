// addr: 0x006aabc4
// name: FUN_006aabc4
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void init_512_entry_default_table(undefined4 * table) */

void __fastcall init_512_entry_default_table(undefined4 *table)

{
  undefined4 *puVar1;
  int iVar2;
  
                    /* Initializes 512 four-dword entries: sets each first slot to 1 and second slot
                       to DAT_01bc7e28, then clears three trailing counters/fields. Class identity
                       is not evident. */
  iVar2 = 0x1ff;
  puVar1 = table;
  do {
    *puVar1 = 1;
    puVar1[1] = &DAT_01bc7e28;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  table[0x801] = 0;
  table[0x800] = 0;
  table[0x802] = 0;
  return;
}

