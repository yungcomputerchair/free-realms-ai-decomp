// addr: 0x01010a10
// name: FUN_01010a10
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void init_video_capture_config(undefined4 * obj) */

void __fastcall init_video_capture_config(undefined4 *obj)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
                    /* Initializes a larger video capture/config structure from global templates and
                       constants, clears counters, and sets a final byte flag to zero. Exact class
                       identity is not evident. */
  uVar1 = DAT_01cb60b8;
  obj[1] = DAT_0187d048;
  *obj = DAT_01cb6080;
  obj[3] = uVar1;
  obj[2] = uVar1;
  obj[4] = 0;
  obj[5] = 0;
  puVar3 = &DAT_0187d0e0;
  puVar4 = obj + 6;
  for (iVar2 = 0x40; uVar1 = DAT_01cb607c, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  obj[0x46] = 0;
  obj[0x47] = 0;
  obj[6] = uVar1;
  obj[7] = 0xf8;
  *(undefined1 *)(obj + 0x48) = 0;
  return;
}

