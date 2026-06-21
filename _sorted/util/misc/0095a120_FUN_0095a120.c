// addr: 0x0095a120
// name: FUN_0095a120
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_0095a120(void)

{
  char cVar1;
  int iVar2;
  
                    /* Scans a global/object list for active entries with flag 0x9d set and a
                       predicate true for the entry resource; returns false if any such entry
                       exists. No class evidence. */
  FUN_01045d50();
  iVar2 = FUN_01045c80();
  iVar2 = *(int *)(iVar2 + 4);
  while( true ) {
    if (iVar2 == 0) {
      return 1;
    }
    if ((*(char *)(iVar2 + 0x9d) != '\0') &&
       (cVar1 = FUN_0072a1c0(*(undefined4 *)(iVar2 + 0x20)), cVar1 != '\0')) break;
    iVar2 = *(int *)(iVar2 + 0xc);
  }
  return 0;
}

