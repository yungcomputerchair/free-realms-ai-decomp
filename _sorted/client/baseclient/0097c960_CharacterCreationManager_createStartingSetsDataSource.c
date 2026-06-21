// addr: 0x0097c960
// name: CharacterCreationManager_createStartingSetsDataSource
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CharacterCreationManager_createStartingSetsDataSource(void * this) */

bool __fastcall CharacterCreationManager_createStartingSetsDataSource(void *this)

{
  void *dataSource;
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates the BaseClient.StartingSets data source, stores it on the character
                       creation manager, registers it, and logs creation. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01598a7b;
  local_c = ExceptionList;
  dataSource = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(600);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CharacterCreationStartingSetsDataSource_ctor(pvVar1,*(void **)((int)this + 0x37c));
  }
  local_4 = 0xffffffff;
  *(void **)((int)this + 0x368) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  Log_Info(PTR_s_CharacterCreationManager_log_01b43930,"Created Starting Sets Data Source:  \"%s\"",
           PTR_s_BaseClient_StartingSets_01b6cb64);
  ExceptionList = local_c;
  return true;
}

