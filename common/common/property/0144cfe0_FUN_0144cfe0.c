// addr: 0x0144cfe0
// name: FUN_0144cfe0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_0144cfe0(void * this) */

void __fastcall FUN_0144cfe0(void *this)

{
  bool *pbVar1;
  int *unaff_ESI;
  
                    /* Sets a stack/local boolean obtained from FUN_0129d050 to true, then invokes
                       this object's vfunc at +0x3c. This appears to force an option/dirty flag
                       before dispatch, but the exact class is unknown. */
  pbVar1 = IntToBoolMap_getOrInsert((void *)((int)this + 0xf8),&stack0x00000004,unaff_ESI);
  *pbVar1 = true;
  (**(code **)(*(int *)this + 0x3c))();
  return;
}

