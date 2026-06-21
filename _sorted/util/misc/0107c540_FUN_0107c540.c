// addr: 0x0107c540
// name: FUN_0107c540
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void zero_misc_record(undefined4 * record) */

void __fastcall zero_misc_record(undefined4 *record)

{
                    /* Zeros a fixed-size record including scalar fields, two byte flags, and
                       trailing fields. Class identity is not evident. */
  *record = 0;
  record[1] = 0;
  record[2] = 0;
  record[3] = 0;
  record[4] = 0;
  record[5] = 0;
  record[6] = 0;
  record[7] = 0;
  record[8] = 0;
  *(undefined1 *)(record + 9) = 0;
  *(undefined1 *)((int)record + 0x25) = 0;
  record[10] = 0;
  record[0xd] = 0;
  record[0xe] = 0;
  record[0xb] = 0;
  record[0xc] = 0;
  return;
}

