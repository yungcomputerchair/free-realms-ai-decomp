// addr: 0x009b4440
// name: GuiDataSourceRegistry_findActionBarDataSource
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuiDataSourceRegistry_findActionBarDataSource(void * this, char * name)
    */

void * __thiscall GuiDataSourceRegistry_findActionBarDataSource(void *this,char *name)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  
                    /* Hashes a data-source name, searches the registry bucket chain, and casts the
                       found GuiDataSource to ActionBarDataSource. Returns null on miss or failed
                       cast. */
  uVar2 = FUN_00705bc0(name);
  piVar1 = *(int **)((int)this + (uVar2 % 1000) * 4 + 0xaea4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (void *)0x0;
    }
    if (piVar1[2] == uVar2) break;
    piVar1 = (int *)piVar1[1];
  }
  if (*piVar1 == 0) {
    return (void *)0x0;
  }
  pvVar3 = (void *)FUN_00d8d382(*piVar1,0,&GuiDataSource::RTTI_Type_Descriptor,
                                &ActionBarDataSource::RTTI_Type_Descriptor,0);
  return pvVar3;
}

