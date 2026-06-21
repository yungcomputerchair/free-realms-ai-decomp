// addr: 0x00b98e10
// name: ClientPointOfInterestManager_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientPointOfInterestManager_ctor(void * this, void * client) */

void * __thiscall ClientPointOfInterestManager_ctor(void *this,void *client)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the point-of-interest manager, including its
                       PointOfInterestDefinitionManager and BaseClient.PointOfInterestData internal
                       datasource. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015e3cf1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PointOfInterestDefinitionManager_ctor(this);
  *(undefined ***)this = ClientPointOfInterestManager::vftable;
  *(void **)((int)this + 0x36e0) = client;
  *(undefined4 *)((int)this + 0x36e4) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  pvVar1 = Mem_Alloc(0x25c);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ClientPointOfInterestManager_InternalDs_ctor(pvVar1,"BaseClient.PointOfInterestData");
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00b97d60(pvVar1);
  ExceptionList = local_c;
  return this;
}

