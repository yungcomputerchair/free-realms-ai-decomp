// addr: 0x009f89d0
// name: FUN_009f89d0
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void releaseThreeRefCountedFields(void * object) */

void __fastcall releaseThreeRefCountedFields(void *object)

{
  void *unaff_ESI;
  
                    /* Releases or retains three ref-counted fields at offsets 0xa8, 0xac, and 0xb0
                       using the shared ref-count helper. */
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,*(void **)((int)object + 0xa8),unaff_ESI);
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,*(void **)((int)object + 0xac),unaff_ESI);
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,*(void **)((int)object + 0xb0),unaff_ESI);
  return;
}

