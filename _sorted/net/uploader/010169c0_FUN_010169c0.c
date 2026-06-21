// addr: 0x010169c0
// name: FUN_010169c0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_010169c0(void * pool) */

void __fastcall FUN_010169c0(void *pool)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    /* Initializes an intrusive free-list/pool with eight blocks and a block size of
                       0x20. No class evidence is visible. */
  *(undefined4 *)pool = 0;
  *(undefined4 *)((int)pool + 4) = 0;
  *(undefined1 *)((int)pool + 0x10) = 0;
  *(undefined4 *)((int)pool + 8) = 0;
  puVar2 = (undefined4 *)(((int)pool + 0x14U & 0xfffffffc) + 0x20);
  iVar3 = 8;
  do {
    puVar2[-8] = *(undefined4 *)((int)pool + 8);
    puVar2[-4] = puVar2 + -8;
    puVar1 = puVar2 + 4;
    *puVar2 = puVar2 + -4;
    *puVar1 = puVar2;
    puVar2 = puVar2 + 0x10;
    iVar3 = iVar3 + -1;
    *(undefined4 **)((int)pool + 8) = puVar1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)pool + 0xc) = 0x20;
  return;
}

