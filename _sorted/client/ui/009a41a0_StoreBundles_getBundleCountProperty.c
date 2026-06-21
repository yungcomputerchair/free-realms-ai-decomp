// addr: 0x009a41a0
// name: StoreBundles_getBundleCountProperty
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool StoreBundles_getBundleCountProperty(void * this, void * unused, int
   mode_, void * outValue) */

bool __thiscall
StoreBundles_getBundleCountProperty(void *this,void *unused,int mode_,void *outValue)

{
  void *pvVar1;
  
                    /* Finds the StoreBundles data source named by this+0x230 and, for mode 0,
                       writes the value at StoreBundles+0x12d4 to an output property. Returns true
                       if the data source exists. */
  pvVar1 = GuiDataSourceRegistry_findStoreBundles(DAT_01be1090,*(char **)((int)this + 0x230));
  if (pvVar1 == (void *)0x0) {
    return false;
  }
  if (mode_ == 0) {
    FUN_0082ecd0(outValue,&DAT_017703e0,*(undefined4 *)((int)pvVar1 + 0x12d4));
  }
  return true;
}

