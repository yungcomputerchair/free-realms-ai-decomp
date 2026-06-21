// addr: 0x0102d560
// name: FUN_0102d560
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void init_8_bucket_free_list_304byte(void * obj) */

void __fastcall init_8_bucket_free_list_304byte(void *obj)

{
  undefined4 *puVar1;
  
                    /* Initializes an aligned internal free-list/pool with 8 chunks spaced 0x130
                       bytes apart and clears header flags. Exact owner is not evident. */
  *(undefined4 *)obj = 0;
  *(undefined4 *)((int)obj + 4) = 0;
  *(undefined1 *)((int)obj + 0x10) = 0;
  puVar1 = (undefined4 *)((int)obj + 0x18U & 0xfffffff8);
  *puVar1 = 0;
  puVar1[0x4c] = puVar1;
  *(undefined4 **)((int)obj + 8) = puVar1 + 0x4c;
  puVar1[0x98] = *(undefined4 *)((int)obj + 8);
  *(undefined4 **)((int)obj + 8) = puVar1 + 0x98;
  puVar1[0xe4] = *(undefined4 *)((int)obj + 8);
  *(undefined4 **)((int)obj + 8) = puVar1 + 0xe4;
  puVar1[0x130] = *(undefined4 *)((int)obj + 8);
  *(undefined4 **)((int)obj + 8) = puVar1 + 0x130;
  puVar1[0x17c] = *(undefined4 *)((int)obj + 8);
  *(undefined4 **)((int)obj + 8) = puVar1 + 0x17c;
  puVar1[0x1c8] = *(undefined4 *)((int)obj + 8);
  puVar1[0x214] = puVar1 + 0x1c8;
  *(undefined4 **)((int)obj + 8) = puVar1 + 0x214;
  *(undefined4 *)((int)obj + 0xc) = 8;
  return;
}

