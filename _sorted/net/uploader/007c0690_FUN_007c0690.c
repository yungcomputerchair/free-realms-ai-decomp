// addr: 0x007c0690
// name: FUN_007c0690
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void refreshModelMaterialEmitterIfReady(void * emitter) */

void __fastcall refreshModelMaterialEmitterIfReady(void *emitter)

{
  int iVar1;
  
                    /* If a readiness/helper check succeeds, reads material data from emitter+0xa0
                       and forwards it to an application routine. Exact owner class is inferred from
                       caller but not directly named. */
  iVar1 = FUN_007cfe50();
  if (iVar1 != 0) {
    iVar1 = *(int *)((int)emitter + 0xa0);
    FUN_0076f2d0(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),iVar1 + 0x48,
                 *(undefined4 *)(iVar1 + 0x58));
  }
  return;
}

