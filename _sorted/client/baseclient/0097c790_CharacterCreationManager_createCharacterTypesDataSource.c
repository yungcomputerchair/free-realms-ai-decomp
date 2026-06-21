// addr: 0x0097c790
// name: CharacterCreationManager_createCharacterTypesDataSource
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CharacterCreationManager_createCharacterTypesDataSource(void * this) */

bool __fastcall CharacterCreationManager_createCharacterTypesDataSource(void *this)

{
  void *dataSource;
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates CharacterTypesDataSource, stores it at the manager field offset
                       0x208, and registers it. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01598a1b;
  local_c = ExceptionList;
  dataSource = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(600);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CharacterTypesDataSource_ctor(pvVar1,this);
  }
  local_4 = 0xffffffff;
  *(void **)((int)this + 0x208) = pvVar1;
  GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar1,dataSource);
  ExceptionList = local_c;
  return true;
}

