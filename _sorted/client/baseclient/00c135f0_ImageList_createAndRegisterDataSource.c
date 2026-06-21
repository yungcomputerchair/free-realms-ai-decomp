// addr: 0x00c135f0
// name: ImageList_createAndRegisterDataSource
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ImageList_createAndRegisterDataSource(void * ui) */

bool __cdecl ImageList_createAndRegisterDataSource(void *ui)

{
  void *dataSource;
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates an ImageList-related data source, registers it, stores it in a UI
                       property slot, and sets the ImageList property name on the UI object. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015f5f2b;
  local_c = ExceptionList;
  dataSource = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  ExceptionList = &local_c;
  iVar1 = FUN_00e39c30(ui,0xffffffff,0);
  if (iVar1 != 0) {
    pvVar2 = Mem_Alloc(0x40);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_00c13500(iVar1);
    }
    local_4 = 0xffffffff;
    GuiDataSourceRegistry_registerDataSource(DAT_01be1090,pvVar2,dataSource);
    if (pvVar2 != (void *)0x0) {
      puVar3 = (undefined4 *)FUN_00e3b570(ui,4);
      *puVar3 = pvVar2;
      FUN_00e3aca0(ui,0xffffd8f0,PTR_s_ImageList_01b6b888);
      FUN_00e3b000(ui,0xfffffffe);
      ExceptionList = local_c;
      return true;
    }
  }
  ExceptionList = local_c;
  return false;
}

