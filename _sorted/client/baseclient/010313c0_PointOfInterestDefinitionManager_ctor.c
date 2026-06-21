// addr: 0x010313c0
// name: PointOfInterestDefinitionManager_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PointOfInterestDefinitionManager_ctor(void * this) */

void * __fastcall PointOfInterestDefinitionManager_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a PointOfInterestDefinitionManager by installing its vtable and
                       running the common exception/guard helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01636e9b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = PointOfInterestDefinitionManager::vftable;
  FUN_01031300(uVar1);
  ExceptionList = local_c;
  return this;
}

