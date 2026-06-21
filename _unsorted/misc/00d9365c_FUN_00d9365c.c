// addr: 0x00d9365c
// name: FUN_00d9365c
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00d9365c(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_01b84760;
  while ((lpCriticalSection = (LPCRITICAL_SECTION)*puVar1,
         lpCriticalSection == (LPCRITICAL_SECTION)0x0 || (puVar1[1] == 1))) {
    puVar1 = puVar1 + 2;
    if (0x1b8487f < (int)puVar1) {
      puVar1 = &DAT_01b84760;
      do {
        if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
          DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
        }
        puVar1 = puVar1 + 2;
      } while ((int)puVar1 < 0x1b84880);
      return;
    }
  }
  DeleteCriticalSection(lpCriticalSection);
                    /* WARNING: Subroutine does not return */
  _free(lpCriticalSection);
}

