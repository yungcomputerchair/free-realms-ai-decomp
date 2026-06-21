// addr: 0x005e2fd3
// name: FUN_005e2fd3
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_005e2fd3(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
                    /* Initializes a fixed table of 0x200 entries by setting every other dword to 1
                       and clearing three counters/fields at the end. No class/file evidence, so
                       left unnamed. */
  iVar2 = 0x1ff;
  puVar1 = param_1;
  do {
    *puVar1 = 1;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  param_1[0x401] = 0;
  param_1[0x400] = 0;
  param_1[0x402] = 0;
  return;
}

