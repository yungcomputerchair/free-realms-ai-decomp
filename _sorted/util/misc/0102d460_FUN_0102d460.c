// addr: 0x0102d460
// name: FUN_0102d460
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void init_8_bucket_free_list_216byte(void * obj) */

void __fastcall init_8_bucket_free_list_216byte(void *obj)

{
  undefined4 *puVar1;
  
                    /* Initializes an aligned internal free-list/pool with 8 chunks spaced 0xd8
                       bytes apart and clears header flags. Exact owner is not evident. */
  *(undefined4 *)obj = 0;
  *(undefined4 *)((int)obj + 4) = 0;
  *(undefined1 *)((int)obj + 0x10) = 0;
  puVar1 = (undefined4 *)((int)obj + 0x18U & 0xfffffff8);
  *puVar1 = 0;
  puVar1[0x36] = puVar1;
  *(undefined4 **)((int)obj + 8) = puVar1 + 0x36;
  puVar1[0x6c] = *(undefined4 *)((int)obj + 8);
  *(undefined4 **)((int)obj + 8) = puVar1 + 0x6c;
  puVar1[0xa2] = *(undefined4 *)((int)obj + 8);
  *(undefined4 **)((int)obj + 8) = puVar1 + 0xa2;
  puVar1[0xd8] = *(undefined4 *)((int)obj + 8);
  *(undefined4 **)((int)obj + 8) = puVar1 + 0xd8;
  puVar1[0x10e] = *(undefined4 *)((int)obj + 8);
  *(undefined4 **)((int)obj + 8) = puVar1 + 0x10e;
  puVar1[0x144] = *(undefined4 *)((int)obj + 8);
  puVar1[0x17a] = puVar1 + 0x144;
  *(undefined4 **)((int)obj + 8) = puVar1 + 0x17a;
  *(undefined4 *)((int)obj + 0xc) = 8;
  return;
}

