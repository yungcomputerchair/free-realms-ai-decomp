// addr: 0x0097c810
// name: CharacterCreationManager_createDataSource
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CharacterCreationManager_createDataSource(void * this, void * arg2, void
   * arg3, void * arg4) */

bool __thiscall
CharacterCreationManager_createDataSource(void *this,void *arg2,void *arg3,void *arg4)

{
  void *dataSource;
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a character-creation data source via FUN_00c29bb0, stores it
                       through the out pointer, and registers it with the GUI data source registry.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01598a4b;
  local_c = ExceptionList;
  dataSource = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x26c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_00c29bb0(arg2,arg3,arg4);
  }
  local_4 = 0xffffffff;
  *(void **)this = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  ExceptionList = local_c;
  return true;
}

