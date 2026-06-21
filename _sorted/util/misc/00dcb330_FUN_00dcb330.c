// addr: 0x00dcb330
// name: FUN_00dcb330
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00dcb330(void)

{
  char cVar1;
  
                    /* Ensures a key exists in a custom hash set/table: checks membership and
                       inserts the key if absent. No class evidence, so left unnamed. */
  cVar1 = FUN_00dcaa50(&stack0x00000004);
  if (cVar1 == '\0') {
    FUN_00dcb0d0(&stack0x00000004);
  }
  return;
}

