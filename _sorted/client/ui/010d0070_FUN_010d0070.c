// addr: 0x010d0070
// name: FUN_010d0070
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_010d0070(void * this, undefined4) */

void __thiscall FUN_010d0070(void *this,undefined4 *param_1)

{
  int iVar1;
  
                    /* Writes a zeroed four-int rectangle/vector to the output, then copies four
                       fields from the object at this+0x23e4 when present. Class and rectangle
                       meaning are unknown. */
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  iVar1 = *(int *)((int)this + 0x23e4);
  if (iVar1 != 0) {
    *param_1 = *(undefined4 *)(iVar1 + 4);
    param_1[1] = *(undefined4 *)(iVar1 + 8);
    param_1[2] = *(undefined4 *)(iVar1 + 0xc);
    param_1[3] = *(undefined4 *)(iVar1 + 0x10);
  }
  return;
}

